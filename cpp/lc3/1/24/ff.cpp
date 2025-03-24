class Solution {
    public:
        int countDays(int days, vector<vector<int>>& meetings) {
            sort(meetings.begin(),meetings.end());
            int ans=0,last=0;
            vector<vector<int>>vec;
            for(auto it:meetings){
                if(it[0]>last+1){
                    ans+=it[0]-last-1;
                }
                // if(vec.empty() || vec.back()[1]<meetings[i][0])vec.push_back(meetings[i]);
                last=max(last,it[1]);
            }
            ans+=days-last;
            return ans;
        }
    };