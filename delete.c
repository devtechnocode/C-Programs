#include<stdio.h>
void delete(char str[],char sub[],int index)
{
	int i,l;
	for(l=0;sub[l]!='\0';l++){}
	for(i=index;str[i+l]!='\0';i++)
	{
		str[i]=str[i+l];
	}
	str[i]='\0';
}
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
	int index;
	char str[30],sub[30];
	scanf("%[^\n]%*c",str);
	scanf("%[^\n]%*c",sub);
	index=search(str,sub);
	if(index!=-1) 
	{
		delete(str,sub,index);
	}
	printf("%s",str);
	return 0;
}
