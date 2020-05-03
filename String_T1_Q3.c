#include <stdio.h>
#include <string.h>
int main()
{
char str[10];	//declearing the str of limit 10
int i,j;
int flg=0;  //flag is used
scanf("%s",str);
int l=strlen(str);
for(i=0;i<l;i++) //loop to check common characters in the string
{
	for(j=i+1;j<l;j++)
	{
		if (str[i]==str[j]){
		flg=1;
		break;}
		
	
	}
}

if(flg==1)
	{     
	printf("NO");
		}
else
	
	{
printf("YES");
		}
return 0;
}
