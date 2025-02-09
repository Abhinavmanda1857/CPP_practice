class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        unordered_map<int,int>mpp;
        long long gp=0,tp=0;
        for(int i=0;i<nums.size();i++){
            tp+=i;
            gp+=mpp[nums[i]-i];
            mpp[nums[i]-i]++;
        }
    return tp-gp;
    }
};