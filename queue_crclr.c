#include<stdio.h>
int front=-1,rear=-1,queue[100],queue_size;
int isEmpty()
{
	if(front==-1 && rear==-1)
		return 1;
	else 
		return 0;
}
void enqueue(int element);
void dequeue();
void display();
int main()
{
	int choice,element;
	printf("Enter queue size: ");
	scanf("%d",&queue_size);
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
			case 1: printf("enter element to be pushed: ");
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
	if(front==(rear+1)%queue_size)
	{
		printf("QUEUE FULL\n");
		return;
	}
	else if(isEmpty())
	{
		front=0;
		rear=0;
	}
	else 
		rear=(rear+1)%queue_size;
	queue[rear]=element;
}
void dequeue()
{
	int element;
	if(isEmpty())
	{
		printf("QUEUE EMPTY\n");
		return;
	}
	element=queue[front];
	if(front==rear)
	{	front=-1;
		rear=-1;}
	else
		front=(front+1)%queue_size;
	printf("%d\n",element);	
}
void display()
{
	int element,temp=front;
	if(isEmpty())
	{
		printf("QUEUE EMPTY\n");
		return;
	}
	do
	{
		element=queue[temp];
		printf("%d\n",element);	
		temp=(temp+1)%queue_size;
	}while(temp!=rear+1);
}
