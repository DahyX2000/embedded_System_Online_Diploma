#include <stdio.h>
#include <math.h>




int main()
{
	float x;
	printf("input : ");
	fflush(stdout);
	scanf("%f",&x);
	fflush(stdin);
	printf("output:%.3f", sqrt(x));
	fflush(stdout);

}
