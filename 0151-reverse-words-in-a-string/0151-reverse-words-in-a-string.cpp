class Solution {
public:
    string reverseWords(string s) {
        // reverse(s.begin(),s.end());
        // return s;
        stack<string>st;
        int curr = 0;
        while(curr < s.length() && s[curr] == ' ')
        {
            curr++;
        }
        int end = s.length();
         while(s[end] == ' ')
        {
            end--;
        }
        end = s.length();
        cout << "curr" << curr <<endl;
        for(int i =curr  ; i < end; ++i)
        {
              while( i < end && s[i] == ' ')
        {
            i++;
        }
            if(i < end && s[i] != ' ')
            {
                curr = i;
                while(i < end && s[i] != ' ' )
                i++;
                
                st.push(s.substr(curr, i  -curr));
            }
            // curr++;
        }
        s = "";
        while(!st.empty())
        {
            string temp = st.top();
            st.pop();
            if(!st.empty())
            s = s + temp + " ";
            else 
            s = s + temp;
        }
        return s;
    }
};
// stack<string> st;
//         int curr = 0;

//         // Skip leading spaces
//         while (curr < s.length() && s[curr] == ' ') {
//             curr++;
//         }

//         for (int i = curr; i < s.length(); ++i) {
//             while (i < s.length() && s[i] == ' ') {
//                 i++;
//             }
//             if (i < s.length() && s[i] != ' ') {
//                 curr = i;
//                 while (i < s.length() && s[i] != ' ') {
//                     i++;
//                 }
//                 st.push(s.substr(curr, i - curr));
//             }
//         }

//         s = "";
//         while (!st.empty()) {
//             string temp = st.top();
//             st.pop();
//             if (!st.empty()) {
//                 s = s + temp + " ";
//             } else {
//                 s = s + temp;
//             }
//         }

//         return s;
//     }