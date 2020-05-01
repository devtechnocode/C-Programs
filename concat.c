#include<stdio.h>
void strcon(char *str1,char *str2,char *str3)
{
	int i=0,j=0;
	while(str1[i]!='\0')
	{
		str3[j++]=str1[i++];
	}
	i=0;
	while(str2[i]!='\0')
	{
		str3[j++]=str2[i++];
	}
	str3[j]='\0';
}
int main()
{
	char str1[30],str2[30],str3[30];
	gets(str1);
	gets(str2);
	strcon(str1,str2,str3);
	puts(str3);
	return 0;
}

