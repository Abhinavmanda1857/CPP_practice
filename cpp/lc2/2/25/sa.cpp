class Solution {
    public:
        int numOfSubarrays(vector<int>& arr) {
            //sliding window but prefix sum required, so do it all in one loop
            int pre=0;
            int mod=1e9+7;
            int ans=0;
            // for(int i=1;i<arr.size();i++){
            //     pre[i]=pre[i-1]+arr[i];
            // }
            int r=0,odd=0,even=1;
            while(r<arr.size()){
                pre+=arr[r];
                 if(pre%2==0){
                    even++;
                    ans+=odd;
                    
                 }
                 else{
                    odd++;
                    ans+=even;
                    
                 }
                 r++;
                 ans%=mod;
            }
            return ans;
            
        }
    };