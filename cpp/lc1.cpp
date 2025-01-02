// #include <iostream>
// #include <vector>
// #include <unordered_map>
// #include <string.h>
// class Solution {
// public:
//     vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
//         unordered_map<char,int>mpp={{'a',1},{'e',1},{'i',1},{'o',1},{'u',1}};
//         vector<int>pre(words.size());
//         int vsum=0;
//         int i=0;
//         //map to use function find, pre array for precomputation needed for one pass ans after
//         for(auto it:words){
//             int n=it.size();
//            if(mpp.find(it[0])!=mpp.end() && mpp.find(it[n-1])!=mpp.end())vsum++;
//            pre[i]=vsum;
//            i++;
//         }
//         vector<int>ans(queries.size());
//         int j=0;
//         for(auto it:queries){
//             int f=it[0],s=it[1];
//             ans[j]=(pre[s]-(f==0?0:pre[f-1]));//in case of if it[0]=0,then f-1 is out of bound so took care of it in ternary operator,
//             j++;
//         }
//         return ans;
//     }
// };
// int main() {
//     Solution solution;
//     vector<string> words = {"apple", "orange", "banana", "umbrella", "ice"};
//     vector<vector<int>> queries = {{0, 2}, {1, 4}, {0, 4}};
    
//     vector<int> result = solution.vowelStrings(words, queries);
    
//     cout << "Query Results:" << endl;
//     for (int res : result) {
//         cout << res << " ";
//     }
//     cout << endl;
    
//     return 0;
// }

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    vector<int> nums;
    vector<string> heros {"batman","flash","superman","robin"};//another way of initializing vectors

    nums.push_back(5);
    nums.push_back(6);
    nums.push_back(7);
    nums.push_back(8);

    for(int i=0;i<=5;++i){
        nums.push_back(i);
    }    

    cout<<nums.size()<<endl<<nums.capacity()<<endl<<nums.max_size()<<endl;;


    return 0;
}