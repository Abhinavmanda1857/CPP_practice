class Solution {
    public:
        vector<int>parent,size,cost;
        int findParent(int node) {
            if(parent[node]==node)return node;
            return parent[node]=findParent(parent[node]); 
        }
        void Union(int u,int v,int weight){
            int pu=findParent(u);
            int pv=findParent(v);
            if(pu==pv){
                cost[pu]&=weight;
                return;
            }
            if(size[pu]>size[pv]){
                size[pu]+=size[pv];
                parent[pv]=pu;
                cost[pu]&=(cost[pv]&weight);
            }
            else{
                size[pv]+=size[pu];
                parent[pu]=pv;
                cost[pv]&=(cost[pu]&weight);
            }
        }
        vector<int> minimumCost(int n,vector<vector<int>>& edges,vector<vector<int>>& query){
            parent.resize(n);
            size.resize(n,1);
            cost.resize(n,-1);
            for(int i=0;i<n;i++){
                parent[i]=i;
            }
            
            for(auto it:edges){
                Union(it[0],it[1],it[2]);
            }
            vector<int>ans(query.size());
            for(int i=0;i<query.size();i++){
                int u=query[i][0];
                int v=query[i][1];
                int pu=findParent(u);
                int pv=findParent(v);
                if(pu==pv){
                    ans[i]=cost[pu];
                }
                else{
                    ans[i]=-1;
                }
            }
            return ans;
        }
    };