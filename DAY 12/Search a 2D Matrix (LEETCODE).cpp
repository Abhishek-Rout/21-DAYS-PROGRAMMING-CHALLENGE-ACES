#include <iostream>

using namespace std;



class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.size() == 0 || matrix[0].size() == 0) return false;
        int i = matrix.size() -1;
        int j = matrix[0].size() -1;
        if(target > matrix[i][j] || target < matrix[0][0] ) return false;

        int x = 0;
        int y = j;
        while(x <= i&& y>=0){
            if(target == matrix[x][y]) return true;
            else if( target < matrix[x][y]){
                y--;
            }else{
                x++;
            }
        }
        return false;
    }
};