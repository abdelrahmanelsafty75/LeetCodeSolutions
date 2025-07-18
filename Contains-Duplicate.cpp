class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int const n = nums.size();
        map<int,int>freq;
        for(int i=0 ; i< n;i++){
            if(freq[nums[i]] >= 1)
            return true;
            freq[nums[i]]++;
        }
        return false;
    }
};