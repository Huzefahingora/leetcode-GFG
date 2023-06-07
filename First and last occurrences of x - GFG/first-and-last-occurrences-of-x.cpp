//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

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

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends