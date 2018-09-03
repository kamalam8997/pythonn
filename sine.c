#include <stdio.h>
#include <math.h>

#define PI 3.14159265

int main () {
   double x, ret, val;

   scanf("%lf",&x);
   val = PI / 180;
   ret = sin(x*val);
   printf("%.1f",ret);
   
   return(0);
}
