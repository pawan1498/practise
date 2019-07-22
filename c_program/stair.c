#include<stdio.h>
int ways(int n);
int main()
{
	printf("enter no of stairs n :");
	int n ;
	scanf("%d",&n);
        long w = ways(n);
	printf("no of ways :%ld", w);
}
int ways(int n )
{
	if(n == 1)
	  return 1 ;
	if(n == 2)
	  return 2 ; 
	


	return ways(n-1) + ways(n-2);
}
