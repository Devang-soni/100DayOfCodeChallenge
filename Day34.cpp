//152. Maximum Product Subarray

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int negativeProduct = 1;
        int positiveProduct = 1;
        int CHECK_ZERO = 0;
        int res = INT_MIN;
        for(int i = 0; i < n; i++)
        {
            if(nums[i] == 0)
            {
                positiveProduct = 1;
                negativeProduct = 1;
                CHECK_ZERO = 1;
            }
            int numPositive = positiveProduct * nums[i];
            int numNegative = negativeProduct * nums[i];
            positiveProduct = max(numPositive, max(numNegative, nums[i]));
            negativeProduct = min(numPositive, min(numNegative, nums[i]));
            res = max(positiveProduct,res);
        }
        return (CHECK_ZERO ? max(0,res) : res);
    }
};
