class Solution {
    public:
        unordered_set<string>ans;
        void perms(string &s,int l,int r){
            if(l==r){
                ans.insert(s);
                return;
            }
            for(int i=l;i<=r;i++){
                swap(s[l],s[i]);
                perms(s,l+1,r);
                swap(s[l],s[i]);
            }
        }
        int numTilePossibilities(string tiles) {
            vector<string>vec;
            int n=tiles.size();
            if(n==1)return 1;
            int allsub=1<<n;
            for(int i=1;i<allsub;i++){//for say i=8, 1000, mean u take i&1<<j to get all ele
               string temp="";
               for(int j=0;j<n;j++){
                if(i & (1<<j))temp+=tiles[j];//while taking strings, dont use vectro, but rather jist string="";
               }
               vec.push_back(temp);
            }
            
            for(auto it:vec) {
                perms(it,0,it.size()-1);
            }
    
            return ans.size();
        }
    };