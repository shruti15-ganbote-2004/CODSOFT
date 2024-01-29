#include <iostream>
using namespace std;
void Board(char board[3][3]) 
{
    for (int i = 0; i < 3;i++)
	{
        for (int j = 0; j < 3;j++) {
            board[i][j] = ' ';
        }
    }
}
void printboard(char board[3][3])
{
    for (int i = 0; i < 3;i++) {
        for (int j = 0; j < 3;j++) {
            cout << board[i][j];
            if (j < 3 - 1) cout << " | ";
        }
        cout << endl;
        if (i < 3 - 1) {
            for (int k = 0; k < 3 * 2 - 1; ++k) {
                cout << "--";
            }
            cout << endl;
        }
    }
}
bool iswinner(char board[3][3], char player) {
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player) return true;
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player) return true;
    }
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player) return true;
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player) return true;
    return false;
}
bool isdraw(char board[3][3])
{
    for (int i = 0; i < 3;i++)
	{
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') return false;
        }
    }
    return true;
}
bool isvalid(char board[3][3], int row, int col)
{
    if (row < 0 || row >= 3 || col < 0 || col >= 3) return false;
    if (board[row][col] != ' ') return false;
    return true;
}
void turn(char board[3][3], int row, int col, char player) {
    board[row][col] = player;
}
int main()
{
	cout<<"Welcome to Tic Tac Toe Game:\n";
    char board[3][3];
    char currentPlayer = 'X';
    bool gameover = false;
    Board(board);
    printboard(board);
    while (!gameover) {
        int row, col;
        cout << "Player " << currentPlayer << ", enter your move (row col): ";
        cin >> row >> col;
        if (isvalid(board, row, col)) {
            turn(board, row, col, currentPlayer);
            if (iswinner(board, currentPlayer))
			{
                cout << "Player " << currentPlayer << " wins!" << endl;
                gameover = true;
            } else if (isdraw(board))
			{
                cout << "It's a draw!" << endl;
                gameover = true;
            } else {
                currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
                printboard(board);
            }
        } else {
            cout << "Invalid move. Try again." << endl;
        }
    }
    int ch;
    cout<<"\nDo you want to play again?y/n:";
    cin>>ch;
    if(ch=='y'||ch=='Y')
    {
    	Board(board);
	}
    return 0;
}
