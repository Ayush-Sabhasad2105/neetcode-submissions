class Solution {
public:
    int trap(vector<int>& height) {
        
        if (height.empty()) {
            return 0;
        }
        int left = 0;
        int right = height.size()-1;

        int leftmax = height[left], rightmax = height[right];
        int area = 0;

        while(left < right){

            if(leftmax < rightmax){

                left++;
                leftmax = max(leftmax, height[left]);
                area += leftmax - height[left];
            }

            else{

                right--;
                rightmax = max(rightmax, height[right]);
                area += rightmax - height[right];
            }
        }
        return area;
    }
};
