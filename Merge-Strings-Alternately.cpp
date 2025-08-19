class Solution {
public:
    string mergeAlternately(string s, string t) {
      string ans = "";
      string ret = "";
      int smx =0 , smn=0;
      if(s.size() > t.size()){
        smx = s.size();
        smn = t.size();
        ret = s;
      }
      else{
        smx = t.size();
        smn = s.size();
        ret = t;
      }
    for(int i =0 ; i< smn ;i ++){
        ans += s[i];
        ans += t[i];
    }
    for( int i = smn ; i<smx ;i ++)
        ans +=ret[i];

        return ans;
    }
};