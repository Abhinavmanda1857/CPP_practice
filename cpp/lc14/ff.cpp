class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
    int n = A.size(),count = 0;   
    vector<int> freq (n,0),ans (n,0);
    for(int i=0;i<n;i++)
    {
        freq[A[i]-1]++;freq[B[i]-1]++;
        if(freq[A[i]-1]==2 && A[i]!=B[i]) count++;
        if(freq[B[i]-1]==2 && A[i]!=B[i]) count++;
        if(A[i]==B[i]) count++;
        ans[i] = count;
    }
    return ans;    
    }
};