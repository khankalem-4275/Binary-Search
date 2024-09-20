// https://leetcode.com/problems/search-a-2d-matrix/?envType=problem-list-v2&envId=binary-search&difficulty=MEDIUM

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows=matrix.size();
        int columns=matrix[0].size();

        int i=0,j=columns-1;
        while(i<rows && j>=0)
        {
            if(matrix[i][j] < target)
            {
                i++;
            }
            else if(matrix[i][j] > target)
            {
                j--;
            }
            else
            {
                return true;
            }
        }
        return false;
    }
};