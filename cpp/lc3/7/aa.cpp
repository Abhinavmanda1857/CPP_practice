class Solution {
    public:
        bool canPartition(vector<int>& nums) {
         int summ=accumulate(nums.begin(),nums.end(),0);
         if(summ%2!=0)return false;
         vector<int>curr(summ/2+1,0);
         vector<int>prev(summ/2+1,0);
         prev[0]=1;
         for(int i=1;i<=nums.size();i++){
            curr[0]=1;
            for(int j=1;j<=summ/2;j++){
                if(j<nums[i-1])curr[j]=prev[j];
                else{
                    curr[j]=prev[j] || prev[j-nums[i-1]];
    
                }
            }
            prev=curr;
         }   
         return prev[summ/2];
        }
    };