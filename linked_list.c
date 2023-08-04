#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *link;
};
typedef struct node * NODE;

NODE getNode()
{
	NODE p;
	p=(NODE)malloc(sizeof(struct node));
	return p;
}

NODE insert_rear(NODE first)
{
	int val;
	NODE temp;
	printf("Enter element: ");
	scanf("%d",&val);
	if(first==NULL)
	{
		temp=getNode();
		temp->data=val;
		temp->link=NULL;
		return temp;
	}
	else
	{
		NODE cur=first;
		temp=getNode();
		temp->data=val;
		temp->link=NULL;
		while(cur->link!=NULL)
		{
		   cur=cur->link;
		}
		cur->link=temp;
		return first;	
	}
}

NODE reverseList(NODE first)
{
	NODE cur=first;
	NODE prev=NULL;
	NODE next=cur;
	if(first->link==NULL)
	{
		return first;
	}
	while(next!=NULL)
	{
		cur=next;
		next=cur->link;
		cur->link=prev;
		prev=cur;
	}
	return cur;
}

void printList(NODE first)
{
	NODE cur=first;
	while(cur!=NULL)
	{
		printf("%d ",cur->data);
		cur=cur->link;
	}
	printf("\n");
}
int main()
{
	NODE first1=NULL;
	NODE first2=NULL;
	printf("First ll:\n");
	for(int i=0;i<3;i++)
	{
		first1=insert_rear(first1);
	}
	printf("Second ll:\n");
	for(int i=0;i<3;i++)
	{
		first2=insert_rear(first2);
	}
	printf("First List contents:\n");
	printList(first1);
	printf("Second List contents:\n");
	printList(first2);
	first1=reverseList(first1);
	printf("First List contents after reversing:\n");
	printList(first1);
	return 0;
}
