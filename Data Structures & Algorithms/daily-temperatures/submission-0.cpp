class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        
        vector<int> result(temperatures.size(), 0);
        stack<pair<int,int>> stk;

        for(int i = 0; i < temperatures.size(); i++){

            int t = temperatures[i];
            while (!stk.empty() && t > stk.top().first){

                auto pair = stk.top();
                stk.pop();
                result[pair.second] = i - pair.second;
            }
            stk.push({t, i});
        }

        return result;
    }
};
