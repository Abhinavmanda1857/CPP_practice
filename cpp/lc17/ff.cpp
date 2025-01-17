class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
        // if(derived(derived.size()-1)==0)
        int xorr=0;
        for(auto it:derived){
            xorr^=it;
        }
        return xorr==0;
    }
};