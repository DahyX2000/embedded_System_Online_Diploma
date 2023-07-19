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
int main()
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
}
