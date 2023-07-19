/*
 * main.c
 *
 *  Created on: Jul 13, 2023
 *      Author: shrif
 */
#include <stdio.h>
int prime_numbers(int x)
{
	int counter=0,i;
	for(i=1;i<=x;i++)
	{
		if(x%i==0)
			counter++;
		if(counter>2)
			return -1;
	}
	return x;

}
int factorial_using_recurtion(int x)
{
	static int fact=1;
	if(x>0)
	{
		fact*=x--;
		factorial_using_recurtion(x);
	}
	else return fact;

}
void reverse_using_recurtion(char statement[],int length)
{
	static int i= 1;
	if(i<= length)
	{
		printf("%c",statement[length-i]);
		i++;
		reverse_using_recurtion(statement,length);
	}


}
int power_using_recurtion(int x,int y)
{
	static int counter=0;
	if(counter<=y)
	{
		x*=x;
		counter++;
	}
	return x;
}

void main()
{
	int x;
	printf("Enter number of problem : ");
	fflush(stdout);
	scanf("%i",&x);
	switch(x)
	{
		case(1):
		{
			int x,y,counter=0;

			printf("Enter two numbers(intervals) : ");
			fflush(stdout);
			scanf("%i %i",&x,&y);
			fflush(stdin);
			printf("prime number between %i and %i are: ",x,y);
			fflush(stdout);
			int i;
			for(i=x;i<=y;i++)
			{
				int k;
				k=prime_numbers(i);
				if(k==-1)
					continue;
				else
					printf("%d \t",i);
			}
			break;

		}
		case(2):
		{
			int x,fact;
			printf("Enter an positive number : ");
			fflush(stdout);
			scanf("%d",&x);
			fflush(stdin);
			fact=factorial_using_recurtion(x);
			printf("Factorial of %i = %d",x,fact);
			break;
		}
		case(3):
		{
			char arr[100];
			fflush(stdout),fflush(stdin);
			printf("Enter a statement : ");
			fflush(stdout),fflush(stdin);
			gets(arr);
			int length = strlen(arr);
			reverse_using_recurtion(arr,length);
			break;
		}
		case(4):
		{
			int base,power,result;
			printf("Enter base of number : ");
			fflush(stdout);
			scanf("%d",&base);
			fflush(stdin);
			printf("Enter power number(positive number): ");
			fflush(stdout);
			scanf("%d",&power);
			result = power_using_recurtion(base,power);
			fflush(stdin);
			printf("%d^%d = %d",base,power,result);
			break;
		}
		case(5):
		{
			int i=3,j=5,k=15;
			printf("%d",sizeof(k/=11+ ++i));
			printf("%d",k);
		}
	}

}




