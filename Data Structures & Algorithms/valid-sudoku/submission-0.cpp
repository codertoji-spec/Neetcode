class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) 
    {
        vector<unordered_set<char>> rows(9),cols(9),boxs(9);
        for(int i = 0 ; i<9;i++)
        {
            for(int j = 0;j<9;j++)
            {
                int nums = board[i][j];
                if(nums == '.') continue;
                int row = i;
                int col = j;
                int box = (i/3) * 3 + (j/3);
                if(rows[row].count(nums) || cols[col].count(nums) || boxs[box].count(nums))
                {
                    return false;
                }
                else
                {
                    rows[row].insert(nums);
                    cols[col].insert(nums);
                    boxs[box].insert(nums);
                }
            }
        }
        return true;
    }
};
