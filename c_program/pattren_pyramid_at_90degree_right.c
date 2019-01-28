#include<stdio.h>
int main()
{
    int k =1;
    int i ,j,p;
    printf("enter number of max star for pyramid");
    printf("\nnumber should be odd ");
    printf("\np : ");
    scanf("%d",&p);

    for(i=1;i<=p;i++) // loop is used for next line
    {
      if(i<=(p+1)/2)
      {
          for(j=1;j<=i;j++)
          {
            printf("*");
          }
      }

      else
      {
          for(k=p;k>=i;k--)
          printf("*");
      }
      printf("\n");
    }


}
