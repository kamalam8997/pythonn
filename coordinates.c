#include<stdio.h>

int main()
{
  int x1,y1,x2,y2,x3,y3,m1,m2; // m1=slope 1,m2=slope 2
  
  printf("Enter coordinates of 1st point (x1,y1) : ");
  scanf("%d%d",&x1,&y1);
  printf("Enter coordinates of 2nd point (x2,y2) : ");
  scanf("%d%d",&x2,&y2);
  printf("Enter coordinates of 3rd point (x3,y3) : ");
  scanf("%d%d",&x3,&y3);
  m1=(y2-y1)/(x2-x1);
  m2=(y3-y2)/(x3-x2);
  if(m1==m2)
  {
    printf(" yes");
  }
  else
  {
    printf(" no");
  }
  
}
