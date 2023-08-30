//38. Count and Say

class Solution {
public:
    string countAndSay(int n) {
        if (n == 1) {
            return "1";
        }

        string x = countAndSay(n-1);
        int count = 1;
        char cur = x[0];
        string res = "";

        for (int i = 1; i < x.length(); i++) {
            if (cur == x[i]) {
                count++;
            } else {
                res += to_string(count) + cur;
                count = 1;
                cur = x[i];
            }
        }

        res += to_string(count) + cur;
        return res;
    }
};
