class Solution {
public:
    void reverseString(vector<char>& s) {
       int l =0 , r = s.size();
       while(r>l){
        char c = s[l];
        s[l] = s[r-1];
        s[r-1] =c ;
        l++;
        r--;
       }    
    }
};