class Solution {
public:
    bool canBeValid(string s, string locked) {
    int n = s.size(),m = locked.size(),rc = 0,lc = 0;
    if(n%2!=0) return false;
    //Left to Right => for every ')' we should have a locked '(' or a unlocked bracket in the left;
    //Right to Left => for every '(' we should have a locked ')' or a unlocked bracket in the right;
    for(int i=0;i<n;i++)
    {
        if(s[i]==')' && locked[i]=='1')
        {
            rc--;
            if(rc<0) return false;
        }
        else if(s[i]=='(' && locked[i]=='1') rc++;
        else if(locked[i]=='0') rc++;
        int j = n-i-1;
        if(s[j]=='(' && locked[j]=='1')
        {
            lc--;
            if(lc<0) return false;
        } 
        else if(s[j]==')' && locked[j]=='1') lc++;
        else if(locked[j]=='0') lc++;
    }
    return (rc<0 || lc<0)?false:true;
    }    
};