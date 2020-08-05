#include<stdio.h>
#define N 8
int check(int x , int y , int sol[N][N])
{
    return ( x >= 0 && x < N && y >= 0 && y < N && sol[x][y]== -1 );
}

void printsol(int sol[N][N])
{
    for(int i = 0 ; i < N ; i++)
    {   for(int j = 0 ; j < N ; j++)
            printf(" %3d ", sol[i][j]);
                printf("\n");
    }
}

int solvekt(int x , int y , int count , int xmove[N] , int ymove[N] , int sol[N][N])
{
       int xnext, ynext,k ;
       if(count == N*N )
       return 1 ;

       for(k = 0 ; k < 8 ; k++)
       {
           xnext = x + xmove[k];
           ynext = y + ymove[k];

           //check the next move is eligible for current location
          if (check(xnext, ynext, sol)){ 
                sol[xnext][ynext] = count ;
                if(solvekt(xnext , ynext , count+1 , xmove , ymove ,sol) == 1 ){
                  return 1 ;
                }
                else{
                  sol[xnext][ynext] = -1 ; // BACKTRACKING
                }
            }
       }
       return 0 ;
}



int main()
{
    int sol[N][N];
    int count = 1;
    for(int i = 0 ; i < N ;i++)
        for (int j = 0 ; j< N ;j++)
        {
            sol[i][j]=-1;
        }

    //defining movements in x and y direction

    // int xmove[8]  = {1,2,-1,-2,-2,-1, 1, 2};
    // int ymove[8] =  {2,1, 2, 1,-1,-2,-2,-1};

     int xmove[8] = {2,1,-1,-2,-2,-1,1,2};
     int ymove[8] = {1,2,2,1,-1,-2,-2,-1};   
    // intitially knight is at first block
    sol[0][0] = 0;

    //explore all the tour

    if(solvekt(0,0,count,xmove,ymove,sol) == 0 )
    {
        printf(" solution does not exists");
        return 0 ;
    }
    else
        printsol(sol);

    return 0;
}
