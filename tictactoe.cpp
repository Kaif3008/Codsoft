#include <iostream>
#include <vector>

using namespace std;

// Function to print the Tic Tac Toe board
void printBoard(const vector<vector<char>>& board) {
    for (int a = 0; a < 3; ++a) {
        for (int b = 0; b < 3; ++b) {
            cout << board[a][b];
            if (b < 2)
                cout << " | ";
        }
        cout << endl;
        if (a < 2)
            cout << "---------" << endl;
    }
}

// Function to check if the game is over
bool isGameOver(const vector<vector<char>>& board) {
    // Check rows
    for (int a = 0; a < 3; ++a) {
        if (board[a][0] != '-' && board[a][0] == board[a][1] && board[a][1] == board[a][2])
            return true;
    }
    // Check columns
    for (int b = 0; b < 3; ++b) {
        if (board[0][b] != '-' && board[0][b] == board[1][b] && board[1][b] == board[2][b])
            return true;
    }
    // Check diagonals
    if (board[0][0] != '-' && board[0][0] == board[1][1] && board[1][1] == board[2][2])
        return true;
    if (board[0][2] != '-' && board[0][2] == board[1][1] && board[1][1] == board[2][0])
        return true;
    return false;
}

// Function to check if the move is valid
bool isValidMove(const vector<vector<char>>& board, int row, int col) {
    return row >= 0 && row < 3 && col >= 0 && col < 3 && board[row][col] == '-';
}

// Function to check if the board is full
bool isBoardFull(const vector<vector<char>>& board) {
    for (int a = 0; a < 3; ++a) {
        for (int b = 0; b < 3; ++b) {
            if (board[a][b] == '-')
                return false;
        }
    }
    return true;
}

// Function to play Tic Tac Toe
void playTicTacToe() {
    vector<vector<char>> board(3, vector<char>(3, '-'));
    bool player1Turn = true;

    while (!isGameOver(board) && !isBoardFull(board)) {
        cout << "Current board:" << endl;
        printBoard(board);
        int row, col;
        char player = player1Turn ? 'X' : 'O';
        cout << "Player " << player << "'s turn. Enter row (0-2) and column (0-2): ";
        cin >> row >> col;

        if (isValidMove(board, row, col)) {
            board[row][col] = player;
            player1Turn = !player1Turn;
        } else {
            cout << "Invalid move! Try again." << endl;
        }
    }

    cout << "Final board:" << endl;
    printBoard(board);

    if (isGameOver(board))
        cout << "Player " << (player1Turn ? 'O' : 'X') << " wins!" << endl;
    else
        cout << "It's a draw!" << endl;
}

int main() {
    cout << "Welcome to Tic Tac Toe!" << endl;
    playTicTacToe();
    return 0;
}
