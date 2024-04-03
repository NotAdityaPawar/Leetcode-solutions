class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        for (int i = 0;i<board.size();i++){
            for (int j = 0;j<board[i].size();j++){
                if (dfs(board,i,j,word)){
                    return true;
                }
            }
        }
        return false;
    }
    
    bool dfs(vector<vector<char>> &board, int i, int j, string &word){
        if (!word.size()) return true;
        
        if (i<0 or j<0 or i>=board.size() or j>=board[0].size() or board[i][j]!=word[0]){
            return false;
        }
        char c = board[i][j];
        board[i][j] = '*';
        string s = word.substr(1);
        bool ret = dfs(board,i-1,j,s) or dfs(board,i+1,j,s) or dfs(board,i,j-1,s) or dfs(board,i,j+1,s);
        board[i][j] = c;
        return ret;
    }
};