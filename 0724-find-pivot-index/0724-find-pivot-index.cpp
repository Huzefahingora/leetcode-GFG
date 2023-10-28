class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        vector<int>prefix(n,0);
        vector<int>postfix(n,0);
        prefix[0] = nums[0];
        for(int i = 1; i < nums.size(); i++)
        {
            prefix[i] = prefix[i - 1] + nums[i];
        } 
        postfix[n - 1] = nums[n - 1];
        for(int i = n - 2; i >=0 ; --i)
        {
            postfix[i] = postfix[i + 1] + nums[i];
        }
        for(auto i : prefix)
        cout << i << endl;
        for(auto i : postfix)
        cout << i << endl;
        for(int i =0; i< n; ++i)
        {
            if(prefix[i] == postfix[i])
            {
                return i;
            }
        }
        return -1;
    }
};