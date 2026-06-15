class Solution {
public:
    int rob(vector<int>& nums) {
        
        int oddsum = 0;
        int evensum = 0;

        for(int x : nums){

            int temp = oddsum;
            oddsum = max(oddsum, evensum + x);
            evensum = temp;
        }
        return oddsum;
    }
};
