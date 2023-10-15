class Solution {
public:
    string convertToTitle(int columnNumber) {
        string res = "";
        while(columnNumber > 0)
        {
            columnNumber--;

            int letterDistFromA = columnNumber % 26;

            columnNumber /= 26;

            res += ((char)('A' + letterDistFromA));
        }
        reverse(res.begin(),res.end());
        return res;
    }
};