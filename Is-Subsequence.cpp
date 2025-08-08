class Solution {
public:
    bool isSubsequence(string s, string t) {
        int r = 0;
        for(int i = 0 ; i<t.size() ; i++){
            if(s[r] == t[i])
            r++;
        }
        return (true ? r == s.size() : false);
    }
};