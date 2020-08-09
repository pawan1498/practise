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
    return ( x >= 0 && x < N && y >= 0 && y < N );
}

int attackposition(int queen ,int x , int y , int sol[N][N])
{
   
    for(int i =0 ; i< N ; i++)
    {
        //rows
       
        if(check(x , i , sol))
        {
            if(sol[x][i] == -1);
            else
            {
                printf("under attack 1");
                return 0 ;
            }
        }
        
        //column
       if(check(i,y,sol))
       {
            if(sol[i][y] == -1 );
            else
            {
                printf("under attack 2");
                return 0 ;
            }
       }

       //d1+
       if(check(x+i,y+i,sol))
       {
            if(sol[x+i][y+i] == -1 );
            else
            {
                printf("under attack 3");
                return 0;
            }
       }

       //d1-
       if(check(x-i,y-i,sol))
       {
            if(sol[x-i][y-i] == -1 );
            else
            {
                printf("under attack 4");
                return 0;
            }
       }

       //d2+
       if(check(x+i,y-i,sol))
       {
            if(sol[x+i][y-i] == -1 );
            else
            {
                printf("under attack 5");
                return 0;
            }

       }

       //d2-
       if(check(x-i,y+i,sol))
       {
            if(sol[x-i][y+i] == -1 );
            else
            {
                printf("under attack 6");
                return 0;
            }
       } 
    }   
   return 1;
}

int place_queen(int queen , int row , int col , int sol[N][N])
{
    if( queen == N)
      return 1 ;
    queen++;
    for (int i = 0 ; i<N ;i++)
    {
         if(attackposition(queen,row , i , sol ))
         {
             sol[row][i] = queen;
             printsol(sol);
             if(place_queen(queen , row+1,col,sol) == 1)
                 return 1;
             else
             {
                 sol[row][i] = -1;
             }   
         }
    }
}

int main ()
{ 
    int sol[N][N] ;
   
    for(int i = 0 ; i < N ;i++)
        for (int j = 0 ; j< N ;j++)
        {
            sol[i][j]=-1;
        }
   int queen=0 ; 
   int row =0 , col =0 ;  
   place_queen(queen ,row,col,sol);
   
}
