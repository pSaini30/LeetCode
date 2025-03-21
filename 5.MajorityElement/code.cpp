class Solution {
    public:
        int majorityElement(vector<int>& nums) {
            unordered_map<int,int> m;
    
            for(int i=0; i<nums.size();i++)
            {
                m[nums[i]]++;
            }
            int size = nums.size()/2;
            for( auto x : m){
                if(x.second > size) return x.first;
            }
    
            return 0;
        }
    };