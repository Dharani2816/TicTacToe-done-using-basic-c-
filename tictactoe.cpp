#include <iostream>
using namespace std;

char board[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};

void Displayboard()
{
    cout << "  " << board[0][0] << " | " << board[0][1] << "  | " << board[0][2] << endl;
    cout << "--------------" << endl;
    cout << "  " << board[1][0] << " | " << board[1][1] << "  | " << board[1][2] << endl;
    cout << "--------------" << endl;
    cout << "  " << board[2][0] << " | " << board[2][1] << "  | " << board[2][2] << endl;
}

void drawX(int a)
{
    switch (a)
    {
    case 1:
        if (board[0][0] != 'X' || board[0][0] != 'O')
        {
            board[0][0] = 'X';
            break;
        }
        else
            cout << "The position is filled already...\n";
        break;
    case 2:
        if (board[0][1] != 'X' || board[0][1] != 'O')
        {
            board[0][1] = 'X';
            break;
        }
        else
            cout << "The position is filled already...\n";
        break;
    case 3:
        if (board[0][2] != 'X' || board[0][2] != 'O')
        {
            board[0][2] = 'X';
            break;
        }
        else
            cout << "The position is filled already...\n";
        break;
    case 4:
        if (board[1][0] != 'X' || board[1][0] != 'O')
        {
            board[1][0] = 'X';
            break;
        }
        else
            cout << "The position is filled already...\n";
        break;
    case 5:
        if (board[1][1] != 'X' || board[1][1] != 'O')
        {
            board[1][1] = 'X';
            break;
        }
        else
            cout << "The position is filled already...\n";
        break;
    case 6:
        if (board[1][2] != 'X' || board[1][2] != 'O')
        {
            board[1][2] = 'X';
            break;
        }
        else
            cout << "The position is filled already...\n";
        break;
    case 7:
        if (board[2][0] != 'X' || board[2][0] != 'O')
        {
            board[2][0] = 'X';
            break;
        }
        else
            cout << "The position is filled already...\n";
        break;
    case 8:
        if (board[2][1] != 'X' || board[2][1] != 'O')
        {
            board[2][1] = 'X';
            break;
        }
        else
            cout << "The position is filled already...\n";
        break;
    case 9:
        if (board[2][2] != 'X' || board[2][2] != 'O')
        {
            board[2][2] = 'X';
            break;
        }
        else
            cout << "The position is filled already...\n";
        break;
    default:
        cout << "Enter a valid position from 1-9\n";
        break;
    }
}

void drawO(int a)
{
    switch (a)
    {
    case 1:
        if (board[0][0] != 'X' || board[0][0] != 'O')
        {
            board[0][0] = 'O';
            break;
        }
        else
            cout << "The position is filled already...\n";
        break;
    case 2:
        if (board[0][1] != 'X' || board[0][1] != 'O')
        {
            board[0][1] = 'O';
            break;
        }
        else
            cout << "The position is filled already...\n";
        break;
    case 3:
        if (board[0][2] != 'X' || board[0][2] != 'O')
        {
            board[0][2] = 'O';
            break;
        }
        else
            cout << "The position is filled already...\n";
        break;
    case 4:
        if (board[1][0] != 'X' || board[1][0] != 'O')
        {
            board[1][0] = 'O';
            break;
        }
        else
            cout << "The position is filled already...\n";
        break;
    case 5:
        if (board[1][1] != 'X' || board[1][1] != 'O')
        {
            board[1][1] = 'O';
            break;
        }
        else
            cout << "The position is filled already...\n";
        break;
    case 6:
        if (board[1][2] != 'X' || board[1][2] != 'O')
        {
            board[1][2] = 'O';
            break;
        }
        else
            cout << "The position is filled already...\n";
        break;
    case 7:
        if (board[2][0] != 'X' || board[2][0] != 'O')
        {
            board[2][0] = 'O';
            break;
        }
        else
            cout << "The position is filled already...\n";
        break;
    case 8:
        if (board[2][1] != 'X' || board[2][1] != 'O')
        {
            board[2][1] = 'O';
            break;
        }
        else
            cout << "The position is filled already...\n";
        break;
    case 9:
        if (board[2][2] != 'X' || board[2][2] != 'O')
        {
            board[2][2] = 'O';
            break;
        }
        else
            cout << "The position is filled already...\n";
        break;
    default:
        cout << "Enter a valid position from 1-9\n";
        break;
    }
}

