class Solution {
    public:
        vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
            int j=0,i=0;
            vector<vector<int>>ans;
            while(i<nums1.size() && j<nums2.size()){
                if(nums1[i][0]==nums2[j][0]){
                  ans.push_back({nums1[i][0],nums2[j++][1]+nums1[i++][1]});
                }
                else if(nums1[i][0]<nums2[j][0])ans.push_back(nums1[i++]);
                else{
                    ans.push_back(nums2[j++]);
                }
            }
            while(i<nums1.size())ans.push_back(nums1[i++]);
            while(j<nums2.size())ans.push_back(nums2[j++]);
            return ans;
        }
    };