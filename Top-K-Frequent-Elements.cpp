class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
     unordered_map<int, int> freq;
    for (int num : nums) freq[num]++;    
    priority_queue<pair<int, int>> pq;
    for (auto& it : freq) {
        pq.push({it.second, it.first}); 
    }
        vector<int> ans;
    while (k-- && !pq.empty()) {
        ans.push_back(pq.top().second);
        pq.pop();
    }
    return ans;  
    }
};