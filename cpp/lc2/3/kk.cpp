class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int maxa=1,mina=1;
        int ans=1;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1]){
                mina++;
                maxa=1;
                }
            else if(nums[i]<nums[i+1]){
                maxa++;
                mina=1;
            }
            else{//for equal ele
                maxa=1;
                mina=1;
            }
            ans=max(ans,max(mina,maxa));

        }
        return ans;
    }
};