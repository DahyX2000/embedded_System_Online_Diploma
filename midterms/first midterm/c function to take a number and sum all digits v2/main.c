#include <stdio.h>
void sumalldigits(int x,int sum)
{
	while(x!=0)
	{
		sum+=x%10;
		x/=10;
	}
	fflush(stdout);
	printf("output : %d",sum);
}
int main()
{
    int x,sum=0;
    printf("input : ");
    fflush(stdout);
    scanf("%d",&x);
    fflush(stdin);
    sumalldigits(x,sum);

}
