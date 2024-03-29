class Solution {
public:
    int kthGrammar(int n, int k) {
        bool areSame = true;

        n = pow(2, n - 1);

        while(n != 1)
        {
            n /= 2;

            if(k > n)
            {
                k -= n;
                areSame = !areSame;
            }
        }
        return ((areSame) ? 0 : 1);
    }
};