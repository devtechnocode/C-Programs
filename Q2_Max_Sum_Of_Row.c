//Name :- Anand Patel   Reg. No.:-AM.EN.U4CSE19206    Batch:- S2-CSE 
#include<stdio.h>

void sums(int arr[100][100],int);

int main()
{
	int arr[100][100];     //initializing 2D-Array
	int lim;

	int i,j;
	
	printf("Enter the limit :");
	scanf("%d",&lim);
	printf("\n");

	printf("Enter the 2D Array : \n");
	for(i=0;i<lim;i++)
	{
		for(j=0;j<lim;j++)
			{
			scanf("%d",&arr[i][j]);
                        }
		printf("\n");
	}
	sums(arr,lim);
}

void sums(int arr[100][100],int lim)
{
	int i,j,s;
	int a[100];	
	for(i=0;i<lim;i++)
	{
		s=0;
		for(j=0;j<lim;j++)
		{
			s+=arr[i][j];        //sum of each row of 2D-Array
		}
		a[i]=s;
	}
	
	int l=0;
	for(i=0;i<lim;i++)
	{
		if(a[i]>l)       //checking for the maximum sum of the row from the 2D-Array
			l=a[i];
	}
	printf("Highest Sum Of Row : %d\n",l);
}
