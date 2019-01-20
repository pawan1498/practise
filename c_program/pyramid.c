#include<stdio.h>
int main()
{   
    int star =1; 
    int i ,j,p=5;
    for(i=0;i<p;i++) // loop is used for next line 
    {   
        for(int k =p ;k>i;k--) // used for left empty area
        {                      // and for making pyramid perfect by moving slightly  
            printf(" ");      
        }


        for(j=0;j<star;j++)// used for whole pyramid pattern 
        {                   
            printf("*");    // means at every iterartion of outer loop star is increased i by 2 
        }                   
        star = star+2;     // star is increased by 2  
        printf("\n");      // initially star is at 1 ,then 3->5->7........
    }
}
