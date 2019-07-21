#include<stdio.h>
#include<string.h>

int main() {
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
	    char str1[100000];
	     scanf("%s",str1);
	    char str2[100000];
	     scanf("%s",str2);

      if(strlen(str1)!=strlen(str2))
        printf("NO\n");
     else
     {
         long long int count1=0;
         long long int count2=0;

         for(int j=0;j<strlen(str1);j++)
         {
             count1=count1+str1[j];
             count2=count2+str2[j];
         }

         if(count1==count2)
          printf("YES\n");
         else
         printf("NO\n");
     }

	}

	return 0;
}
