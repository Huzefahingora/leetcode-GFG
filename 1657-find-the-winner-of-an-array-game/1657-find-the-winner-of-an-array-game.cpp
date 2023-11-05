class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        int ans = arr[0]; 
        int winnerCount = 0;
        for(int i =1; i < arr.size() ; i++)
        {
            if(arr[i] > ans)
            {
                ans = arr[i];
                winnerCount = 0;
            }
            winnerCount++;
            if(winnerCount == k)break;
        }
        return ans;
    }
};