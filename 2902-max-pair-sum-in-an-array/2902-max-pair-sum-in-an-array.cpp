class Solution {
public:
       int maxSum(vector<int>& nums) {
        vector<vector<int>> groupedNums(10);
        int maxSum = -1;

        
        for (int num : nums) {
            int maxDigit = getMaxDigit(num);
            groupedNums[maxDigit].push_back(num);
        }

      
        for (int i = 9; i >= 0; --i) {
            int groupSize = groupedNums[i].size();
            if (groupSize >= 2) {
                sort(groupedNums[i].rbegin(), groupedNums[i].rend()); 
                int sum = groupedNums[i][0] + groupedNums[i][1];
                maxSum = max(maxSum, sum);
            }
        }

        return maxSum;
    }

private:
    int getMaxDigit(int num) {
        int maxDigit = 0;
        while (num > 0) {
            maxDigit = max(maxDigit, num % 10);
            num /= 10;
        }
        return maxDigit;
    }
};