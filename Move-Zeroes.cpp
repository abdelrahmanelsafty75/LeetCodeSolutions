class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int const n =nums.size();
        int lst = 0;
        for(int i =0 ; i<n;i++){
            if(nums[i]!=0){
                nums[lst] = nums[i];
                lst++;
            }
        }
        for(int i = lst ; i<n;i++) nums[i] = 0;
    }
};