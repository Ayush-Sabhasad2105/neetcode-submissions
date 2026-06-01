class Solution {
public:
    int missingNumber(vector<int>& nums) {

        int ans = 0;
        for(int i = 0; i <= nums.size(); i++){

            ans ^= i;
        }

        for(int x : nums){
            ans ^= x;
        }
        return ans;
    }
};
