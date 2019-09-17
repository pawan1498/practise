#include<stdio.h>
int main() 
{
	//code
	int t ;
	scanf("%d" , &t);
	t = t+1;
	int count = 0 ;
	{
	   // printf("%d\n", t);
	    int arr[26] = {0};
	    char str[1001];
	  //  printf("=%d=",arr[2]-'a');
	    int space = 0;
	   // scanf("%s", &str);
	    gets(str);
	  //  printf("%s\n", str );
	    
	    int len = strlen(str);
	   
            for( int i = 0 ; i < len ; i++ )
	    {
	
	         
	        int val = str[i] - 'a';

	        if( arr[val] == 0 )
	        {
	            printf("%c", str[i]);
	            arr[val] = 1;
		    count ++;
	        }
	        
	        else if( arr[val] == 1)
	         continue;
	    }
	    
	    printf("\n");
	}
	printf("\nlongest chracter string %d",count);
	return 0;
}
