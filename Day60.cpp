//944. Delete Columns to Make Sorted

class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int count = 0;
        for(int i = 0; i < strs[0].size(); i++){ 
            for(int j = 0; j < strs.size() - 1; j++){
                if(static_cast<int>(strs[j][i]) <= static_cast<int>(strs[j+1][i])){
                    continue;
                }else{
                    count++;
                    break;
                }
            }
        }
        return count;
    }
};
