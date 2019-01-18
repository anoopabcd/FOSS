#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int coeff;
	int exp;
	struct node *next;
}node_t;
node_t *head1,*head2,*head3,*temp1,*temp2,*temp3;
void display_poly(node_t *temp);
void create_poly()
{
	int repeat;
	printf("CREATING 1st POLYNOMIAL\n");
	head1=malloc(sizeof(node_t));
	temp1=head1;
	do
	{
		printf("Enter Coefficient: ");
		scanf("%d",&(temp1->coeff));
		printf("Enter Exponent: ");
		scanf("%d",&(temp1->exp));
		printf("\nAdd more terms to polynomial?(1/0): ");
		scanf("%d",&repeat);
		if(repeat)
		{
			temp1->next=malloc(sizeof(node_t));
			temp1=temp1->next;
		}
		else
			temp1->next=NULL;
	}while(repeat);
	printf("1st POLYNOMIAL SUCCESSFULLY CREATED\n");
	display_poly(head1);
	printf("CREATING 2nd POLYNOMIAL\n");
	head2=malloc(sizeof(node_t));
	temp2=head2;
	do
	{
		printf("Enter Coefficient: ");
		scanf("%d",&(temp2->coeff));
		printf("Enter Exponent: ");
		scanf("%d",&(temp2->exp));
		printf("\nAdd more terms to polynomial?(1/0): ");
		scanf("%d",&repeat);
		if(repeat)
		{
			temp2->next=malloc(sizeof(node_t));
			temp2=temp2->next;
		}
		else
			temp2->next=NULL;
	}while(repeat);
	printf("2nd POLYNOMIAL SUCCESSFULLY CREATED\n");
	display_poly(head2);
}
///////////////////////////////////////////////////
void display_poly(node_t *temp)
{	
	if(temp==NULL)
	{
		printf("NO NODES CREATED YET\n");
		return;
	}	
	while(temp!=NULL)
	{
		printf("%dX^%d",temp->coeff,temp->exp);
		temp=temp->next;
		if(temp)
			printf("+");
	}
	printf("\n");
}
//////////////////////////////////////////////////
void add_poly()
{
	head3=malloc(sizeof(node_t));
	temp3=head3;
	temp1=head1;
	temp2=head2;
	while(temp1 && temp2)
	{
		if(temp1->exp > temp2->exp)
		{
			temp3->coeff=temp1->coeff;
			temp3->exp=temp1->exp;
			temp1=temp1->next;
		}
		else if(temp1->exp < temp2->exp)
		{
			temp3->coeff=temp2->coeff;
			temp3->exp=temp2->exp;
			temp2=temp2->next;
		}
		else
		{
			temp3->exp=temp1->exp;
			temp3->coeff=temp1->coeff + temp2->coeff;
			temp1=temp1->next;
			temp2=temp2->next;
		}
		if(temp1 && temp2)
		{
			temp3->next=malloc(sizeof(node_t));
			temp3=temp3->next;
			temp3->next=NULL;
		}
	}
	while(temp1 || temp2)
	{
		temp3->next=malloc(sizeof(node_t));
		temp3=temp3->next;
		temp3->next=NULL;
		if(temp1)
		{
			temp3->coeff=temp1->coeff;
			temp3->exp=temp1->exp;
			temp1=temp1->next;
		}
		else if(temp2)
		{
			temp3->coeff=temp2->coeff;
			temp3->exp=temp2->exp;
			temp2=temp2->next;
		}
	}
	printf("\nRESULTANT POLYNOMIAL\n");
	display_poly(head3);
}
			
		
			
		
		
	
int main()
{
	create_poly();
	add_poly();
	return 0;
}
	
	
	
	

