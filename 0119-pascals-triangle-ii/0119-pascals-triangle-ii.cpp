class Solution {
public:
    int ncr(int r,int c)
    {
        long long res = 1;
        for(int i =0; i < c; ++i)
        {
            res = res * ( r-i);
            res = res / (i + 1);
        }
        return res;
    }
    vector<int> getRow(int rowIndex) {
        vector<int>ans;
        for(int c = 0; c <= rowIndex; c++)
        {
            ans.push_back(ncr(rowIndex,c));
        }
        return ans;
    }
};