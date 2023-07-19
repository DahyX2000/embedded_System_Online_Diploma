


#include "stdio.h"
int main()
{
	int x;
	printf("Please enter number of EX : ");
	fflush(stdout);
	scanf("%d",&x);

	switch(x)
	{
	case (1):
		{
			int num;
			printf("%Enter an integer you want check : ");
			fflush(stdout),fflush(stdin);
			scanf("%d",&num);
			if(num%2==0)
			{
				printf("%d is even.",num);
			}
			else
			{
				printf("%d is odd.",num);
			}
			break;
		}
	case(2):
		{
			char x;
			printf("Enter an alphabet : ");
			fflush(stdout);fflush(stdin);
			scanf("%c",&x);
			fflush(stdin);fflush(stdout);
			if(x=='a' || x=='e' || x=='i' || x=='o' || x=='u')
			{
				fflush(stdin);fflush(stdout);
				printf("%c is a vowel.",x);
			}
			else
			{
				fflush(stdin);fflush(stdout);
				printf("%c is a constant.",x);
			}
			break;
		}
	case(3):
		{
			float a,b,c,max;
			printf("enter three value : ");
			fflush(stdout);fflush(stdin);
			scanf("%f %f %f",&a,&b,&c);
			if(a>b && a>c)
				max=a;
			else if (b>c)
				max=b;
			else
				max=c;
			printf("largest number : %f",max);
			break;
		}
	case(4):
		{
			float num;
			printf("Enter a number : ");
			fflush(stdout);fflush(stdin);
			scanf("%f",&num);
			if(num >0)
				printf("%f is positive.",num);
			else if (num <0)
				printf("%f is negative.",num);
			else
				printf("you entered zero.");
			break;
		}
	case(5):
		{
			char x;
			printf("Enter a character : ");
			fflush(stdout);fflush(stdin);
			scanf("%c",&x);
			if (x<= 122 && x>= 65)
				printf("%c is an alphabet",x);
			else
				printf("%c is not an alphaber",x);
			break;

		}
	case(6):
		{
			int x,sum=0;
			printf("enter n number : ");
			fflush(stdout);
			scanf("%d",&x);
			for(;x>=0;x--)
			{
				sum+=x;
			}
			printf("sum = %d",sum);
			break;
		}
	case(7):
		{
			int x,fact=1;
			printf("enter n number : ");
			fflush(stdout);
			scanf("%d",&x);
			if(x>0)
			{
				for(;x>0;x--)
				{
					fact*=x;
				}
			}
			else
			{
				printf("Error!!! factorial of negative number doesn't exist.");
				return 0;
			}
			printf("Factorial = %d",fact);
			break;
		}
	case(8):
		{
			char operation;
			float x,y,result;
			l1:
			printf("Enter operator either + or - or * or divide ");
			fflush(stdout);fflush(stdin);
			scanf("%c",&operation);
			fflush(stdin);fflush(stdout);
			printf("Enter two operands : ");
			fflush(stdout);fflush(stdin);
			scanf("%f %f",&x,&y);
			switch (operation)
			{
			case('+'):
				{
					result = x+y;
					printf("%f + %f = %f",x,y,result);
					break;
				}
			case('-'):
				{
					result = x-y;
					printf("%f - %f = %f",x,y,result);
					break;
				}
			case('*'):
				{
					result = x*y;
					printf("%f * %f = %f",x,y,result);
					break;
				}
			case('/'):
				{
					result = x/y;
					printf("%f / %f = %f",x,y,result);
					break;
				}
			default:
				{
					printf("Faild input ");
					goto l1;
				}
			}
			break;
		}
	}

}
