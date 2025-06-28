class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i=matrix.size()-1;
        int j=0;
        while(i>=0&&i<matrix.size()&&j<matrix[i].size()){
            if(matrix[i][j]<target){
                j++;
            }
            else if(matrix[i][j]==target){
                return true;
            }
            else{
                i--;
            }
        }
    return false;
    }
};