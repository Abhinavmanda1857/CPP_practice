class Solution {
    public:
        long long putMarbles(vector<int>& weights, int k) {
            priority_queue<int>pq;
            priority_queue<int,vector<int>,greater<int>>pq2;
            for(int i=0;i<weights.size()-1;i++){
                pq.push(weights[i]+weights[i+1]);
                if(pq.size()>k-1)pq.pop();
                pq2.push(weights[i]+weights[i+1]);
                if(pq2.size()>k-1)pq2.pop();
            }
            // sort(weights.begin()) takes o(nlogn while this take nlog k)
            long long a=0,b=0;
            while(!pq.empty()){
                a+=pq.top();
                pq.pop();
            }
            while(!pq2.empty()){
                b+=pq2.top();
                pq2.pop();
            }
            return abs(a-b);
        }
    };