class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int ans=0;
        for(auto it:words){
            if(it.size()<pref.size())continue;
            string a=it.substr(0,pref.size());
            if(a==pref)ans++;
        }
        return ans;
    }
};