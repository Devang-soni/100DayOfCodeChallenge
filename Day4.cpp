// Given two integers dividend and divisor, divide two integers without using multiplication, division, and mod operator.

// The integer division should truncate toward zero, which means losing its fractional part. For example, 8.345 would be truncated to 8, and -2.7335 would be truncated to -2.

// Return the quotient after dividing dividend by divisor.

#include <iostream>
#include <limits>
using namespace std;

class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == 0)
            return 0;
        if (dividend == divisor)
            return 1;

        int sign = 1;

        if (dividend < 0) {
            sign *= -1;
        }
        if (divisor < 0) {
            sign *= -1;
        }

        long long l_dividend = abs(static_cast<long long>(dividend));
        long long l_divisor = abs(static_cast<long long>(divisor));
        long long quotient = 0;

        for (int i = 31; i >= 0; i--) {  // 31 bits
            if ((l_divisor << i) <= l_dividend) {
                quotient += (1LL << i);
                l_dividend -= (l_divisor << i);
                cout << (1LL << i) << "   ";
                cout << (l_divisor << i) << "  i:" << i << endl;
                cout << quotient << " sign:" << sign;
            }
        }

        long long ans = quotient * sign;

        if (ans > numeric_limits<int>::max())
            ans = numeric_limits<int>::max();
        if (ans < numeric_limits<int>::min())
            ans = numeric_limits<int>::min();

        return static_cast<int>(ans);
    }
};

int main() {
    Solution solution;
    int dividend = 10;
    int divisor = 3;
    int result = solution.divide(dividend, divisor);
    cout << "Result: " << result << endl;

    return 0;
}
