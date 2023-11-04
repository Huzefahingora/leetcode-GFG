class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        int ans = INT_MIN;
        for(auto i : left)
        ans = max(ans,i);
        for(auto s : right)
        ans = max(ans,n - s);
        return ans;
    }
};