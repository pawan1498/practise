#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main()
{
	char str[] = "sonia";

	int r = isunique(str);
	if(r == 1 )
		printf("true ");
	if(r== 0 )
		printf("false");
}

 isunique( char str[])
{
	int l = strlen(str);
	int  char_set[1000] ;
	for(int i =0 ; i< l ; i++)
	{
		int val  = str[i];

		if( char_set[val])
		  return 0;

		char_set[val] = 1 ; 
	}
	return 1 ; 
}

