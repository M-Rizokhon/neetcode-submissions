class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if (nums.empty()) return 0;
        int left = 0, right = nums.size() - 1;
        
        while (left < right) {
            if (nums[right] == val) {
                right--;
                continue;
            }
            else if (nums[left] != val) {
                left++;
                continue;
            }

            int temp = nums[left];
            nums[left] = nums[right];
            nums[right] = temp;
            left++;
            right--;
        }

        if (nums[right] == val)
            return right;
        else 
            return right + 1;
    }
};