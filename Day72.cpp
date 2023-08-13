//78. subsets
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> resultList;
        vector<int> currentList;
        backtrack(nums, resultList, currentList, 0);
        return resultList;
    }

private:
    void backtrack(const vector<int>& nums, vector<vector<int>>& resultList, vector<int>& currentList, int i) {
        if (i == nums.size()) {
            resultList.push_back(currentList);
            return;
        }

        // Without the current number
        backtrack(nums, resultList, currentList, i + 1);

        // With the current number
        currentList.push_back(nums[i]);
        backtrack(nums, resultList, currentList, i + 1);
        currentList.pop_back();
    }
};
