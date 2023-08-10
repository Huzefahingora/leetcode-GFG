//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    vector<int> rearrangeQueue(queue<int> &q){
        vector<int>ans;
        queue<int>q2;
        int n=q.size()/2;
        while(n--)
        {
            int val=q.front();
            q2.push(val);
            q.pop();
        }
        n=q.size();
        while(n--){
            int val=q2.front();
            ans.push_back(val);
            q2.pop();
            val=q.front();
            ans.push_back(val);
            q.pop();
        }
        return ans;
    }
        
        
};

//{ Driver Code Starts.

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        queue<int> q;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            q.push(a);
        }
        Solution ob;
        vector<int> ans=ob.rearrangeQueue(q);
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
// } Driver Code Ends