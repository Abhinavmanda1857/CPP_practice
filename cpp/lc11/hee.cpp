class Solution {
public:
    bool canConstruct(string s, int k) {
        if(s.size()==k)return true;
        if(s.size()<k)return false;
        unordered_map<char,int>mpp;
        for(auto it:s){
            mpp[it]++;

        }
        int issues=0;
        for(auto it:mpp){
            if(it.second % 2==1)issues++;
        }
        if(issues>k)return false;
        return true;
    }
};