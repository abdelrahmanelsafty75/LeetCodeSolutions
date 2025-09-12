class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int,int>freq;
        int ans = 0;
        for(int i : nums) freq[i]++;
        for(auto& [n,c] : freq){
            if(freq.count(n+1)>0){
                int maxlen = c + freq[n+1];
                ans = max(ans,maxlen);
            }
        }
        return ans;
    }
};