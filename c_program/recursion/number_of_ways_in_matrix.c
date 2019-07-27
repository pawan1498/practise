#include<stdio.h>
#define N 4
#define M 4
int num(int n,int m,int arr[][m]);
int main()
{
    int mat[N][M] = { { 10, 10, 2, 0}, 
                    { 1, 0, 0, 30 }, 
                    { 0, 10, 4, 0}, 
                    { 1, 0, 2, 20 } }; 
 //  printf("%d",mat[0][0]);
   printf("%d", num(N,M,mat));
    

}
 int num(int n,int m,int arr[][m])
{
	return (m==1 || n==1 || arr[n][m]== 0)? 1:num(m-1,n,arr)+num(m,n-1, arr);
}

