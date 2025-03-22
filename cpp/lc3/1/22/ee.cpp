class Solution {
    public:
    vector<int> parent;
        vector<int> rank;
    
        int findDsu(int x) {
            if(parent[x]==x){
            return x;
            }
            return parent[x]=findDsu(parent[x]);//path compression also done
        }
    
        void unionDsu(int x, int y){
            int parent_x=findDsu(x);
            int parent_y=findDsu(y);
    
            if(parent_x==parent_y){
                return;
            }
    
            int rank_parent_x=rank[parent_x];
            int rank_parent_y=rank[parent_y];
    
            if(rank_parent_x>rank_parent_y){
                parent[parent_y]=parent_x;
            }else if(rank_parent_y>rank_parent_x){
                parent[parent_x]=parent_y;
            }else{
                parent[parent_x]=parent_y;
                rank[parent_y]++;
            }
        }
        int countCompleteComponents(int n, vector<vector<int>>& edges) {
            parent.resize(n);
            rank.resize(n);
            for(int i=0;i<n;i++){
                parent[i]=i;
            }
            for(auto it:edges)unionDsu(it[0],it[1]);
            unordered_map<int,unordered_set<int>>compo;
            unordered_map<int,int>edgec;
            for(int i=0;i<n;i++){
                compo[findDsu(i)].insert(i);
    
            }
             for(auto it:edges){
                edgec[findDsu(it[0])]++;
             }
             int ans=0;
             for(auto [a,b]:compo){
                // auto a=it[0];
                // auto b=it[1];
                int sizee=b.size();
                int req=sizee*(sizee-1)/2;
                if(edgec[a]==req)ans++;
             }
             return ans;
    
    
        }
    };