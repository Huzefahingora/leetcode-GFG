//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
int fO(int nums[] , int target,int n){
        // int n = nums.size();
        int low = 0;
        int high = n-1;
        int first = -1;
        while(low<=high){
           int mid = (low+high)/2;
           if(nums[mid] == target){
               first = mid;
               high = mid -1;
           }
           else if(nums[mid] > target){
               high = mid -1;
           }
           else {
               low = mid + 1;
           }
        }
        return first;
    }
      int lO(int nums[] , int target,int n){
     
        int low = 0;
        int high = n-1;
        int last = -1;
        while(low<=high){
           int mid = (low+high)/2;
           if(nums[mid] == target){
               last = mid;
               low = mid +1;
           }
           else if(nums[mid] > target){
               high = mid -1;
           }
           else {
               low = mid + 1;
           }
        }
        return last;
    }
    vector<int> find(int nums[], int n , int target )
{
    
    // code here
     int firstTime = fO(nums,target,n);
        if(firstTime == -1)return  {-1,-1};
        else{
            return {firstTime,lO(nums,target,n)};
        }
}
	int count(int arr[], int n, int x) {
	    // code here
	    vector<int>ans=find(arr,n,x);
	    if(ans[0] == -1 )return 0;
	    return (ans[1]-ans[0]) +1;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends