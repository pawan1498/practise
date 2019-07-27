#include<stdio.h>
#define N 3
#define M 3
int num(int n,int m,int arr[][m]);
int main()
{
    int mat[N][M] = { { 1, 1, 1}, 
                    { 1, 0, 0 }, 
                    { 1, 1, 1}}; 
 //  printf("%d",mat[3][3]);
   printf("%d", num(N-1,M-1,mat));
    

}
 int num(int n,int m,int arr[][m])
{
          if(arr[n][m] == 0 )
           return 0 ;
          if(n ==0 || m == 0)
           return 1 ;
         
           return num(m-1,n,arr)+num(m,n-1, arr);
}

