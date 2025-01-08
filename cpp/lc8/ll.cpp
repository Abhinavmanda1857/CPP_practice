class Solution {
public:
    int countPrefixSuffixPairs(vector<string>& words) {
        int count=0;
        for(int i=0;i<words.size()-1;i++){
            string a=words[i];
            for(int j=i+1;j<words.size();j++){
                string b=words[j];
                if(a.size()>b.size())continue;
                if(b.substr(0,a.size())==a && b.substr(b.size()-a.size())==a){
                    count++;
                }
            }
        }
        return count;
    }
};

