class Solution {
public:
  int countPairs(vector<int>& nums, int target) {
        int cnt = 0 ;
        int n = nums.size();
        multiset<int>st ;
        for(int i = 0 ; i < n ;i++){
            auto pos = st.lower_bound(target-nums[i]);
            cnt += distance(st.begin(),pos);
            st.insert(nums[i]);
        }
        return cnt ;
    }
};