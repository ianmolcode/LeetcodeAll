class Solution {
    private:
    int mod;
    int memo[31][1001];
public:
    int numRollsToTarget(int n, int k, int target) {
        mod=1000000007;
        memset(memo,-1,sizeof(int)*31*1001);
      return fun(n,k,target);  
    }
    int fun(int n,int k,int target)
    {
        // Base Case
        if(target<0)
            return 0;
        
        if(n==0)
            return target==0?1:0;
        
        // Using memoization for repeatative cases
        if(memo[n][target]!=-1)
            return memo[n][target];
        
        // Recursive Calls
        int result=0;
        for(int i=1;i<=k;i++)
            result=((result%mod)+(fun(n-1,k,target-i)%mod))%mod;
    
        // Return Result
        return memo[n][target]=result;    
    }
};