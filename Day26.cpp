//1910. Remove All Occurrences of a Substring

class Solution {
public:
    string removeOccurrences(string l, string part) {
        
        while(l.length()!=0 && l.find(part) < l.length()){
            l.erase(l.find(part) , part.length());
        }
        return l;
    }
};
