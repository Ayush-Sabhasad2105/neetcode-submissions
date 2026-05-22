class Solution {
public:
    int maxArea(vector<int>& heights) {

        int left = 0;
        int right = heights.size() - 1;
        int max_area = 0;

        while(left < right){

            int breadth = right - left;
            int length = min(heights[left], heights[right]);
            int area = length * breadth;

            max_area = max(max_area, area);

            if(heights[left] < heights[right]){
                left++;
            }

            else {
                right--;
            }
        }

        return max_area;
    }
};
