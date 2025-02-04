class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        if(nums.size()==0)return 0;
        int summ=nums[0];
        int maxc=nums[0];
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]<nums[i+1]){
                summ+=nums[i+1];
                maxc=max(maxc,summ);

            }
            else{
                summ=nums[i+1];
            }
        }
        return maxc;
    }
};