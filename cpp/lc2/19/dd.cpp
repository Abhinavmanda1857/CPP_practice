class Solution {
    public:
        vector<string> v;
        void f(int i,string& s,int n){
            if(i==n){
                v.push_back(s);
                return;
            }
            for(char j='a';j<='c';j++){
                if(i>0 && j==s[i-1])continue;
                s.push_back(j);
                f(i+1,s,n);
                s.pop_back();//to get back to the ori. string
            }
        }
        string getHappyString(int n, int k) {
            string s="";
            f(0,s,n);
            sort(v.begin(),v.end());
            if(k>v.size()) return "";
            return v[k-1];
        }
    };