


#include <stdio.h>
void main()
{
	int x;
	printf("Enter Number of problem : ");

	fflush(stdout);
	scanf("%d",&x);
	switch(x)
	{
	case(1):
		{
			float arr1[2][2],arr2[2][2],sumarr[2][2];
			printf("Enter the elements of 1st matrix \n");
			for(int i=0;i<2;i++)
			{
				for(int j=0;j<2;j++)
				{
					fflush(stdout),fflush(stdin);
					printf("Enter a%d%d: ",i+1,j+1);
					fflush(stdout),fflush(stdin);
					scanf("%f",&arr1[i][j]);
				}
			}
			printf("enter the elements of 2nd matrix \n");
			for(int i=0;i<2;i++)
			{
				for(int j=0;j<2;j++)
				{
					fflush(stdout),fflush(stdin);
					printf("Enter b%d%d: ",i+1,j+1);
					fflush(stdout),fflush(stdin);
					scanf("%f",&arr2[i][j]);
					sumarr[i][j]=arr1[i][j]+arr2[i][j];
				}
			}
			printf("Sum of Matrix: \n");
			for(int i=0;i<2;i++)
			{
				for(int j=0;j<2;j++)
				{
					printf("%.2f \t",sumarr[i][j]);
				}
				printf("\n");
			}
			break;
		}
	case(2):
		{
			int n;
			float num,sum=0;
			printf("Enter the numbers of data : ");
			fflush(stdout);
			scanf("%d",&n);
			for(int i=0;i<n;i++)
			{
				printf("%d. Enter number: ",i+1);
				fflush(stdout);
				scanf("%f",&num);
				sum+=num;
			}
			printf("Average = %.2f",sum/n);
			break;
		}
	case(3):
		{
			float arr1[100][100];
			int rows=0,column=0;
			printf("Enter rows and column of matrix: ");
			fflush(stdout);
			scanf("%d %d",&rows,&column);

			for(int i=0;i<rows;i++)
			{
				for(int j=0;j<column;j++)
				{
					fflush(stdout),fflush(stdin);
					printf("Enter a%d%d: ",i+1,j+1);
					fflush(stdout),fflush(stdin);
					scanf("%f",&arr1[i][j]);
				}
			}
			printf("Entered Matrix: \n");
			for(int i=0;i<rows;i++)
			{
				for(int j=0;j<column;j++)
				{
					printf("%.0f \t",arr1[i][j]);
				}
				printf("\n");
			}
			printf("Transpose of Matrix: \n");
			for(int i=0;i<column;i++)
			{
				for(int j=0;j<rows;j++)
				{
					printf("%.0f \t",arr1[j][i]);
				}
				printf("\n");
			}
		break;
		}
	case(4):
		{
			int n,x,y;
			int arr[100];
			int temparr[100];
			printf("Enter no of elements : ");
			fflush(stdout);
			scanf("%d",&n);
			for(int i=0;i<n;i++)
			{
				scanf("%d",&arr[i]);
			}
			printf("Enter the element to be inserted : ");
			fflush(stdout);
			scanf("%d",&x);
			fflush(stdout),fflush(stdin);
			printf("Enter the location : ");
			fflush(stdout),fflush(stdin);
			scanf("%d",&y);
			y--;
			for(int i=0;i<y;i++)
			{
				temparr[i]=arr[i];
			}
			temparr[y]=x;
			int i=0;
			for(i=i+y+1;i<n+1;i++)
			{
				temparr[i]=arr[i-1];
			}
			for(int i=0;i<n+1;i++)
			{
				printf("%d ",temparr[i]);
			}
			break;
		}
	case(5):
		{
			//using sequential search :)
			int n,arr[100],num,index=0;
			printf("Enter no of elements : ");
			fflush(stdout);
			scanf("%d",&n);
			for(int i=0;i<n;i++)
			{
				scanf("%d",&arr[i]);
			}
			printf("Enter the elements to searched : ");
			fflush(stdout);
			scanf("%d",&num);
			for(int i=0;i<n;i++)
			{
				if(arr[i]==num)
				{
					index = i;
					printf("Number found at the location = %d",index+1);
					break;
				}
			}
			break;
		}
	}
}
















