#include<bits/stdc++.h>
using namespace std;

void printBoard(vector<vector<int>>& board){
    for (auto it : board){
        for (auto it2 : it) cout << it2 << " ";
        cout << endl;
    }
    cout << endl;
}
bool canPlace(vector<vector<int>>& board, int i, int j, int n){
    // check for row 
    for (int k = 0;k < i;k++){
        if (board[k][j] == 1) return false;
    }

    int r = i, c = j;
    while (r >= 0 and c >= 0){
        if (board[r][c] == 1) return false;
        r--; c--;
    }

    int r2 = i, c2 = j;
    while (r2 >= 0 and c2 >= 0){
        if (board[r2][c2] == 1) return false;
        r2--; c2--;
    }

    return true;

}
bool nQueen(vector<vector<int>>& board, int row, int i){
    if (i == row){
        printBoard(board);
        return true;
    }

    for (int j = i;j < row;j++){
        if (canPlace(board, i, j, row)){
            board[i][j] = 1;
            bool sucess = nQueen(board, row, i + 1);
            if (sucess) return true;
            board[i][j] = 0;
        }
    }
    return false;
}
int main(){
    int n;
    cin >> n;
    vector<vector<int>> board(n, vector<int>(n, 0));
    nQueen(board, 4, 0);

    return 0;
}