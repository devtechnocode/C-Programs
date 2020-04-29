//Name :- Anand Patel   Reg. No.:-AM.EN.U4CSE19206    Batch:- S2-CSE 
#include<stdio.h>
int uppertri(int arr[100][100],int,int);
int main()
{
	int arr[100][100];    //initializing the 2D-Array
	int r,c,i,j;
	

	printf("Enter the number of rows: "); //enter number of rows of 2D-Array
	scanf("%d",&r);
	printf("\n");

	printf("Enter the number of columns : "); //enter number of columns of 2D-Array
	scanf("%d",&c);
	printf("\n");

	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			scanf("%d",&arr[i][j]);
	}
	
	int s=uppertri(arr,r,c);  //calling function 

	
	
	if(s>=100)
		printf("YES\n");
	else
		printf("NO\n");
	
}
int uppertri(int arr[100][100],int r,int c)  //declaring function 
{
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			if(i>j)
				arr[i][j]=0;
		}
	}

	
	int sum=0;

	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
			sum+=arr[i][j];
	}
	return sum;
}

