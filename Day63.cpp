//43. Multiiply String
class Solution {
public:
    string multiply(string num1, string num2) {
        if (num1 == "0" || num2 == "0") return "0";
        
        string ans(num1.size() + num2.size(), '0');
        for (int i = num1.size() - 1; i >= 0; --i) {
            int carry = 0;
            for (int j = num2.size() - 1; j >= 0; --j) {
                int tmp = (ans[i + j + 1] - '0') + (num1[i] - '0') * (num2[j] - '0') + carry;
                ans[i + j + 1] = tmp % 10 + '0';
                carry = tmp / 10;
            }
            ans[i] += carry;
        }
        
        size_t startpos = ans.find_first_not_of("0");
        if (string::npos != startpos) {
            return ans.substr(startpos);
        }
        return "0";
    }
};
