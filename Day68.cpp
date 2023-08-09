//242. Valid Anagram
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!= t.length()){
            return false;
        }
        size_t x =0;
        for(int i =0; i < s.length(); i++){
            x = t.find(s[i]);
            if(x != string::npos){
                t.erase(t.begin() + x);
            }else{
                return false;
            }
        }
        if(t.length() == 0){
            return true;
        }
        return false;
   
    }
};
