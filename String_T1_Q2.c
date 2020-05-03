#include <stdio.h>
#include <string.h>
int main()
{
char str[10]; //declearing the str of limit 10
int i;
scanf("%s",str);
int l=strlen(str);
char x;

if (l%2==0) //to check the length of the string
	{
	for(i=0;i<l;i=i+2)
		{
		x=str[i];
		str[i]=str[i+1];
		str[i+1]=x;
		}
	printf("%s",str);

	}
else
	printf("Not Possible as string length is odd");

return 0;
}
