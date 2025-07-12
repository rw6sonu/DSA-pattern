// Q1

#include <iostream>
using namespace std;
int main()
{
    int i, j;
    cout << "Question1" << endl;
    cout << endl;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }

    cout << "-----------------------------------------" << endl;
    cout << endl;
    // Q2
    cout << "Question2" << endl;
    cout << endl;
    for (i = 1; i <= 5; i++)
    {
        for (j = i; j <= 5; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }

    cout << "-----------------------------------------" << endl;
    cout << endl;
    // Q3
    cout << "Question3" << endl;
    cout << endl;
    for (i = 1; i <= 5; i++)
    {
        for (int k = 1; k <= i - 1; k++)
        {
            cout << "  ";
        }
        for (j = i; j <= 5; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    cout << "-----------------------------------------" << endl;
    cout << endl;
    // Q4
    cout << "Question4" << endl;
    cout << endl;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    cout << "-----------------------------------------" << endl;
    cout << endl;
    // Q5
    cout << "Question5" << endl;
    cout << endl;
    for (i = 5; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    cout << "-----------------------------------------" << endl;
    cout << endl;
    // Q6
    cout << "Question6" << endl;
    cout << endl;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    cout << "-----------------------------------------" << endl;
    cout << endl;
    // Q7
    cout << "Question7" << endl;
    cout << endl;
    for (i = 5; i >= 1; i--)
    {
        for (j = 5; j >= i; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    cout << "-----------------------------------------" << endl;
    cout << endl;
    // Q8
    cout << "Question8" << endl;
    cout << endl;
    for (i = 1; i <= 5; i++)
    {
        for (j = 5; j >= i; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << "-----------------------------------------" << endl;
    cout << endl;
    // Q9
    cout << "Question9" << endl;
    cout << endl;
    for (i = 1; i <= 5; i++)
    {
        for (j = i; j <= 5; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << "-----------------------------------------" << endl;
    cout << endl;
    // Q10
    cout << "Question10" << endl;
    cout << endl;
    for (i = 5; i >= 1; i--)
    {
        for (j = i; j >= 1; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    cout << "-----------------------------------------" << endl;
    cout << endl;
    // Q11
    cout << "Question11" << endl;
    cout << endl;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    cout << "-----------------------------------------" << endl;
    cout << endl;
    // Q12
    cout << "Question12" << endl;
    cout << endl;
    int n = 1;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << n << " ";
            n++;
        }
        cout << endl;
    }

    cout << "-----------------------------------------" << endl;
    cout << endl;
    // Q13
    cout << "Question13" << endl;
    cout << endl;
    int num;

    for (i = 5; i >= 1; i--)
    {
        for (j = i; j <= 5; j++)
        {
            if (j % 2 == 0)
            {
                cout << "0 ";
            }
            else
            {
                cout << "1 ";
            }
        }

        cout << endl;
    }

    cout << "-----------------------------------------" << endl;
    cout << endl;
    // Q14
    cout << "Question14" << endl;
    cout << endl;

    for (i = 1; i <= 5; i++)
    {
        for (int k = 5; k >= i; k--)
        {
            cout << "  ";
        }
        for (j = 1; j <= i; j++)
        {

            cout << j << " ";
        }
        for (int j = i - 1; j >= 1; j--)
        {
            cout << j << " ";
        }

        cout << endl;
    }

    cout << "-----------------------------------------" << endl;
    cout << endl;
    // Q15
    cout << "Question15" << endl;
    cout << endl;

    for (i = 0; i < 5; i++)
    {
        for (int k = 0; k <= 5 - i; k++)
        {
            cout << " ";
        }
        int num = 1;
        for (j = 0; j <= i; j++)
        {

            cout << num << " ";
            num++;
        }

        cout << endl;
    }

    cout << "-----------------------------------------" << endl;
    cout << endl;
    // Q16
    cout << "Question16" << endl;
    cout << endl;
    int numb = 1;
    for (i = 1; i <= 5; i++)
    {
        for (int k = 0; k < 5 - i; k++)
        {
            cout << "  ";
        }
        for (j = 1; j <= i; j++)
        {
            if (i == 1 || i == 2 || i == 3 || i == 4)
            {
                cout << "  ";
            }
            else if (i == 5)
            {
                cout << " ";
            }
            cout << numb << " ";
            numb++;
        }
        cout << endl;
    }

    cout << "-----------------------------------------" << endl;
    cout << endl;
    // Q17
    cout << "Question17" << endl;
    cout << endl;

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (j == 1)
            {
                cout << "1 ";
            }
            else if (j == i || i == 5)
            {

                cout << j << " ";
            }
            else
            {
                cout << "  ";
            }
        }

        cout << endl;
    }

    cout << "-----------------------------------------" << endl;
    cout << endl;
    // Q18
    cout << "Question18" << endl;
    cout << endl;
    for (i = 1; i <= 5; i++)
    {
        for (int k = 5; k >= i; k--)
        {
            cout << "  ";
        }
        for (j = 1; j <= i; j++)
        {
            cout << i << " ";
        }

        cout << endl;
    }

    cout << "-----------------------------------------" << endl;
    cout << endl;
    // Q19
    cout << "Question19" << endl;
    cout << endl;
    for (i = 1; i < 5; i++)
    {
        for (int k = 5; k >= i; k--)
        {
            cout << " ";
        }
        for (j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    cout << "-----------------------------------------" << endl;
    cout << endl;
    // Q20
    cout << "Question20" << endl;
    cout << endl;
    for (i = 1; i < 5; i++)
    {
        for (int k = 5; k >= i; k--)
        {
            cout << " ";
        }
        for (j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    cout << "-----------------------------------------" << endl;
    cout << endl;
    // Q21
    cout << "Question21" << endl;
    cout << endl;

    for (i = 1; i <= 5; i++)
    {
        for (int k = 5; k >= i; k--)
        {
            cout << " ";
        }
        for (j = 1; j <= i; j++)
        {
            if (j == 1)
            {
                cout << "1 ";
            }
            else if (j == i || i == 5)
            {

                cout << j << " ";
            }
            else
            {
                cout << "  ";
            }
        }

        cout << endl;
    }

    cout << "-----------------------------------------" << endl;
    cout << endl;
    // Q22
    cout << "Question22" << endl;
    cout << endl;

    for (i = 1; i <= 5; i++)
    {
        for (int k = 1; k <= 5 - i; k++)
        {
            cout << " ";
        }
        for (j = 1; j <= 2 * i - 1; j++)
        {
            if (j == 1 || j == 2 * i - 1)
            {
                cout << i;
            }
            else
            {
                cout << " ";
            }
        }

        cout << endl;
    }

    cout << "-----------------------------------------" << endl;
    cout << endl;
    // Q23
    cout << "Question23" << endl;
    cout << endl;

    for (i = 1; i <= 7; i++)
    {
        for (j = 1; j <= 7; j++)
        {
            if (i == 1 || j == 1 || i == 7 || j == 7)
            {
                cout << "4 ";
            }
            else if (j == 2 || i == 2 || i == 6 || j == 6)
            {
                cout << "3 ";
            }
            else if (i == 3 || i == 5 || j == 5 || j == 3)
            {
                cout << "2 ";
            }
            else if (i == 4 || j == 4)
            {
                cout << "1 ";
            }
        }

        cout << endl;
    }

    cout << "-----------------------------------------" << endl;
    cout << endl;
    // Q24
    cout << "Question24" << endl;
    cout << endl;

    for (i = 1; i <= 5; i++)
    {
        for (int k = 1; k <= 5 - i; k++)
        {
            cout << "  ";
        }
        for (j = i; j >= 1; j--)
        {
            cout << j << " ";
        }
        for (j = 2; j <= i; j++)
        {
            cout << j << " ";
        }

        cout << endl;
    }

    cout << "-----------------------------------------" << endl;
    cout << endl;
    // Q26
    cout << "Question26" << endl;
    cout << endl;

    int numbe = 1;

    for (i = 1; i <= 5; i++)
    {
        if (i < 5)
        {
            for (j = 1; j <= i; j++)
            {
                if (j == 1)
                {
                    cout << "1 ";
                }
                else if (j == i)
                {
                    numbe += 2;
                    cout << numbe << " ";
                }
                else
                {
                    cout << "  ";
                }
            }
        }
        else
        {

            int temp = 1;
            for (j = 1; j <= 5; j++)
            {
                cout << temp << " ";
                temp += 2;
            }
        }
        cout << endl;
    }

    cout << "-----------------------------------------" << endl;
    cout << endl;
    // Q27
    cout << "Question27" << endl;
    cout << endl;

    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= 4; j++)
        {
            if (i == 1 || j == 1 || i == 4 || j == 4)
            {
                cout << "1 ";
            }
            else if (j == 2 || i == 2 || i == 3)
            {
                cout << "2 ";
            }
        }

        cout << endl;
    }

    cout << "-----------------------------------------" << endl;
    cout << endl;
    // Q28
    cout << "Question28" << endl;
    cout << endl;
    int tm = 1;
    for (i = 1; i < 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << tm << " ";
            tm++;
        }
        cout << endl;
    }

    cout << "-----------------------------------------" << endl;
    cout << endl;
    // Q29
    cout << "Question29" << endl;
    cout << endl;
    for (i = 1; i <= 4; i++)
    {
        for ( int k = 4; k > i; k--)
        {
            cout << " ";
        }
        for (j = 1; j <= i; j++)
        {
            cout << n << " ";
            n++;
        }
        cout << endl;
    }
    for (i = 3; i >= 1; i--)
    {
        n = i * (i - 1) / 2 + 1;
        for ( int k = 1; k <= 4 - i; k++)
        {
            cout << " ";
        }

        for (j = 1; j <= i; j++)
        {
            cout << n << " ";
            n++;
        }
        cout << endl;
    }

    return 0;
}