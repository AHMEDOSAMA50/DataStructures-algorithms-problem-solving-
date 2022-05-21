class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
    sort(nums.begin(), nums.end());
        //we started from 1 cause we want to compare each element                                                  with the previous one as the vector is sorted
        for(int i = 1;i<nums.size();i++){   
            if(nums[i-1]==nums[i]){
                return true;
            }
            
        }
        return false;
    }
};