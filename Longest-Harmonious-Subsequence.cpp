class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int, int> freq;
        for (int i : nums)freq[i]++;
        int ans = 0;
        for (auto& [n, c] : freq) {
            if (freq.count(n + 1)) {
                int currentLength = c + freq[n + 1];
                ans = max(ans, currentLength);
            }
        }

        return ans;
    }
};