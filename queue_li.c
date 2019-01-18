#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node *next;
}node_t;
node_t *head,*temp,*front,*rear;
void enqueue(int element);
void dequeue();
void display();

int main()
{
	int choice,element;
	do
	{
		printf("1.ENQUEUE\n");
		printf("2.DEQUEUE\n");
		printf("3.DISPLAY\n");
		printf( "4.EXIT\n");
		printf("Enter your choice: ");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1: printf("enter element to be queued: ");
					scanf("%d",&element);
					enqueue(element);
					break;
			case 2:	dequeue();
					break;
			case 3: display();
					break;
			case 4: break;
			default:printf("Enter a valid choice: ");		
		}
	}while(choice!=4);
	return 0;
	
}

void enqueue(int element)
{
	if(front==NULL && rear==NULL)
	{
		head=malloc(sizeof(node_t));
		front=head;
		rear=head;
	}
	else
	{
		rear->next=malloc(sizeof(node_t));
		rear=rear->next;
	}
	rear->data=element;
}

void dequeue()
{
	int element;
	
	if(front==NULL && rear==NULL)
	{
		printf("QUEUE EMPTY\n");
		return;
	}
	element=front->data;
	if(front==rear)
	{
		free(front);
		front=NULL;
		rear=NULL;
	}
	else
	{
		temp=front;
		front=front->next;
		free(temp);		
	}
	printf("%d \n",element);
}

void display()
{
	
	temp=front;
	if(temp==NULL)
	{
		printf("NO QUEUE CREATED YET\n");
		return;
	}	
	while(temp!=NULL)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
	}
	printf("\n\n");
}
