#include<stdio.h>
#include<string.h>
int main()
{
	char a[] = "pawan" ;
	char p[] = "nawap" ;	
        int c=0;
	int d=0 ; 
	int l = strlen(a);
	
	for(int i = 0 ; i< l ; i++)
	{
		c = c + a[i];
		d = d+ p[i]; 
	}
	
	if( c == d )
	  printf(" both string are permutation of each other ");
	else 
	  printf("both string are diff ");

	 

}
