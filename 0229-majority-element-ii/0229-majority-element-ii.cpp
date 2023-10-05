class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        vector<int>ans;
        int n = nums.size()/3 + 1;
        for(int i =0 ; i < nums.size(); ++i)
        {
            mp[nums[i]]++;
            if(mp[nums[i]] == n)
            {
                ans.push_back(nums[i]);
            }
            if(ans.size() == 2)
            {
                break;
            }
        }
       
        return ans;
    }
};