class Solution {
    public:
        int countSymmetricIntegers(int low, int high) {
            int c=0;
            while(low<=high){
                 if(low<100 && low%11==0)c++;
                 else if(low>=1000){
                    if(((low/1000 + (low%1000)/100))==((low%100)/10 +low%10))c++;
                 }
                 low++;
            }
            return c;
        }
    };