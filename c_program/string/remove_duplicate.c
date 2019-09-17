#include<stdio.h>
#include<string.h>
int main()
{
	char s[] = "pawan";
        int l  = strlen(s);
	int count = 0 ; 
	for(int i = 0 ; i< l ; i++)
	{
	       for(int j = 0 ; j <= i ; j++)
	       {
		       printf("*");
		       if( s[i] == s[j] )
			       count ++;
		       if( count )
		       {
			       printf("%c->", s[i]);
			       count = 0 ; 
		       }
		       
	       }
	       printf("\n");
	}
}


