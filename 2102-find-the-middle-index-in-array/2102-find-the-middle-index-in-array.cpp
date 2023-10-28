class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int rightSum = accumulate(nums.begin(),nums.end(),0);
        // cout << rightSum << endl;
        int leftSum = 0;
        for(int i =0; i < nums.size(); ++i)
        {
            rightSum -= nums[i];
            // cout << "rs" << rightSum<<endl;
            if(rightSum == leftSum)return i;
            leftSum += nums[i];
            // cout << "ls" << leftSum<<endl;

        }
        return -1;
    }
};