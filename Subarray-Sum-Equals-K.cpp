class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
    const int n = nums.size();
    int cnt = 0 , sum = 0;
    unordered_map<int,int>pre;
    pre[0] = 1;
    for(int i : nums){
        sum+=i;
        int diff = sum - k;
        if(pre[diff])
            cnt+=pre[diff];
        pre[sum]++;
        }
        return cnt;
    }
};