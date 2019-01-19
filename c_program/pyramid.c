#include<stdio.h>
int main()
{
    int i ,j,p=5;
    for(i=0;i<p;i++)
    {
        for(int k =p ;k>i;k--)
        {
            printf(" ");
        }


        for(j=i;j>=0;j--)
        {
            printf("*");
        }
        for(int x=i;x>0;x--)
        {
            printf("*");
        }
        printf("\n");
    }
}
