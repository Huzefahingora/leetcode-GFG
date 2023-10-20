class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count = 0;
        int size = flowerbed.size();
        cout << size;
        for(int i =0; i < size;++i)
        {
            if(flowerbed[i] == 0)
            {
                bool re = (i == size - 1) || flowerbed[i + 1] == 0;
                cout << i << '=' <<re <<endl;
                bool le = (i ==0) || flowerbed[i - 1] == 0;
                cout <<le<<endl;
                if(re && le)
                {
                    flowerbed[i] = 1;
                    count++;
                    cout << count<<endl;

                    if(count >= n)
                    {
                        return true;
                    }
                }
            }
        }
        return count >= n;
    }
};

