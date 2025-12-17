class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // most brute force approach:
        // Priority Queue:

// Hashmap
        unordered_map<int, int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        for(auto i : mp){
            pq.push({i.second, i.first});
            if(pq.size() > k){
                pq.pop();
            }
        }
        
        vector<int>vt;
        while(pq.size()){
            vt.push_back(pq.top().second);
            pq.pop();
        }
        return vt;
    }
};