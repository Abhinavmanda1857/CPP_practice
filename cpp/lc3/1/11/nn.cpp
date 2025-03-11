class Solution {
    public:
        int numberOfSubstrings(string s) {
            vector<int>lasts(3,-1);
            int count=0;
            for(int i=0;i<s.size();i++){
                lasts[s[i]-'a']=i;
                if(lasts[0]!=-1 && lasts[1]!=-1 && lasts[2]!=-1){
                    count+=1+*min_element(lasts.begin(),lasts.end());
                }
            }
            return count;
        }
    };