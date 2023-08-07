//409. Longest Palindrome

class Solution {
public:
    int longestPalindrome(string s) {
       std::unordered_map<char, int> map;

        int evenNo = 0;
        int oddNo = 0;

        for ( int i = 0; i < s.length(); i++) {
            char c = s[i];
            if (map.find(c) != map.end()) {
                map[c] += 1;
            } else {
                map[c] = 1;
            }

        }
        for (auto& e : map) {
            int n = e.second;
            if (n % 2 != 0) {
                oddNo += n;
            }
            evenNo += (n / 2) * 2;
        }

        if (oddNo > 0) {
            evenNo += 1;
        }
        return evenNo; 
    }
};
