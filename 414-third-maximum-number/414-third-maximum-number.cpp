class Solution {
public:
    int thirdMax(vector<int>& nums) {
        
        unordered_set<int> s1;
          for(int i=0; i<nums.size(); i++){
            s1.insert(nums[i]);
             if(s1.size()>3){
                s1.erase(*min_element(s1.begin(),s1.end()));
            }  
          }
                   
        if(s1.size() < 3){
            return (*max_element(s1.begin(),s1.end()));
        }else{
            return  (*min_element(s1.begin(),s1.end()));
        }
        
    }
};