//345. Reverse Vowels of a String
class Solution {
public:
    std::string reverseVowels(std::string s) {
        int i = 0;
        int j = s.length() - 1;
        while(i < j) {
            while(i < j && !isVowel(s[i])) {
                i++;
            }
            while(i < j && !isVowel(s[j])) {
                j--;
            }
            if(i >= j) {
                break;
            }
            swap(s, i, j);
            i++;
            j--;
        }
        return s;
    }

private:
    void swap(std::string& s, int i, int j) {
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }

    bool isVowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
               c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
    }
};
