//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    string colName (long long int num)
    {
string result;

    while (num > 0) {
        int digit = (num - 1) % 26 + 1;  // Adjusting the digit to start from 1
        char asciiChar = 'A' + digit - 1;  // Mapping 'A' to 1, 'B' to 2, and so on
        result = asciiChar + result;
        num = (num - 1) / 26;  // Adjusting num for the next iteration
    }

    return result;
}
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
	{
		long long int n; cin >> n;
		Solution ob;
		cout << ob.colName (n) << '\n';
	}
}

// } Driver Code Ends