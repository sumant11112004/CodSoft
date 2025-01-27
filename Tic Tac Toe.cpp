#include <iostream>
#include <vector>
using namespace std;

// Function prototypes
void printBoard(const vector<char>& board);
bool isWinner(const vector<char>& board, char player);
bool isDraw(const vector<char>& board);
void makeMove(vector<char>& board, char player);

int main() {
    vector<char> board(9, ' '); // Initialize the board with 9 empty spaces
    char currentPlayer = 'X';
    bool gameOn = true;

    cout << "Welcome to Tic Tac Toe!" << endl;
    cout << "Player 1: X, Player 2: O" << endl;

    while (gameOn) {
        printBoard(board);
        makeMove(board, currentPlayer);

        if (isWinner(board, currentPlayer)) {
            printBoard(board);
            cout << "Player " << currentPlayer << " wins! Congratulations!" << endl;
            gameOn = false;
        } else if (isDraw(board)) {
            printBoard(board);
            cout << "It's a draw!" << endl;
            gameOn = false;
        } else {
            // Switch to the other player
            currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
        }
    }

    cout << "Thanks for playing!" << endl;
    return 0;
}

// Function to display the board
void printBoard(const vector<char>& board) {
    cout << "\n";
    cout << " " << board[0] << " | " << board[1] << " | " << board[2] << "\n";
    cout << "---+---+---\n";
    cout << " " << board[3] << " | " << board[4] << " | " << board[5] << "\n";
    cout << "---+---+---\n";
    cout << " " << board[6] << " | " << board[7] << " | " << board[8] << "\n";
    cout << "\n";
}

// Function to check if a player has won
bool isWinner(const vector<char>& board, char player) {
    // Check rows, columns, and diagonals
    return (board[0] == player && board[1] == player && board[2] == player) ||
           (board[3] == player && board[4] == player && board[5] == player) ||
           (board[6] == player && board[7] == player && board[8] == player) ||
           (board[0] == player && board[3] == player && board[6] == player) ||
           (board[1] == player && board[4] == player && board[7] == player) ||
           (board[2] == player && board[5] == player && board[8] == player) ||
           (board[0] == player && board[4] == player && board[8] == player) ||
           (board[2] == player && board[4] == player && board[6] == player);
}

// Function to check if the game is a draw
bool isDraw(const vector<char>& board) {
    for (char cell : board) {
        if (cell == ' ') {
            return false;
        }
    }
    return true;
}

// Function to make a move
void makeMove(vector<char>& board, char player) {
    int move;
    while (true) {
        cout << "Player " << player << ", enter your move (1-9): ";
        cin >> move;

        // Convert 1-9 input to 0-based index
        move--;

        // Check if the move is valid
        if (move >= 0 && move < 9 && board[move] == ' ') {
            board[move] = player;
            break;
        } else {
            cout << "Invalid move. Please try again." << endl;
        }
    }
}
