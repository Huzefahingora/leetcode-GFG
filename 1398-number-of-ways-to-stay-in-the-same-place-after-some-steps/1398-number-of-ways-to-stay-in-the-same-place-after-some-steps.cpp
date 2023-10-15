class Solution {
public:
    const int mod=1e9+7;

    int numWays(int steps, int arrLen) {
        int n=min(steps/2+1, arrLen);//maximial reachable position 
        //Create a 2D vector dp to store the dynamic programming values
        //(remaining moves, index)
        vector<vector<int>> dp(2, vector<int>(n+1, 0));
        dp[0][0]=1;//Set the base case 1 way to start at position 0
        #pragma unroll
        for(int mv=1; mv<=steps; mv++){
            for(int i=0; i<=n; i++){
                //Compute the number of ways to reach the current position
                long long ans = dp[(mv-1)&1][i];
                if (i <n-1) ans = (ans+dp[(mv-1)&1][i+1]) % mod;
                if (i>0) ans = (ans+dp[(mv-1)&1][i-1]) % mod;
                dp[mv&1][i] = ans;
            }
        }
        return dp[steps&1][0];
    }
};