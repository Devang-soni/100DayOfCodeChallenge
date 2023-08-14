//62. Unique Paths
class Solution {
public:
    int uniquePaths(int m, int n) {
        return td(m,n);
    }
    int td(int r,int c) {
        vector<vector<int>> t(r + 1, vector<int>(c + 1));
        for(int i=0; i< r ; i++) {
            for(int j=0; j<c; j++) {
                if(i == 0 ) {
                    t[i][j] = 1;
                }
                else if(j ==0) {
                    t[i][j] = 1;
                }
                else {
                    t[i][j] = t[i-1][j] + t[i][j-1];
                }
            }
        }
        return t[r-1][c-1];
    }
};
