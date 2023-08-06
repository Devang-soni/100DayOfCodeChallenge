// 415. Add String
class Solution {
public:
    string addStrings(string num1, string num2) {
    int aLen = num1.length() - 1;
    int bLen = num2.length() - 1;
    int carry = 0;
    std::stringstream fi;

    while (aLen >= 0 || bLen >= 0) {
        int sum = carry;

        if(aLen >= 0) {
            sum += num1[aLen--] - '0';
        }
        if(bLen >= 0) {
            sum += num2[bLen--] - '0';
        }

        fi << (sum % 10);
        carry = sum / 10;
    }

    if (carry > 0) {
        fi << carry;
    }

    std::string result = fi.str();
    std::reverse(result.begin(), result.end());

    return result;
    }
};
