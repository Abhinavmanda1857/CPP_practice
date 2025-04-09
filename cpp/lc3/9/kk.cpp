class Solution {
    public:
        int minOperations(vector<int>& nums, int k) {
            unordered_map<int,int>mpp;
            for(auto it:nums){
                if(it<k)return -1;
                else if(it>k)mpp[it]++;
            }
            return mpp.size();
        }
    };