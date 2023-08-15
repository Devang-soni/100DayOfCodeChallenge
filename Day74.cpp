//89. Gray Code
class Solution {
public:
    vector<int> grayCode(int n) {
    std::vector<int> list;
    for(int i = 0; i < (1 << n); i++) {
        list.push_back(i ^ (i >> 1));
    }
    return list;
}
};
