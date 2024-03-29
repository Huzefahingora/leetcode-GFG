class Solution {
public:
    int minimumSum(int n, int k) {
        unordered_set<int> st;
        int ans = 0;

        for( int i = 1; st.size() < n; ++i)
        {
            if(st.find(k - i) == st.end())
            {
                st.insert(i);
                ans +=i;
            }
        }
        return ans;
    }
};