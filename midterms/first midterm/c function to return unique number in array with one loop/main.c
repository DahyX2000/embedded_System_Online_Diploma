/*
 * main.c
 *
 *  Created on: Jul 19, 2023
 *      Author: DahyX
 */
#include <stdio.h>
int findUnique(int arr[], int n) {
    int unique = arr[0];
    for (int i = 1; i < n; i++) {
        unique ^= arr[i];
    }
    return unique;
}


int main()
{
	int arr[7]={4,2,5,2,5,7,4},length,counter=0;
	length = sizeof(arr)/sizeof(arr[0]);
	int n = findUnique(arr,length);
	printf("output = %d",n);
}
