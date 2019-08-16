1. Dynamic Programming: is an algorithmic paradigm that solves a given complex problem by breaking 
   it into subproblems and stores the results of subproblems to avoid computing the same results again.
  
2. the two main properties that suggest it can solved by dynamic programming .
   a. overlapping subproblem 
   b. optimal substructure 

3. OVERLAPPING SUBPROBLEM :  
   a. Dynamic Programming is mainly used when solutions of same subproblems are needed again and again.
   b. In dynamic programming, computed solutions to subproblems are stored in a table so that these don’t have to be recomputed.
   c. example : fibonacci series.
   
   there are two diff ways to store data in tables :
   a. memoization
   b. tabulation 
   
4. Optimal Substructure: A given problems has Optimal Substructure Property if optimal solution of the given problem can be 
                         obtained by using optimal solutions of its subproblems.
   
   example : the Shortest Path problem
   
   On the other hand, the Longest Path problem doesn’t have the Optimal Substructure property. 
   Here by Longest Path we mean longest simple path (path without cycle) between two nodes. 
   Consider the following unweighted graph given in the CLRS book.
   There are two longest paths from q to t: q→r→t and q→s→t.
   Unlike shortest paths, these longest paths do not have the optimal substructure property. 
   For example, the longest path q→r→t is not a combination of longest path from q to r and longest path from r to t, 
   because the longest path from q to r is q→s→t→r and the longest path from r to t is r→q→s→t.
   
   

   R
