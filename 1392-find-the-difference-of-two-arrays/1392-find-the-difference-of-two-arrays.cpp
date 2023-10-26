class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        // sort(nums1.begin(),nums1.end());
        // sort(nums2.begin(),nums2.end());
        map<int,int> ans;
        for(auto it : nums1)
        {
            ans[it]++;
        }
        
        vector<vector<int>>dist(2,vector<int>());
        
        for(int i =0; i< nums2.size(); ++i)
        {
            if(ans.find(nums2[i]) == ans.end() && find(dist[1].begin(),dist[1].end(),nums2[i]) == dist[1].end())
            {
                
                dist[1].push_back(nums2[i]);
            }
        }
        ans.clear();
        for(auto it : nums2)
        {
            ans[it]++;
        }
        for(int i =0; i< nums1.size(); ++i)
        {
            if(ans.find(nums1[i]) == ans.end() && find(dist[0].begin(),dist[0].end(),nums1[i]) == dist[0].end() )
            {
                dist[0].push_back(nums1[i]);
            }
        }
            return dist;
    }
};