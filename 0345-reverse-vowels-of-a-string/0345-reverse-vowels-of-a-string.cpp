class Solution {
public:
    bool itVowels(char s)
    {
        if(s == 'a' || s == 'A' || s == 'e' || s == 'E' || s == 'i' || s == 'I' || s == 'o' || s == 'O' || s == 'u' || s == 'U')
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    string reverseVowels(string s) {
        int i = 0;
        int j = s.size();
        while(i < j)
        {
                // cout << "in main 1" << endl << i << " " << j;

            if(itVowels(s[i]))
            {
                // cout << "in main " << endl << i << " " << j;
                while(!itVowels(s[j]))
                {
                    j--;
                }
                cout << "in";
                // cout <<endl << s <<endl;
                // cout << i << " " << j << endl;
                swap(s[i],s[j]);
                // cout << s << endl;
                j--;
            }
            i++;
            
        }
        return s;
    }
};