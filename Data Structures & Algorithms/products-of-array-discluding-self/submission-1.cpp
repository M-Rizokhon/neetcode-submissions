class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefs(n, 1), suffs(n, 1);

        // compute prefix products
        for (int i = 1; i < n; i++) 
            prefs[i] = prefs[i - 1] * nums[i - 1];

        // compute suffix products
        for (int i = n - 2; i >= 0; i--) 
            suffs[i] = suffs[i + 1] * nums[i + 1];

        
        vector<int> output(n);
        for (int i = 0; i < n; i++) 
            output[i] = prefs[i] * suffs[i];

        return output;
    }
};