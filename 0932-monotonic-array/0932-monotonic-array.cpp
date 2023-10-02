class Solution {
public:
// bool great(vector<int>nums,int s , int e)
// {
  
//     for(int i = s; i < e; ++i)
//         {
        
//                 if(nums[i] < nums[i + 1])
//                 {
//                   return false;
//                 }
//         }
//         return true;
          
// }
// bool less(vector<int>nums, int s , int e)
// {
//     for(int i = s; i < e; ++i)
//         {
        
//                 if(nums[i] > nums[i + 1])
//                 {
//                   return false;
//                 }
//         }
//         return true;
          
// }
    bool isMonotonic(vector<int>& nums) {
//       if(nums.size() == 1)return true;
//           if(nums[0] > nums[1])
//         {
//           return great(nums,1,nums.size() - 1 );
//         }
//         if(nums[0] < nums[1])
//         {
//           return less(nums,1,nums.size() - 1 );
//         }
//         else 
//         {
//             if(nums.size() == 2 && nums[0] == nums[1])return true;
//             for(int i = 0; i < nums.size() - 1; ++i)
//             {
//                 if(nums[i] == nums[i + 1])continue;
//                 if(nums[i] > nums[i + 1])return great(nums,i,nums.size() -1);
//                 if(nums[i] < nums[i + 1])return less(nums,i,nums.size() -1);

//             }
//         }
        
      
//         return true;

    bool inc = false;
    bool des = false;

    for(int i = 0; i < nums.size() - 1; ++i)
    {
        if(nums[i]>nums[i + 1])
        {
            inc = true;
        }
        if(nums[i] < nums[i + 1])
        {
            des = true;
        }
    }
    return inc && des ? false :true;

    }
};