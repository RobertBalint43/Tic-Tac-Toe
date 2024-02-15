#include <iostream>
using namespace std;

char matrix[3][3] = { '1', '2', '3', '4', '5', '6', '7', '8', '9'  };
char sign = 'X';
int n;


void Draw()
{

    cout << "Tic Tac Toe" << endl;
    cout << endl;

    for ( int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

}

    void Input()
    {
    int a;
    cout << "It's " << sign << " turn. " << "Press the number you want to replace: " << endl;
    cin >> a;

    if (a == 1)
    {
            if (matrix[0][0] == '1')
                matrix[0][0] = sign;
            else
                cout << "The field is already used, try another one!" << endl;
    }
    else if (a == 2)
    {
        if (matrix[0][1] == '2')
            matrix[0][1] = sign;
        else
            cout << "The field is already used, try another one!" << endl;
    }
    else if (a == 3)
    {
        if (matrix[0][2] == '3')
            matrix[0][2] = sign;
        else
            cout << "The field is already used, try another one!" << endl;
    }
    else if (a == 4)
    {
        if (matrix[1][0] == '4')
            matrix[1][0] = sign;
        else
            cout << "The field is already used, try another one!" << endl;
    }
    else if (a == 5)
    {
        if (matrix[1][1] == '5')
            matrix[1][1] = sign;
        else
            cout << "The field is already used, try another one!" << endl;
    }
    else if (a == 6)
    {
        if (matrix[1][2] == '6')
            matrix[1][2] = sign;
        else
            cout << "The field is already used, try another one!" << endl;
    }
    else if (a == 7)
    {
        if (matrix[2][0] == '7')
            matrix[2][0] = sign;
        else
            cout << "The field is already used, try another one!" << endl;
    }
    else if (a == 8)
    {
        if (matrix[2][1] == '8')
            matrix[2][1] = sign;
        else
            cout << "The field is already used, try another one!" << endl;
    }
    else if (a == 9)
    {
        if (matrix[2][2] == '9')
            matrix[2][2] = sign;
        else
            cout << "The field is already used, try another one!" << endl;
    }



    }

    void Change()
    {
        if (sign == 'X')
            sign = 'O';
        else
            sign = 'X';
    }

    char WIN()
    {

    //player with X

        if (matrix[0][0] == 'X' && matrix[0][1] == 'X' && matrix[0][2] == 'X')
            return 'X';
        if (matrix[1][0] == 'X' && matrix[1][1] == 'X' && matrix[1][2] == 'X')
            return 'X';
        if (matrix[2][0] == 'X' && matrix[2][1] == 'X' && matrix[2][2] == 'X')
            return 'X';
        if (matrix[0][0] == 'X' && matrix[1][0] == 'X' && matrix[2][0] == 'X')
            return 'X';
        if (matrix[0][1] == 'X' && matrix[1][1] == 'X' && matrix[2][1] == 'X')
            return 'X';
        if (matrix[0][2] == 'X' && matrix[1][2] == 'X' && matrix[2][2] == 'X')
            return 'X';
        if (matrix[0][0] == 'X' && matrix[1][1] == 'X' && matrix[2][2] == 'X')
            return 'X';
        if (matrix[0][2] == 'X' && matrix[1][1] == 'X' && matrix[2][0] == 'X')
            return 'X';

    //player with O

        if (matrix[0][0] == 'O' && matrix[0][1] == 'O' && matrix[0][2] == 'O')
            return 'O';
        if (matrix[1][0] == 'O' && matrix[1][1] == 'O' && matrix[1][2] == 'O')
            return 'O';
        if (matrix[2][0] == 'O' && matrix[2][1] == 'O' && matrix[2][2] == 'O')
            return 'O';
        if (matrix[0][0] == 'O' && matrix[1][0] == 'O' && matrix[2][0] == 'O')
            return 'O';
        if (matrix[0][1] == 'O' && matrix[1][1] == 'O' && matrix[2][1] == 'O')
            return 'O';
        if (matrix[0][2] == 'O' && matrix[1][2] == 'O' && matrix[2][2] == 'O')
            return 'O';
        if (matrix[0][0] == 'O' && matrix[1][1] == 'O' && matrix[2][2] == 'O')
            return 'O';
        if (matrix[0][2] == 'O' && matrix[1][1] == 'O' && matrix[2][0] == 'O')
            return 'O';

        return '/';

    }

int main()
{   n = 0;

    Draw();
while(1)
{
    n++;
    Input();
    Draw();
    if (WIN() == 'X')
    {
        cout << "The X player is the winner!"<< endl;
        break;
    }
    else if (WIN() == 'O')
    {
     cout << "The O player is the winner!" << endl;
     break;
    }
    else if (WIN() == '/' && n == 9)
    {
        cout << "It's a draw!" << endl;
        break;
    }
    Change();
}
    return 0;
}
