#include <stdio.h>
int sod(int n );
int main(void) {
int n = 2861;
printf("%d",sod(n));
}
int sod(int n )
{

// base condition
 if(n < 10 )
   return n;
 
 return (n%10) + sod(n/10);
}