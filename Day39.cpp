//905. Sort Array By Parity

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        int n=A.size();
        int i=0,count=0;
        while(count<n){
            if(A[i]%2!=0){
                A.push_back(A[i]);
                A.erase(A.begin()+i);
            }
            else
                i++;
            count++;
        }
        return A;
    }
};
