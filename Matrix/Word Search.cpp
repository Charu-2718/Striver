#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
#include<cmath>
#include<queue>

using namespace std;
vector<vector<int>> directions{{-1,0},{0,-1},{0,1},{1,0}};

    bool find(vector<vector<char>>& board, int i, int j, int idx, string &word){
        int row = board.size();
        int col = board[0].size();
        
        if(idx == word.length()){
            return true;
        }
        
        if(i < 0 || j < 0 || i >= row || j >= col || board[i][j] == '$'){
            return false;
        }

        if(board[i][j] != word[idx]){
            return false;
        }
        
        char temp = board[i][j];
        board[i][j] = '$';

        for(auto dir: directions){
            int new_i = i + dir[0];
            int new_j = j + dir[1];

            if(find(board, new_i, new_j, idx + 1, word)){
                return true;
            }
        }
        
        board[i][j] = temp;
        return false;
    }

    bool exist(vector<vector<char>>& board, string word) {
        int row = board.size();
        int col = board[0].size();
        if(word.length() > row * col) return false;
        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                if(board[i][j] == word[0] && find(board, i, j, 0, word)){
                    return true;
                }
            }
        }
        return false;
    }
int main(){
    vector<vector<char>>a={{'A','B','C','E'},
        {'S','F','C','S'},
        {'A','D','E','E'}};
    string word = "ABCCEX";
    cout<<exist(a,word);
    
}