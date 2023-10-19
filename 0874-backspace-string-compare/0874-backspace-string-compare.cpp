class Solution {
public:
    string processString(string s)
    {
        string n = "";
        for(char c : s)
        {
            if(c == '#' && !n.empty())
            {
                n.pop_back();
            }
            else if(c != '#')
            {
                n.push_back(c);
            }
        }
        return n;
    }
    bool backspaceCompare(string s, string t) {
        //stack approach
        // stack<char>st1,st2;
        // for(int i =0 ; i <s.length(); ++i)
        // {
        //     if(s[i] != '#')
        //     {
        //         st1.push(s[i]);
        //     }
        //     else if(s[i] == '#' && st1.size()!=0)st1.pop();
        // }
        // for(int i =0 ; i <t.length(); ++i)
        // {
        //     if(t[i] != '#')
        //     {
        //         st2.push(t[i]);
        //     }
        //     else if(t[i] == '#' && st2.size()!=0)st2.pop();
        // }
        // return(st1 == st2)?true:false;
        //itretive fast 
        return processString(s) == processString(t);
    }
};