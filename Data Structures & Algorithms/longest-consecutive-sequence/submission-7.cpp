class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        unordered_set<int> number(nums.begin(), nums.end());
        int longest = 0;

        for(int num : number){

            if(number.find(num - 1) == number.end()){

                int length = 1;
                while(number.find(num + length) != number.end()) length++;
                
                longest = max(longest, length);
            }
        }
        return longest;
    }
};
