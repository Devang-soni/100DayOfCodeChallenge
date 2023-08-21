//896. Monotonic Array
class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        if(MonotonicDecreasing(nums) == false)
            return MonotonicIncreasing(nums);
        else
        return true;
        return false;
    }
    bool MonotonicIncreasing(vector<int> nums) {
        for(int i = 0; i < nums.size()-1; i++)     
            if(nums[i] > nums[i+1])
                return false;
        return true;
    }
    bool MonotonicDecreasing(vector<int> nums) {
        for(int i = 0; i < nums.size()-1; i++)     
            if(nums[i] < nums[i+1])
                return false;
        return true;
    }
};
