//35. Search Insert Position
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {

        int ans;
        for(int i=0; i<nums.size(); i++){
            if(nums.at(i)==target || nums.at(i)>target)
            {    
                ans = i;
                break;
            }
        }
        return ans;
    }
};
