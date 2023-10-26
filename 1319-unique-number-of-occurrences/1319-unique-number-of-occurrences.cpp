class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        // vector<int>(2001,0);
        unordered_map<int,int>fh;
        unordered_map<int,int>sh;
        for(auto i : arr)
        {
            fh[i]++;
        }
        for(auto s : fh)
        {
            sh[s.second]++;
        }
        for(auto i : sh)
        {
            if(i.second > 1)return false;
        }
        return true;
    }
};