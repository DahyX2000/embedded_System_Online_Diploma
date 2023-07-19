/*
 * main.c
 *
 *  Created on: Jul 19, 2023
 *      Author: DahyX
 */

void reverse(int arr[])
{
	for(int i=4;i>=0;--i)
		{
			printf("%d ",arr[i]);
		}
}
#include <stdio.h>
int main()
{
	int arr[5]={1,2,3,4,5};
	reverse(arr);
}
