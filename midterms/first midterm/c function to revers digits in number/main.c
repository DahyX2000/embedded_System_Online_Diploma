/*
 * main.c
 *
 *  Created on: Jul 19, 2023
 *      Author: DahyX
 */

void reverse_using_recurtion(int x)
{
	int temp ;
	temp = x%10;
	if(temp!=0)
		printf("%d",temp);
	if(x>0)
		reverse_using_recurtion(x/10);

}
#include <stdio.h>
int main()
{
	int x,length=0;
	printf("enter number : ");
	fflush(stdout);
	scanf("%d",&x);
	reverse_using_recurtion(x);

}
