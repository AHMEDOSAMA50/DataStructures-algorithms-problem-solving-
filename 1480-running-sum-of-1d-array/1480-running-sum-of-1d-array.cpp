class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        
        int sum = 0 ;
        vector<int> v ;
        
        for(int i = 0; i < nums.size(); i++){
            if(i == 0 )
                v.push_back(nums[i]);
            else{
                for(int j = 0 ; j <= i;j++){
                    sum += nums[j];
                }
                v.push_back(sum);
                sum = 0;
            }     
        }
        
        return v;
        
        
    }
};