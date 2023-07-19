

#include <stdio.h>
int y;
static int c=1;
void file(void)
{
	printf("%d",c);
}
void main()
{
	int x;
	printf("Enter number of problem : ");
	fflush(stdout);
	scanf("%d",&x);
	switch(x)
	{
	case(1):
		{
			char str[100],c,counter=0;
			printf("Enter a string: ");
			fflush(stdout),fflush(stdin);
			gets(str);
			fflush(stdin),fflush(stdout);
			printf("Enter character to find frequency: ");
			fflush(stdout);
			scanf("%c",&c);
			fflush(stdin);
			for(int i=0;i<strlen(str);i++)
			{
				if(str[i]==c)
				{
					counter++;
				}
			}

			printf("Frequency of e = %d",counter);
			break;
		}
	case(2):
		{
			char str[100],counter=0;
			printf("Enter a string: ");
			fflush(stdout),fflush(stdin);
			gets(str);
			fflush(stdin),fflush(stdout);
			for(int i=0;str[i]!=0;i++)
			{
				counter++;
			}
			printf("Length of string : %d",counter);
			break;
		}
	case(3):
		{
			char str[100];
			int l=0;
			printf("Enter a string: ");
			fflush(stdout),fflush(stdin);
			gets(str);
			fflush(stdin),fflush(stdout);
			printf("Reverse string is : ");
			l=strlen(str)-1;
			for(int i=l;i>=0;i--)
			{
				printf("%c",str[i]);
			}
		}
	case(4):
		{
			static char c;
			printf("%c",c);
			file();
		}

	}
}






















