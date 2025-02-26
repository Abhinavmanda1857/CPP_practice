class Solution {
    public:
        int maxAbsoluteSum(vector<int>& nums) {
            int max_sum=0,min_sum=0;
            int lsum=0,ssum=0;
            for(int i=0;i<nums.size();i++){
                lsum+=nums[i];
                if(lsum>max_sum)max_sum=lsum;
                if(lsum<0)lsum=0;
            }
            for(int i=0;i<nums.size();i++){
                ssum+=nums[i];
                if(ssum<min_sum)min_sum=ssum;
                if(ssum>0)ssum=0;
            }
            return max(abs(max_sum),abs(min_sum));
        }
    };