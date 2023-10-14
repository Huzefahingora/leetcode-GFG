class Solution {
public:
    int high = 1e9;
    int solve(int index,int remains,vector<vector<int>>&dp,vector<int>&cost,vector<int>&time)
    {
        if(remains <= 0)return 0;
        if(index == cost.size()) return high;

        if(dp[index][remains] != -1)return dp[index][remains];
        
        int pick = solve(index + 1,remains-time[index] - 1,dp,cost,time) + cost[index];
        int notpick = solve(index + 1,remains,dp,cost,time);

        return dp[index][remains] = min(pick,notpick); 
    }
    int paintWalls(vector<int>& cost, vector<int>& time) {
        int n = cost.size();
        vector<vector<int>>dp(n,vector<int>(n+1,-1)) ;
        return solve(0,n,dp,cost,time);
    }
};