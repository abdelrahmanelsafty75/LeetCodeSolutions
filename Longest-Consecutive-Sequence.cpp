class Solution {
public:
    int longestConsecutive(vector<int>& v) {
        unordered_set<int>st;
        for(int i : v)st.insert(i);
        int ans =0;
        for(int num : st){
            if(st.find(num-1) == st.end()){
                int cnt=1;
            while(st.find(num+cnt) != st.end()){
                cnt++;
                }
                ans = max(ans,cnt);
            }
        }
        return ans;
    }
};