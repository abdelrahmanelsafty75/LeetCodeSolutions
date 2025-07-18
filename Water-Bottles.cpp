class Solution {
public:
    int numWaterBottles(int n, int k) {
         int ans = n;
        while(n>=k){
        int newb = n / k;
        ans += newb;
        n = newb + n % k;
        } 
    return ans;
    }
};