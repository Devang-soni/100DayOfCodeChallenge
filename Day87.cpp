//2544. Alternating Digit Sum
class Solution {
public:
    int alternateDigitSum(int n){
        string str = to_string(n);
        int sum = 0;

        for(size_t i = 0; i < str.length(); i++) {
            if(i % 2 == 0) {
                sum += str[i] - '0';
            } else {
                sum -= str[i] - '0';
            }
        }
        return sum;
    }
};
