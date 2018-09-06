#include<stdio.h>
int main()
{
    int p,t,r,i,res;
    scanf("%d %d %d",&p,&t,&r);
    i=(p*t*r)/100;
    res=floor(i);
    printf("%d",res);
}
