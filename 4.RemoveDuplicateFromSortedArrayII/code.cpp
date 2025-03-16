class Solution {
    public:
        int removeDuplicates(vector<int>& nums) {
            int l = 0, r=0, count = 1;
    
            while(r < nums.size())
            { count = 1;
                while(r < nums.size()-1 && nums[r]==nums[r+1])
                {
                    r++; count++;
                }
                
               for(int i =0 ;i< min(count,2); i++)
               {
                 nums[l]=nums[r];
                 l++;
               }
               r++;
            }
            return l;
        }
    };