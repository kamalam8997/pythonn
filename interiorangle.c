#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,sum;
    scanf("%d %d %d",&a,&b,&c);
    sum=a+b+c;
    if(sum==180)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
}
