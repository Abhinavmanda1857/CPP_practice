class Solution {
    public:
        vector<int> partitionLabels(string s) {
            unordered_map<char,int>mpp1,mpp2;
            vector<int>ans;
            int l=0,r=0;
            for(int i=0;i<s.size();i++)mpp1[s[i]]=i;
            for(int i=0;i<s.size();i++){
                r=max(r,mpp1[s[i]]);
                mpp2[s[i]]++;
                if(i==r){
                    ans.push_back(r-l+1);
                    l=i+1;
                    mpp2.clear();
                }
            }
            return ans;
        }
    };