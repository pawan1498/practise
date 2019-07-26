#include<stdio.h>
int num(int,int);
int main()
{
       int M,N,x;
       scanf("%d%d",&M,&N);
       printf("%d", num(M,N));
       printf("\n");

       return 0;
}
 int num(int m,int n)
{
    return (m==1 || n==1)? 1:num(m-1,n)+num(m,n-1);
    
}
