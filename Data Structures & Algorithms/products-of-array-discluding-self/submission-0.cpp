class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        vector<int> output(nums.size());
        vector<int> pref(nums.size());
        vector<int> suff(nums.size());

        pref[0] = 1;
        suff[nums.size() - 1] = 1;

        for (int i = 1; i < nums.size(); i++) {

            pref[i] = nums[i - 1] * pref[i - 1];
        }

        for (int i = nums.size() - 2; i >= 0; i--) {

            suff[i] = nums[i + 1] * suff[i + 1];
        }

        for(int i = 0; i < nums.size(); i++){
            output[i] = pref[i] * suff[i];
        }

        return output;
    }
};
