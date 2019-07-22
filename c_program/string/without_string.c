#include<stdio.h>
#include<string.h>
char withoutstring(char base[] , char remove[]);

int main()
{
	char a[100] = "pawan";
	char b[10] = "a";
	printf("%s",b);
	 withoutstring(a , b);

}
char withoutstring(char base[] , char remove[])
{
    //   puts(remove);
	int l = strlen(base);
//	printf("%d", l );
	//printf("*%s*",'remove');
	for(int i = 0 ; i<l ; i++)
	{
		if(base[i] == 'a' && base[i+1] == 'w')
		{
		        for(int j = i ;j<l;j++)
	        	{
		        	base[j] = base[j+2];
	        	}
		}
	}
puts(base);
}
