class Solution {
public:
    int numRescueBoats(vector<int>& v, int limit) {
        sort(v.begin(),v.end());
        int l =0  ,r =v.size()-1 , cnt =0;
       while(l <= r){
            if(v[l] + v[r] <= limit){
                l++;
                r--;
            }
            else
                r--;
                
                cnt++;
       }
       return cnt;
    }
};