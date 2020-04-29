//Name :- Anand Patel   Reg. No.:-AM.EN.U4CSE19206    Batch:- S2-CSE   
#include <stdio.h>

void transpose(int a[10][10],int);

int main()
{
   int i,j;
   int a[10][10];  //initializing the 2D-Array

   int lim;
   printf("Enter the limit : ");
   scanf("%d",&lim);
   
   for(i=0;i<lim;i++)
   {
       for(j=0;j<lim;j++)
       		scanf("%d",&a[i][j]);
   }
printf("The transpose matrix :\n"); 
	transpose(a,lim);     //Calling the function transpose
}

void transpose(int a[10][10],int lim)
   
{
	int i,j;
   int b[lim][lim];
   	for(i=0;i<lim;i++)
   	{
      		for(j=0;j<lim;j++)
       			b[i][j]=a[j][i];   //interchanging rows and columns
	}
   for(i=0;i<lim;i++)
   {
	for(j=0;j<lim;j++)
         	printf("%d\t",b[i][j]);
   	printf("\n");
   }
}

