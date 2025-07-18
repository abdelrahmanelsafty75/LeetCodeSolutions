class Solution {
public:
    int maxAdjacentDistance(vector<int>& v) {
        int diff = 0;
        int const n = v.size();
        for(int i = 1; i<n; i++){
             diff = max(abs(v[i]-v[i-1]),diff);
        }
        diff = max(diff,abs(v[0]-v[n-1]));
        return diff;
    }
};