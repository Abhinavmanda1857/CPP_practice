class Solution {
    public:
    long long bs(vector<int>& nums,int l,int r,int target){
        while(l<=r){
            int mid=(l+r)/2;
            if(nums[mid]>=target)r=mid-1;
            else{
                l=mid+1;
            }
            
        }
        return r;
    }
        long long countFairPairs(vector<int>& nums, int lower, int upper) {
            sort(nums.begin(),nums.end());
            long long count=0;
            for(int i=0;i<nums.size();i++){
                int low=lower-nums[i];
                int high=upper-nums[i];
                count+=(bs(nums,i+1,nums.size()-1,high+1)-bs(nums,i+1,nums.size()-1,low));
                
    
            }
            return count;
        }
    };