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
int attack(int x , int y , int sol[N][N])
{
    //sol[x][y] = nq;  
    int nq = 0 ; 
    for(int i =0 ; i< N ; i++)
    {
        //rows
        if(check(x , i , sol))
        {
            if(sol[x][i] == N+1)
            sol[x][i] = nq;

        }
        
        //column
       if(check(i,y,sol))
       {
            if(sol[i][y] == N+1 )
            sol[i][y] = nq;

       }

       //d1+
       if(check(x+i,y+i,sol))
       {
            if(sol[x+i][y+i] == N+1 )
            sol[x+i][y+i] = nq;

       }
       //d1-
       if(check(x-i,y-i,sol))
       {
            if(sol[x-i][y-i] == N+1 )
            sol[x-i][y-i] = nq;

       }

       //d2+
       if(check(x+i,y-i,sol))
       {
            if(sol[x+i][y-i] == N+1 )
            sol[x+i][y-i] = nq;

       }

       //d2-
       if(check(x-i,y+i,sol))
       {
            if(sol[x-i][y+i] == N+1 )
            sol[x-i][y+i] = nq;

       } 
    }
    
    printsol(sol);
    return 1;   
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
            sol[i][j]=N+1;
        }
    int x = 0;
    int y = 0;
    sol[x][y] = 0; 
    attack(x,y,sol);
    printsol(sol);
    int nq=0 ;
    place_queen(nq ,x,y,sol);
    printsol(sol);
}
int place_queen(int nq , int row , int col , int sol[N][N])
{
    if( nq == N)
      return 1 ;
    nq++;
    for (int i = 0 ; i<N ;i++)
    {
         //if(attack(nq ,row , i , sol ))
         {
             sol[row][i] = nq;
             
         }
         break;
        
    }
}

