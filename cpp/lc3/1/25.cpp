#include <vector>
#include <bits/stdc++.h>
//2270. Number of Ways to Split Array
class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        // vector<int>pre(nums.size(),0);
        // pre[0]=nums[0];
        // for(int i=1;i<nums.size();i++){
        //    pre[i]=pre[i-1]+nums[i];
        // } runtime error  so although can do vector<long long>
        long long sum=accumulate(nums.begin(),nums.end(),0LL);//for accumulate func with long long, initialise it with 0LL instead of just 0
        int n=nums.size();
        int ans=0;
        long long lsum=0;
        for(int i=0;i<nums.size()-1;i++){
            // if(2*pre[i]>=(pre[n-1]))ans++;//pre[i]>=pre[n-1]-pre[i]
            lsum+=nums[i];
            long long rsum=sum-lsum;
            if(lsum>=rsum)ans++;
        }
        return ans;
    }
};