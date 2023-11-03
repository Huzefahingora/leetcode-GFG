class Solution {
public:
    vector<string> buildArray(vector<int>& arr, int n) {
        vector<string>ans;
        int tp = 0;
        int sp = 1;
        while(tp < arr.size())
        {
            ans.push_back("Push");
            if(arr[tp] == sp)
            {
                tp++;
            }
            else
            {
                ans.push_back("Pop");
            }
            sp++;
        }
        return ans;
    }
};