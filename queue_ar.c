#include<stdio.h>
int front,rear,queue[100],queue_size;
int isEmpty()
{
	if(front==-1 && rear==-1)
		return 1;
	else 
		return 0;
}
void push(int element);
void pop();
void display();
int main()
{
	int choice,element;
	printf("Enter queue size: ");
	scanf("%d",&queue_size);
	front=-1,rear=-1;
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
	if(rear==queue_size-1)
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
		++rear;
	queue[rear]=element;
}
void pop()
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
		++front;
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
		temp++;
	}while(temp!=rear+1);
}
		
		
	
		
	
		
		
		
	
	
