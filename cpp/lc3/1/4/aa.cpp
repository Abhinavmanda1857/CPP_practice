class Solution {
    public:
        bool checkPowersOfThree(int n) {
            // if(n%3==2)return false;
            // if(n>3)checkPowersOfThree(n/3);
            // return true;
            while(n>0){
                if(n%3==2)return false;
                n/=3;
            }
            return true;
        }
    };