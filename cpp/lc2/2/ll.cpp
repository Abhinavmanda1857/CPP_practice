class Solution {
public:
    bool check(vector<int>& nums) {
        int issues=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>nums[(i+1)%nums.size()]){
                issues++;
            }
            
        }
        if(issues==0){
                return true;
            }
        else if(issues==1){
                return true;
            }
        else{
                return false;
            }
            
    }
};