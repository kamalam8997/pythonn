#include <stdio.h>
 
int main()
{
    int num,k;
    int tempNum,flag;
     
    
    scanf("%d",&num);
    scanf("%d",&k);
     
    tempNum=num;
    flag=0;

    while(tempNum!=1)
    {
        if(tempNum%k!=0){
            flag=1;
            break;
        }
        tempNum=tempNum/k;
    }
  
    if(flag==0)
        printf("yes");
    else
        printf("no");
      
    return 0;
}
