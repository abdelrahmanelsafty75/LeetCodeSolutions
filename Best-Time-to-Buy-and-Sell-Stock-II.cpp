class Solution {
public:
    int maxProfit(vector<int>& v) {
        int ans = 0 , cur = v[0];
        const int n = v.size();
        for(int i=1 ;i< n;i++){
            if(v[i] < cur){
                cur = v[i];
            }
                else{
                ans+=(v[i]-cur);
                cur=v[i];
            }
        }
        return ans;
    }
};