class Solution {
public:
    int maxProfit(vector<int>& v) {
        int ans = 0;
        const int n = v.size();
        for(int i=1 ;i< n;i++){
          if(v[i] > v[i-1])
          ans+= v[i] - v[i-1];
        }
        return ans;
    }
};