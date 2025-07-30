class Solution {
public:
    void rotate(vector<int>& nums, int k) {
    int n = nums.size();
    k = k % n;
    int idx1 = n - k , idx2 = 0;
    vector<int>ans(n);
    for(int i = 0 ; i < n; i++){
       if(idx1 < n){
        ans[i]=nums[idx1];
        idx1++;
       }
       else{
        ans[i]=nums[idx2];
        idx2++;
       }
    } 
   nums = ans;
    }
};