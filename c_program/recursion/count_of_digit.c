#include <stdio.h>
int sod(int n );
int main(void) {
int n = 286112122;
printf("%d",sod(n));
}
int sod(int n )
{

//   printf("%d",n);
// base condition
 if(n < 10 )
   return 1;
 return 1 + sod(n/10);
}