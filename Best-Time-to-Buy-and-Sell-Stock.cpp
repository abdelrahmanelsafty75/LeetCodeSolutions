class Solution {
public:
    int maxProfit(vector<int>& v) {
      int ans = 0;
      int n = v.size();
      for(int i =0 ;i< n ;i++){
        for(int j = i+1 ; j < n; j++){
            if(v[i] < v[j] )
            ans = max(ans,v[j]-v[i]);
            else break;
        }
      }
      return ans;
    }
};