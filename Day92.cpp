//2109. Adding Spaces to a String

class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        
        int j = 0, curr = 0;
        string result = "";
        while (curr < s.size()) {
            if (j < spaces.size() && spaces[j] == curr) {
                result += " ";
                j++;
            }
            result += s[curr];
            curr++;
        }

        return result;
    }
};
