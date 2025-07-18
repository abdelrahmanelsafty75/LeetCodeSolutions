class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
       unordered_map<int,int>freq;
        for(int i=0 ;i< nums.size() ; i++)
        freq[nums[i]]++;
        int ans =0 , r =0;
        for(auto &i: freq){
            if(i.second > r){
                r = i.second;
                ans = i.first;
            }
        }
    return ans;
    }
};