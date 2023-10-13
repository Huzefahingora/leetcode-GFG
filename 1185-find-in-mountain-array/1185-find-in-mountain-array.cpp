/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    
    int getPeek(MountainArray &mArr) 
    {
        int n = mArr.length() - 1 ; //2

            int ans = -1;
            int start = 0,end = n; //0 2 
             //
            
            while(start <= end)
            {
            int mid = start +(end - start) / 2 ; // 1
                 
                if(mArr.get(mid) < mArr.get(mid + 1))
                {
                    start = mid + 1;//1
                
                }
                else
                {
                    ans = mid ;
                    end = mid - 1;
                }
                // mid = start + (end - start)/2;
                // end = mid - 1;
            }
            return ans;
    }
    int bS(MountainArray &mArr,int start,int end,int target)
    {
        bool isAss = mArr.get(start) < mArr.get(end);
        int l = start;
        int h = end;
        while(l <= h)
        {
            int mid = l + (h - l)/2;
            if(mArr.get(mid) == target)
            {
                return mid;
            }
            if(isAss)
            {
                if(mArr.get(mid) < target)
                {
                    l = mid + 1;

                }
                else
                {
                    h = mid - 1;

                }
            }
            else
            {
                if(mArr.get(mid) < target)
                {
                    h = mid - 1;
                }
                else
                {
                    l = mid+1;
                }
            }

        }
        return -1;
    }
   int findInMountainArray(int target, MountainArray &mArr) {
        int peek = getPeek(mArr);
        
        // Searching in the increasing segment
        if(mArr.get(peek) == target)
        {
            return peek;
        }
        int lIndex = bS(mArr,0,peek,target);
        if(lIndex == -1)
        {
            return bS(mArr,peek+1,mArr.length() - 1,target);
        }
        return lIndex;

        }
};

