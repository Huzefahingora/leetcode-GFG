class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        //better
        // unordered_map<int,int>mp;
        // vector<int>ans;
        // int n = nums.size()/3 + 1;
        // for(int i =0 ; i < nums.size(); ++i)
        // {
        //     mp[nums[i]]++;
        //     if(mp[nums[i]] == n)
        //     {
        //         ans.push_back(nums[i]);
        //     }
        //     if(ans.size() == 2)
        //     {
        //         break;
        //     }
        // }
       
        // return ans;
        
        //best
        int cnt1 = 0, cnt2 = 0;
        int el1 = INT_MIN, el2 = INT_MIN;

        for(int i =0; i < nums.size(); ++i)
        {
            if(cnt1 == 0 && nums[i] != el2)
            {
                el1 = nums[i];
                cnt1 = 1;
            }
            else if(cnt2 == 0 && nums[i] != el1)
            {
                el2 = nums[i];
                cnt2 = 1;
            }
            else if(nums[i] == el1)cnt1++;
            else if(nums[i] == el2)cnt2++;
            else
            {
                cnt1--,cnt2--;
            }
        }
        cnt1 = 0, cnt2 = 0;
        vector<int>ans;
        for(int i =0; i < nums.size(); ++i)
        {
            if( el1 == nums[i])cnt1++;
            if(el2 == nums[i])cnt2++;
        }
        int n =  nums.size();
        if(cnt1 > n/3)ans.push_back(el1);
        if(cnt2 > n/3)ans.push_back(el2);
        return ans;
    }
};