char check()
{
    int count = 0;
    // checking every row
    for (int i = 0; i < 3; i++)
    {
        if (board[i][0] == 'X' && board[i][1] == 'X' && board[i][2] == 'X')
            return 'X';
        else if (board[i][0] == 'O' && board[i][1] == 'O' && board[i][2] == 'O')
            return 'O';
    }

    // checking every column
    for (int i = 0; i < 3; i++)
    {
        if (board[0][i] == 'X' && board[1][i] == 'X' && board[2][i] == 'X')
            return 'X';
        else if (board[0][i] == 'O' && board[1][i] == 'O' && board[2][i] == 'O')
            return 'O';
    }
    // checking one diagonal
    if (board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X')
        return 'X';
    else if (board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == 'O')
        return 'O';

    // checking another diagonal
    if (board[0][2] == 'X' && board[1][1] == 'X' && board[2][0] == 'X')
        return 'X';
    else if (board[0][2] == 'O' && board[1][1] == 'O' && board[2][0] == 'O')
        return 'O';

    return 'A';
}

void Playgame(int b)
{
    int c;
    if (b == 1)
    {
        cout << "X starts....." << endl;
        for (int i = 1; i < 10; i++)
        {
            if (i % 2 != 0)
            {
                cout << "-----X turn-----\n";
                cout << "Enter the position:";
                cin >> c;
                drawX(c);
                Displayboard();
            }
            else
            {
                cout << "-----O turn-----\n";
                cout << "Enter the position:";
                cin >> c;
                drawO(c);
                Displayboard();
            }
            char ch = check();
            if (ch == 'X' || ch == 'O')
            {
                cout << ch << " wins!!!\n";
                break;
            }

            if (i == 9)
                cout << "Match is a draw.....\n";
        }
    }
    else
    {
        cout << "O starts....." << endl;
        for (int i = 1; i < 10; i++)
        {
            if (i % 2 != 0)
            {
                cout << "-----O turn-----\n";
                cout << "Enter the position:";
                cin >> c;
                drawO(c);
                Displayboard();
            }
            else
            {
                cout << "-----X turn-----\n";
                cout << "Enter the position:";
                cin >> c;
                drawX(c);
                Displayboard();
            }
            char a = check();
            if (a == 'X' || a == 'O')
            {
                cout << a << " wins!!!\n";
                break;
            }

            if (i == 9)
                cout << "Match is a draw.....\n";
        }
    }
}

char board1[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
void display()
{
    cout << "  " << board1[0][0] << " | " << board1[0][1] << "  | " << board1[0][2] << endl;
    cout << "--------------" << endl;
    cout << "  " << board1[1][0] << " | " << board1[1][1] << "  | " << board1[1][2] << endl;
    cout << "--------------" << endl;
    cout << "  " << board1[2][0] << " | " << board1[2][1] << "  | " << board1[2][2] << endl;
}
int main()
{
    char a;
    cout << "------Welcome to the tic tac toe game------" << endl;
    display();
    cout << "Enter which player to start X or O ?....." << endl;
    cin >> a;
    if (a == 'X' || a == 'x')
    {
        Playgame(1);
        cout << "Game over.....\n";
    }

    else if (a == 'O' || a == 'o')
    {
        Playgame(0);
        cout << "Game over......\n";
    }

    else
    {
        cout << "Oops Please enter a valid character....." << endl;
    }
}