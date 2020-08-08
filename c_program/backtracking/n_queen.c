#include<stdio.h>
#define N 4
int place_queen(int nq , int row , int col , int sol[N][N]);

void printsol(int sol[N][N])
{
    for(int i = 0 ; i < N ; i++)
    {
        for(int j = 0 ; j < N ; j++)
            printf(" %d ", sol[i][j]);
        printf("\n");
    }
}

int check(int x, int y, int sol[N][N])
{
    return ( x >= 0 && x < N && y >= 0 && y < N && sol[x][y]== 1 );
}

int solv(int x , int y , int sol[N][N])
{
    sol[2][3] = 5;
    
    for(int i =0 ; i< N ; i++)
    {
        //rows
        if(check(x , i , sol))
        {
            if(sol[x][i] == 1)
            sol[x][i] = 0;

        }
        
        //column
       if(check(i,y,sol))
       {
            if(sol[i][y] == 1 )
            sol[i][y] = 0;

       }

       //d1+
       if(check(x+i,y+i,sol))
       {
            if(sol[x+i][y+i] == 1 )
            sol[x+i][y+i] = 0;

       }
       //d1-
       if(check(x-i,y-i,sol))
       {
            if(sol[x-i][y-i] == 1 )
            sol[x-i][y-i] = 0;

       }

       //d2+
       if(check(x+i,y-i,sol))
       {
            if(sol[x+i][y-i] == 1 )
            sol[x+i][y-i] = 0;

       }

       //d2-
       if(check(x-i,y+i,sol))
       {
            if(sol[x-i][y+i] == 1 )
            sol[x-i][y+i] = 0;

       } 
    }
    printsol(sol);   
}

int main ()
{ 
    int sol[N][N] ;
   /* int sol[N][N] = { { 1, 1, 1, 1 },
                      { 1, 1, 1, 1 },
                      { 1, 1, 1, 1 },
                      { 1, 1, 1, 1 } };*/
    
    for(int i = 0 ; i < N ;i++)
        for (int j = 0 ; j< N ;j++)
        {
            sol[i][j]=1;
        }
    int x=2 ,y=3; 
    solv(x,y,sol); 
   // printsol(sol);
}
