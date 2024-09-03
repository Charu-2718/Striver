#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
#include<cmath>
#include<queue>

using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;

        if (matrix.empty()) return ans;

        int row = matrix.size();
        int col = matrix[0].size();
        int strRow = 0, endRow = row - 1;
        int strCol = 0, endCol = col - 1;

        while (strRow <= endRow && strCol <= endCol) {
            // Traverse from left to right
            for (int j = strCol; j <= endCol; j++) {
                ans.push_back(matrix[strRow][j]);
            }
            strRow++;

            // Traverse downwards
            for (int i = strRow; i <= endRow; i++) {
                ans.push_back(matrix[i][endCol]);
            }
            endCol--;

            // Traverse from right to left, if still within bounds
            if (strRow <= endRow) {
                for (int j = endCol; j >= strCol; j--) {
                    ans.push_back(matrix[endRow][j]);
                }
                endRow--;
            }

            // Traverse upwards, if still within bounds
            if (strCol <= endCol) {
                for (int i = endRow; i >= strRow; i--) {
                    ans.push_back(matrix[i][strCol]);
                }
                strCol++;
            }
        }

        return ans;
    }
};
