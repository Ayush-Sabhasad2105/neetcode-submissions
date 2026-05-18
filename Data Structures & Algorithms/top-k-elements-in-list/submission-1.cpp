class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int, int> freq;

        for(auto x : nums){
            freq[x]++;
        }

        priority_queue<pair<int, int>> pq;
        for(auto &x : freq){
            pq.push({x.second, x.first});
        }

        vector<int> result;
        while(k-- > 0){
            result.push_back(pq.top().second);
            pq.pop();
        }
        
        return result;
    }
};
