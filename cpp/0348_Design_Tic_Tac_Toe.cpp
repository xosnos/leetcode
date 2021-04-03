class TicTacToe {
private:
    vector<int> rows;
    vector<int> cols;
    int diag1;
    int diag2;
    int n;
public:
    /** Initialize your data structure here. */
    TicTacToe(int n_in) :
        rows(vector<int>(n_in)), cols(vector<int>(n_in)),
        diag1(0), diag2(0), n(n_in) {}
    void insert(int row, int col, int player) {
        rows[row] += (player == 1 ? 1 : -1);
        cols[col] += (player == 1 ? 1 : -1);
        if (row == col) diag1 += (player == 1 ? 1 : -1);
        if (row + col == n - 1) diag2 += (player == 1 ? 1 : -1);
    }
    int check(int row, int col) {
        if (rows[row] == n) return 1;
        else if (rows[row] == -n) return 2;
        if (cols[col] == n) return 1;
        else if (cols[col] == -n) return 2;
        if (row == col) {
            if (diag1 == n) return 1;
            else if (diag1 == -n) return 2;
        }
        if (row + col == n - 1) {
            if (diag2 == n) return 1;
            else if (diag2 == -n) return 2;
        }
        return 0;
    }
    
    
    /** Player {player} makes a move at ({row}, {col}).
        @param row The row of the board.
        @param col The column of the board.
        @param player The player, can be either 1 or 2.
        @return The current winning condition, can be either:
                0: No one wins.
                1: Player 1 wins.
                2: Player 2 wins. */
    int move(int row, int col, int player) {
        insert(row, col, player);
        return check(row, col);
    }
};

/**
 * Your TicTacToe object will be instantiated and called as such:
 * TicTacToe* obj = new TicTacToe(n);
 * int param_1 = obj->move(row,col,player);
 */
