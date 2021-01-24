// { Driver Code Starts
#include <stdio.h>

int josephus(int n, int k);

int main()
{

	int n, k;
	scanf("%d", &n);
	scanf("%d", &k); //taking input n and k

	//calling josephus() function
	printf("%d", josephus(n, k));

	return 0;
} 
// } Driver Code Ends

/*You are required to complete this method */
int josephus(int n, int k)
{
	//Your code here
	if (n == 1)
		return 1;
	else
		return (josephus(n - 1, k) + k - 1) % n + 1;
}
