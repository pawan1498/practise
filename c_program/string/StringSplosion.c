#include<stdio.h>
#include<string.h>
int main()
{
        char a[100] = "abc";
        int l = strlen(a);
        printf("%d\n",l);
        for( int i =0 ;i<l;i++)
        {
                for(int j = 0 ; j<=i;j++)
                {
                        printf("%c",a[j]);
                }
        }


}

