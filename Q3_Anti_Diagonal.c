//Name :- Anand Patel   Reg. No.:-AM.EN.U4CSE19206    Batch:- S2-CSE 
#include<stdio.h>
void antidiagonal(int arr[100][100],int);
int main()
{
	int arr[100][100];   //initializing the 2D-Array
	int n;
	int a[10],l=0;
	printf("Enter the elements of the 2D-Array:\n");
	scanf("%d",&n);

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
			scanf("%d",&arr[i][j]);
		printf("\n");
	}
	antidiagonal(arr,n);     //calling the function antidiagonal
}
void antidiagonal(int arr[100][100],int n)
{
	int a[100];
	int s=0;
	int l;
	for(int i=0;i<n;i++)
	{
		a[i]=arr[i][n-1-i];      //each antidiagonal element of the 2D-Array
		s+=a[i];                  
	}
	l=a[0];
	for(int i=0;i<n;i++)
	{
		if(a[i]>l)
			l=a[i];
	}
	printf("Sum of anti-diagonal elements of 2D-Array: %d\n",s);
	printf("largest of the anti-diagonal elements : %d\n",l);
}

