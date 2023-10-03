class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int n = nums.size();
        int ans = 0; 
        vector<int>freq(101,0);
        for(int x : nums)
        {
            ans +=freq[x];
            freq[x]++;
        }
        return ans;
    }
};