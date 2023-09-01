class Solution {
public:
int bitCount(int num){
    int count = 0;
     while (num) {
        count += num & 1;
        num >>= 1;
    }
    return count;
}
    vector<int> countBits(int n) {
        vector<int>ans;

        if(n == 0)
        {
            ans.push_back(0);
        }
        else
        {
            for(int i = 0; i <= n; i++)
            {
                int no = bitCount(i);
                ans.push_back(no);
            }
        }
      
        return ans;
    }
};