/*
 * main.c
 *
 *  Created on: Jul 19, 2023
 *      Author: DahyX
 */
void count_the_max_numofones(int arr[],int temp,int i,int counter,int x)
{
	while(x!=0)
	{
		temp=x%2;
		arr[i]=temp;
		i++;
		x/=2;

	}
	for(int j=i;j>=0;j--)
	{
		if(arr[j]==1)
			counter++;
	}
	printf("output : %d",counter);
}
#include <stdio.h>
int main()
{
	int temp,x,i=0,counter=0;
	printf("input: ");
	fflush(stdout);
	scanf("%d",&x);
	fflush(stdin);
	int arr[100]={0};
	count_the_max_numofones(arr,temp,i,counter,x);

}
