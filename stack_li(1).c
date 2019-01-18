#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node *next;
}node_t;
node_t *head,*temp,*top;
void push(int element);
void pop();
void display();

int main()
{
	int choice,element;
	do
	{
		printf("1.PUSH\n");
		printf("2.POP\n");
		printf("3.DISPLAY\n");
		printf( "4.EXIT\n");
		printf("Enter your choice: ");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1: printf("enter element to be pushed: ");
					scanf("%d",&element);
					push(element);
					break;
			case 2:	pop();
					break;
			case 3: display();
					break;
			case 4: break;
			default:printf("Enter a valid choice: ");		
		}
	}while(choice!=4);
	
}

void push(int element)
{
	if(head==NULL)
	{
		head=malloc(sizeof(node_t));
		top=head;
	}
	else
	{
		top->next=malloc(sizeof(node_t));
		top=top->next;
	}
	top->data=element;
}

void pop()
{
	int element;
	temp=head;
	if(temp==NULL)
	{
		printf("STACK EMPTY\n");
		return;
	}
	else if(temp->next==NULL)
	{
		element=temp->data;
		top=head;
	}
	else
	{
		while(temp->next->next!=NULL)
			temp=temp->next;
		element=temp->next->data;
		free(temp->next);
		temp->next=NULL;			
		top=temp;
	}
	printf("%d \n",element);
}

void display()
{
	
	temp=head;
	if(temp==NULL)
	{
		printf("NO STACK CREATED YET\n");
		return;
	}	
	while(temp!=NULL)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
	}
	printf("\n");
}
