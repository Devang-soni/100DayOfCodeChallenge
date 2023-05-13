//Write a function that reverses a string. The input string is given as an array of characters s.

//You must do this by modifying the input array in-place with O(1) extra memory.

class Solution {
public:

  void reverseString(std::vector<char>& s) {
  
    int i = 0, j = s.size() - 1;
    
    while (i < j) {
    
      std::swap(s[i], s[j]);
        i++;
        j--;
    }
}

int main() {
    
  std::vector<char> s {'h', 'e', 'l', 'l', 'o'};
  
  reverseString(s);
  
  for (char c : s) {
  
    std::cout << c;
    
  }
  
  std::cout << std::endl; // Output: "olleh"
  
  return 0;
}
};
