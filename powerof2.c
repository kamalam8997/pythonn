#include <stdio.h>
 
int main()
{
    int num;
    int tempNum,flag;
    scanf("%d",&num);
    tempNum=num;
    flag=0;
    while(tempNum!=1)
    {
        if(tempNum%2!=0){
            flag=1;
            break;
        }
        tempNum=tempNum/2;
    }
    if(flag==0)
        printf("yes");
    else
        printf("no");
    return 0;
}
