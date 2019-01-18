#include<stdio.h>
int top=-1,stack[100],stack_size;
int isEmpty()
{
	if(top==-1)
		return 1;
	else 
		return 0;
}
int isFull()
{
	if(top==stack_size-1)
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
	printf("Enter stack size: ");
	scanf("%d",&stack_size);
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
	if(isFull())
	{
		printf("STACK FULL\n");
		return;
	}
	else 
		stack[++top]=element;
}

void pop()
{
	int element;
	if(isEmpty())
	{
		printf("STACK EMPTY\n");
		return;
	}
	element=stack[top--];
	printf("%d\n",element);	
}
void display()
{
	int element,temp=top;
	if(isEmpty())
	{
		printf("STACK EMPTY\n");
		return;
	}
	do
	{
		element=stack[temp--];
		printf("%d\n",element);	
	}while(temp!=-1);
}
			
	
