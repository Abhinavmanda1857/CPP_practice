class Solution {
    public:
        int minimumRecolors(string blocks, int k) {
            const int n=blocks.size();
            int W=count(blocks.begin(),blocks.begin()+k,'W');
            int res=W;
            for(int l=0,r=k;r<n;r++,l++){
                W+=(blocks[r]=='W')-(blocks[l]=='W');
                res=min(res,W);
            }
            return res;
        }
    };