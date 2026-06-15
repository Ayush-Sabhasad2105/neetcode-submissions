class Solution {
public:

    int roblinear(vector<int>& nums, int start, int end){

        int oddsum = 0;
        int evensum = 0;

        for(int x = start; x <= end; x++){

            int temp = oddsum;
            oddsum = max(oddsum, evensum + nums[x]);
            evensum = temp;
        }
        return oddsum;
    }

    int rob(vector<int>& nums) {
        
        if (nums.size() == 1) return nums[0];
        int n = nums.size();

        int option1 = roblinear(nums, 0, n-2);
        int option2 = roblinear(nums, 1, n-1);

        return max(option1, option2);
    }
};
