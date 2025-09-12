class Solution {
public:
    int findLHS(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int l = 0 , ans = 0;
        for(int i = 0 ;i < nums.size(); i++){
            while(nums[i] - nums[l] > 1)
                l++;
            if(nums[i] - nums[l] == 1){
                ans = max(ans, i - l + 1);
            }
        }
        return ans;
    }
};