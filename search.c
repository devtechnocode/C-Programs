#include<stdio.h>
int search(char str[],char sub[])
{
	int i=0,j=0,l;
	for(l=0;sub[l]!='\0';l++)
	while(sub[j]!='\0'&& str[i]!='\0')
	{
		if(str[i]==sub[j])
		{
			j++;
		}
		else j=0;
		i++;
	}
	if(j==l) return (i-j);
	else return -1;
}
int main()
{
	int result;
	char str[30],sub[30];
	scanf("%[^\n]%*c",str);
	scanf("%[^\n]%*c",sub);
	result=search(str,sub);
	if(result!=-1) printf("Substring found at index %d",result);
	else printf("Substring not found");
	return 0;
}
