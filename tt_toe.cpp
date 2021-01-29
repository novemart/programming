#include <iostream>
#include <string>
using namespace std;

string p1, p2;
void board();

int main()
{
    // Game starts

    // cout << "Enter your names to start. \nPlayer 1: ";
    // cin >> p1;
    // cout << "Player 2: ";
    // cin >> p2;
    
    board();
    return 0;
}

// Display board
void board()
{
    char grid[3][3][3] = {{" "," "," "}, {" "," "," "}, {" "," "," "}};
    
    cout << "\n ______________Tik Tac Toe_________________ \n";
    cout <<"\n" << p1 << ", your turn. \n \n";

    
    cout << "[" << grid[0][0] << "]  |  " << "[" << grid[0][1] << "]  | " << "[" << grid[0][2] << "] \n";
    cout << "_____|_______|_____\n";
    cout << "     |       |     \n";
    cout << "[" << grid[1][0] << "]  |  " << "[" << grid[1][1] << "]  | " << "[" << grid[1][2] << "] \n";
    cout << "_____|_______|_____\n";
    cout << "     |       |     \n";
    cout << "[" << grid[2][0] << "]  |  " << "[" << grid[2][1] << "]  | " << "[" << grid[2][2] << "] \n";
}