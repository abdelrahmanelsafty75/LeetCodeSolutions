class Solution {
public:
    int maxProfit(vector<int>& v) {
      int ans = 0 , cur = v[0];
      int n = v.size();
     for(int i =1 ;i < n ; i++){
        if(v[i] < cur) cur = v[i];
        else ans = max(ans,v[i] - cur);
     }
     return ans;
    }
};