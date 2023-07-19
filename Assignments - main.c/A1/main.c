
#include <stdio.h>

void main()
{
	int choise=0;
	printf("Please select number of problem : ");
	fflush(stdout);
	scanf("%i",&choise);
	fflush(stdin);
	switch(choise)
	{
	case(1):
		{
			printf("C Programming");
			break;
		}
	case(2):
		{
			int x;
			printf("Enter a integer : ");
			fflush(stdout);
			scanf("%i",&x);
			fflush(stdin);
			printf("you entered : %i",x);
			break;
		}
	case(3):
		{
			int x=0,y=0;
			printf("Enter two integer : ");
			fflush(stdout);
			scanf("%d %d",&x,&y);
			printf("Sum : %d",x+y);
			break;
		}
	case(4):
		{
			float x=0,y=0;
			printf("Enter two numbers : ");
			fflush(stdout);
			scanf("%f %f",&x,&y);
			printf("Product : %f",x+y);
			break;
		}
	case(5):
		{
			char x;
			printf("Enter a character : ");
			fflush(stdout);
			scanf("%c",&x);
			printf("ASCII value of G : %d",x);
			break;
		}
	case(6):
		{
			float a=0,b=0,temp=0;
			printf("enter value of a : ");
			fflush(stdout),fflush(stdin);
			scanf("%f",&a);

			printf("enter value of b : ");
			fflush(stdout),fflush(stdin);
			scanf("%f",&b);
			temp = a;
			a=b;
			b=temp;
			printf("After swapping, value of a = %f",a);
			printf("\r\After swapping, value of b = %f",b);
			break;
		}
	case(7):
		{
		float a=0,b=0,temp=0;
		printf("enter value of a : ");
		fflush(stdout),fflush(stdin);
		scanf("%f",&a);

		printf("enter value of b : ");
		fflush(stdout),fflush(stdin);
		scanf("%f",&b);

		a+=b;
		b=a-b;
		a=a-b;
		printf("After swapping, value of a = %f",a);
		printf("\r\After swapping, value of b = %f",b);
		break;

		}


	}

}
