//560. Subarray Sum Equals K
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
    int n = nums.size();
    int count = 0;
    int sum = 0;
    unordered_map<int, int> map;
    map[0] = 1; 
    for (int i = 0; i < n; i++) {
        sum += nums[i];
        if (map.find(sum - k) != map.end()) 
        {
            count += map[sum - k];
        }
        map[sum]++;
    }
    return count;
}
};
