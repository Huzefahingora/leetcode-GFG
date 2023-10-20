class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxi = INT_MIN;
        int n = candies.size();
        vector<bool>ans;
        for(int i = 0; i < n; i++)
        {
            maxi = max(maxi,candies[i]);
        }
        for(int i = 0; i < n; ++i)
        {
            if(candies[i] + extraCandies >= maxi )
            {
                ans.push_back(true);
            }
            else
            {
                ans.push_back(false);
            }
        }
        return ans;
    }
};