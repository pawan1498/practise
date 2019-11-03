#include <iostream>
using namespace std;

void Change(int A[],int n,int V)
{
   int dp[V+1];
   
   dp[0] = 1;
   for(int i=1;i<=V;i++)
   {
       dp[i] = 0;
   }
   
   
   for(int i=0;i<n;i++)
   {
       for(int j=1;j<=V;j++)
       {
           if(j>=A[i])
           {
               dp[j] = dp[j] + dp[(j-A[i])];
           }
       }
   }
    
   cout << dp[V] << endl;
}
int main()
 {
	int t;
	cin >> t;
	
	while(t--)
	{
	    int n,c;
	    cin >> n;
	    
	    int A[n];
	    
	    for(int i=0;i<n;i++)
	    {
	        cin >> A[i];
	    }
	    
	    cin >> c;
	    
	    Change(A,n,c);
	}
	return 0;
}        	
