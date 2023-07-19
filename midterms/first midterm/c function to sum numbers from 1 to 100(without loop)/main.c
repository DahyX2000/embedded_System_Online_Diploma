/*
 * main.c
 *
 *  Created on: Jul 19, 2023
 *      Author: DahyX
 */
#include <stdio.h>

static int sum =0;
void asd(int num)
{
	sum+=num;
	num--;
	if(num!=0)
	{
		asd(num);
	}

}
int main()
{
	int num=5;
	printf("enter nun = ");
	fflush(stdout);
	scanf("%d",&num);
	asd(num);
	fflush(stdin);
	printf("%d",sum);


}
