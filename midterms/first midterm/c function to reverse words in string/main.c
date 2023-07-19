/*
 * main.c
 *
 *  Created on: Jul 19, 2023
 *      Author: DahyX
 */

void reverse(int length,int index,char arr[])
{
	for(int i=0;i<length;i++)
	{
		if(arr[i]==' ')
		{
			index = i;
			break;
		}
	}
	printf("output : ");
	for(int i=index+1;i<length;i++)
	{
		printf("%c",arr[i]);
	}
	printf(" ");
	for(int i=0;i<=index;i++)
	{
		printf("%c",arr[i]);
	}

}
#include <stdio.h>
int main()
{
	char arr[100];
	printf("input : ");
	fflush(stdout);
	gets(arr);
	int index=0;
	int length = strlen(arr);
	reverse(length,index,arr);

}
