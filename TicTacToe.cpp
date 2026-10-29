
#include <iostream>
using namespace std;

char board[3][3];

// Initialize the board
void initializeBoard() {
    char number = '1';

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board[i][j] = number++;
        }
    }
}

// Display the board
void displayBoard() {
    cout << "\n";

    for (int i = 0; i < 3; i++) {
        cout << " ";

        for (int j = 0; j < 3; j++) {
            cout << board[i][j];

            if (j < 2)
                cout << " | ";
        }

        cout << "\n";

        if (i < 2)
            cout << "---+---+---\n";
    }

    cout << "\n";
}

// Check whether a player has won
bool checkWin(char player) {
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == player &&
            board[i][1] == player &&
            board[i][2] == player)
            return true;

        if (board[0][i] == player &&
            board[1][i] == player &&
            board[2][i] == player)
            return true;
    }

    if (board[0][0] == player &&
        board[1][1] == player &&
        board[2][2] == player)
        return true;

    if (board[0][2] == player &&
        board[1][1] == player &&
        board[2][0] == player)
        return true;

    return false;
}

// Check whether the board is full
bool checkDraw() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] != 'X' &&
                board[i][j] != 'O')
                return false;
        }
    }

    return true;
}

// Play one game
void playGame() {
    initializeBoard();
    char player = 'X';
    int position;

    while (true) {
        displayBoard();

        cout << "Player " << player
             << ", enter position (1-9): ";

        if (!(cin >> position)) {
            cout << "Invalid input! Enter a number.\n";
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }

        if (position < 1 || position > 9) {
            cout << "Choose a position from 1 to 9.\n";
            continue;
        }

        int row = (position - 1) / 3;
        int col = (position - 1) % 3;

        if (board[row][col] == 'X' ||
            board[row][col] == 'O') {
            cout << "Position already occupied!\n";
            continue;
        }

        board[row][col] = player;

        if (checkWin(player)) {
            displayBoard();
            cout << "Player " << player << " wins!\n";
            break;
        }

        if (checkDraw()) {
            displayBoard();
            cout << "The game is a draw!\n";
            break;
        }

        player = (player == 'X') ? 'O' : 'X';
    }
}

int main() {
    char again;

    cout << "===== TIC-TAC-TOE GAME =====\n";

    do {
        playGame();

        cout << "\nPlay again? (y/n): ";
        cin >> again;

    } while (again == 'y' || again == 'Y');

    cout << "Thank you for playing!\n";

    return 0;
}
