class Solution {
public:
    int maxArea(vector<int>& v) {
        int l  = 0 , r = v.size() - 1;
        long long ans = 0 , len = v.size() -1; 
        while(l < r){
            int mn = min(v[l],v[r]);
            ans = max(ans,mn*len);

            if(v[l] <= v[r]) l++;    
             
             
            else if (v[l] > v[r])r--;
             

            len--;
        } 
        return ans;
    }
};