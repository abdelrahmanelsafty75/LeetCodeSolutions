class Solution {
public:
    string mergeAlternately(string s, string t) {
      string ans = "";
      const int sz1 = s.size();
      const int sz2 = t.size();
      int l = 0;
      while(l < sz1 || l < sz2){
         if( l < sz1)
           ans += s[l];      
        if(l <sz2 )
            ans += t[l];   
        l++;
      }
      return ans;
    }
};