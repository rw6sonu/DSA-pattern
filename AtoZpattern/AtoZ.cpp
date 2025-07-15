#include <iostream>
using namespace std;
// A

int main()
{
    cout << "-------------------------------";
    cout << endl;
    cout << "A" << endl;
    cout << endl;

    int i, j;

    for (i = 0; i <= 8; i++)
    {
        for (j = 0; j <= 8; j++)
        {

            if ((j == 0 || j == 8 || i == 4) && !(i == 0 && (j == 0 || j == 8)))
            {
                cout << "* ";
            }
            else if (i == 0 && j > 0 && j < 8)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }

    // B
    cout << "-------------------------------";
    cout << endl;
    cout << "B" << endl;
    cout << endl;

    for (i = 0; i <= 8; i++)
    {
        for (j = 0; j <= 8; j++)
        {

            if ((j == 0 || j == 8 || i == 4 || i == 8) && !(i == 0 && (j == 8)) && !(i == 8 && (j == 8)))
            {
                cout << "* ";
            }
            else if (i == 0 && j > 0 && j < 8)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }

    // C
    cout << "-------------------------------";
    cout << endl;
    cout << "C" << endl;
    cout << endl;

    for (i = 0; i <= 8; i++)
    {
        for (j = 0; j <= 8; j++)
        {

            if ((j == 0 || i == 8) && !(i == 0 && (j == 0)) && !(i == 8 && (j == 8 || j == 0)))
            {
                cout << "* ";
            }
            else if (i == 0 && j > 0 && j < 8)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }

    // D
    cout << "-------------------------------";
    cout << endl;
    cout << "D" << endl;
    cout << endl;

    for (i = 0; i <= 7; i++)
    {
        for (j = 0; j <= 7; j++)
        {

            if ((j == 0 || j == 7 || i == 7) && !(i == 0 && (j == 7)) && !(i == 7 && (j == 7)))
            {
                cout << "* ";
            }
            else if (i == 0 && j > 0 && j < 7)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }

    // E
    cout << "-------------------------------";
    cout << endl;
    cout << "E" << endl;
    cout << endl;

    for (i = 0; i <= 8; i++)
    {
        for (j = 0; j <= 8; j++)
        {

            if ((j == 0 || i == 8 || i == 4) && !(i == 0 && (j == 8)) && !(i == 8 && (j == 8)) && !(i == 4 && (j == 8)))
            {
                cout << "* ";
            }
            else if (i == 0 && j > 0 && j < 8)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }

    // F
    cout << "-------------------------------";
    cout << endl;
    cout << "F" << endl;
    cout << endl;

    for (i = 0; i <= 8; i++)
    {
        for (j = 0; j <= 8; j++)
        {

            if ((j == 0 || i == 4) && !(i == 0 && (j == 8)) && !(i == 8 && (j == 8)) && !(i == 4 && (j == 8)))
            {
                cout << "* ";
            }
            else if (i == 0 && j > 0 && j < 8)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }

    // G
    cout << "-------------------------------";
    cout << endl;
    cout << "G" << endl;
    cout << endl;

    for (i = 0; i <= 8; i++)
    {
        for (j = 0; j <= 8; j++)
        {

            if ((j == 0 || i == 8 || j == 7 || i == 4) && !(i == 0 && (j == 7 || j == 0)) && !(i == 8 && (j == 8 || j == 0 || j == 7)) && !(j == 7 && (i == 0 || i == 1 || i == 2 || i == 3)) && !(i == 4 && (j == 1 || j == 2 || j == 8)))
            {
                cout << "* ";
            }
            else if (i == 0 && j > 0 && j < 8)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }

    // H
    cout << "-------------------------------";
    cout << endl;
    cout << "H" << endl;
    cout << endl;

    for (i = 0; i <= 9; i++)
    {
        for (j = 0; j <= 9; j++)
        {

            if ((j == 0 || i == 5 || j == 7) && !(i == 0) && !(i == 5 && (j == 8 || j == 9)))
            {
                cout << "* ";
            }
            else if (i == 0 && j > 0 && j < 9)
            {
                cout << "";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }

    // I
    cout << "-------------------------------";
    cout << endl;
    cout << "I" << endl;
    cout << endl;

    for (i = 0; i <= 8; i++)
    {
        for (j = 0; j <= 8; j++)
        {

            if ((i == 0 || i == 8 || j == 4))
            {
                cout << "* ";
            }
            else if (i == 0 && j > 0 && j < 8)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }

    // J
    cout << "-------------------------------";
    cout << endl;
    cout << "J" << endl;
    cout << endl;

    for (i = 0; i <= 8; i++)
    {
        for (j = 0; j <= 8; j++)
        {

            if ((i == 0 || i == 8 || j == 6) && !(i == 0 && (j == 7 || j == 8)))
            {
                cout << "* ";
            }
            else if (i == 0 && j > 0 && j < 8)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}