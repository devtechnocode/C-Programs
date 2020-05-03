#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int count=0,x=0,y=0,flag1=0,flag2=0,flag3=0;
    printf("Enter the string: ");
    scanf("%s",str);
    for(int i=0; i<strlen(str); i++)
    {
        if(str[i]=='0')
        {
            x+=1;
        }
    }
    int arr[x+1];
    for(int j=0; j<strlen(str); j++)
    {
        if(str[j]=='0')
        {
            flag3=1;
            flag2=1;
            if(count==0)
            {
                continue;
                flag1=1;
            }
            else
            {
                arr[y]=count;
                count=0;
                y+=1;
                flag1=1;
            }
        }
        else if(str[j]=='1')
        {
            count+=1;
            flag2=0;
        }
    }
    if(flag1==1)
    {
        if(str[0]=='0')
        {
            for(int l=0; l<x-1; l++)
            {
                printf("%d ",arr[l]);
            }
        }
        else
        {
            for(int l=0; l<x; l++)
            {
                printf("%d ",arr[l]);
            }
        }
    }
    else
    {
        arr[0]=count;
        printf("%d",arr[0]);
    }
    if(flag2==1)
    {
        flag2==1;
    }
    else
    {
        if(flag3==0)
        {
            flag3=0;
        }
        else
        {
            printf("%d",count);
        }
    }
}

