#include <stdio.h>
int main()
{
    int n,t,num,z ;
    scanf("%d",&n);
    scanf("%d",&t);
    z=n;
    while(--t)
    {
        for(int i = 0; i< n ; i++)
        {
            num = z+num ;
        }
        z = num;
        if( t == 1)
            printf("%d",z);

        num = 0;
    }
    return 0;

}

