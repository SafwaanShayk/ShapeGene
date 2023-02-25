
#include<iostream>
 #include <iomanip>
   #include <stdlib.h> 
   using namespace std;
int main()
{
    int a;
    do
    {
        cout << "\t\t\t\t\t*********************************\n"
             << endl;
        cout << "\t\t\t\t\t INTERACTIVE SHAPE GENERATOR" << endl;
        cout << "\n\t\t\t\t\t*********************************\n"
             << endl;
        cout << "\n===============================" << endl;
        cout << "Enter (1) for Square" << endl;
        cout << "Enter (2) for Rectangle" << endl;
        cout << "Enter (3) for Triangle" << endl;
        cout << "Enter (4) for Diamond" << endl;
        cout << "Enter (5) for Circle" << endl;
        cout << "Enter (6) for Hexagonal" << endl;
        cout << "Enter(0) to exit" << endl;
        cout << "Enter the value to continue: ";
        cin >> a;
        cout << "===============================" << endl;
        switch (a)
        {
        case 1:
        {
            int row, entry1;
            cout << " Enter the number of rows: ";
            cin >> row;
            cout << "Enter '1' to print Numeric Values" << endl;
            cout << "Enter '2' to print Alphabets" << endl;
            cout << "Enter '3' to print Asterisks" << endl;
            cout << "Enter your choice: ";

            cin >> entry1;
            cout << "\n===============================" << endl;
            switch (entry1)
            {
            case 1:
            {
                cout << "Enter a Numeric Value(0 to 9): ";
                cin >> entry1;
                for (int i = 1; i <= row; ++i)
                {
                    for (int col = 1; col <= row; ++col)
                    {
                        cout << setw(3) << entry1;
                    }
                    cout << endl;
                }
                cout << "===============================" << endl;

                break;
            }
            case 2:
            {
                char entry1;
                cout << "Enter an Alphabet(s): ";
                cin >> entry1;
                for (int i = 1; i <= row; ++i)
                {
                    for (int col = 1; col <= row; ++col)
                    {
                        cout << setw(3) << entry1;
                    }
                    cout << endl;
                }
                cout << "===============================" << endl;

                break;
            }
            case 3:
            {
                for (int i = 1; i <= row; ++i)
                {
                    for (int col = 1; col <= row; ++col)
                    {
                        cout << setw(3) << '*';
                    }

                    cout << endl;
                }
                cout << "===============================" << endl;
                break;
            }
            default:
            {
                cout << "Invalid Input" << endl;
                cout << "\n===============================" << endl;
                break;
            }
            }
            cout << "\n===============================" << endl;
            break;
        }
        case 2:
        {
            int row2, entry2;
            cout << " Enter the number of rows(Greater than 5): ";
            cin >> row2;
            cout << "Enter '1' to print Numeric Values" << endl;
            cout << "Enter '2' to print Alphabets" << endl;
            cout << "Enter '3' to print Asterisks" << endl;
            cout << "Enter your choice: ";
            cin >> entry2;
            cout << "\n===============================" << endl;
            switch (entry2)
            {
            case 1:
                cout << "Enter any Numeric Value(0 to 9): ";
                cin >> entry2;
                for (int l = 1; l <= row2; l++)
                {
                    for (int o = 4; o <= row2; o++)
                    {
                        cout << setw(2) << entry2;
                    }
                    cout << "\n";
                }
                cout << "===============================" << endl;
                break;

            case 2:
                char entry2;
                cout << "Enter an Alphabet(s): ";
                cin >> entry2;
                for (int l = 1; l <= row2; l++)
                {
                    for (int o = 4; o <= row2; o++)
                    {
                        cout << setw(2) << entry2;
                    }
                    cout << "\n";
                }
                cout << "===============================" << endl;

                break;
            case 3:
                for (int l = 1; l <= row2; l++)
                {
                    for (int o = 4; o <= row2; o++)
                    {
                        cout << setw(2) << '*';
                    }
                    cout << "\n";
                }
                cout << "===============================" << endl;
                break;
            default:
                cout << "Invalid Entry" << endl;
                cout << "===============================" << endl;

                break;
            }

            break;
        }

        case 3:
        {
            int row3, entry3;
            char symb3;
            cout << "Enter the number of rows: ";
            cin >> row3;
            cout << "Enter the symbol you want to print(*,-,+,&,%,$): ";
            cin >> symb3;
            cout << "Enter '1' to print Upper Triangle" << endl;
            cout << "Enter '2' to print Lower Triangle" << endl;
            cout << "Enter '3' to print Full Pyramid" << endl;
            cin >> entry3;
            cout << "\n===============================" << endl;
            switch (entry3)
            {
            case 1:
                for (int i = 1; i <= row3; i++)
                {
                    for (int j = 1; j <= (row3 - i); j++)
                    {
                        cout << " ";
                    }
                    for (int k = 1; k <= i * 2 - 1; k++)
                    {
                        if (k == 1 || k == i * 2 - 1)
                        {
                            cout << symb3;
                        }
                        else if (i == row3)
                        {
                            cout << symb3;
                        }
                        else
                        {
                            cout << " ";
                        }
                    }
                    cout << endl;
                }
                cout << "\n===============================" << endl;
                break;
            case 2:
                int i, j;
                for (i = 1; i <= row3; i++)
                {
                    for (j = 1; j < i; j++)
                    {
                        cout << " ";
                    }
                    for (j = 1; j <= (row3 * 2 - (2 * i - 1)); j++)
                    {
                        if (i == 1 || j == 1 || j == (row3 * 2 - (2 * i - 1)))
                        {

                            cout << symb3;
                        }
                        else
                        {
                            cout << " ";
                        }
                    }
                    cout << endl;
                }
                cout << "\n===============================" << endl;

                break;
            case 3:
                for (int i = 1, k = 0; i <= row3; ++i, k = 0)
                {
                    for (int space = 1; space <= row3 - i; ++space)
                    {
                        cout << " ";
                    }
                    while (k != 2 * i - 1)
                    {
                        cout << " " << symb3;
                        ++k;
                    }
                    cout << endl;
                }
                cout << "\n===============================" << endl;
                break;
            default:
                cout << "Invalid Input" << endl;
                cout << "\n===============================" << endl;

                break;
            }
        }
        break;
        case 4:
        {
            int row4, entry4;
            cout << " Enter number of rows (half of the diamond): ";
            cin >> row4;
            cout << "Enter '1' for Hollow Diamond" << endl;
            cout << "Enter '2' for Filled Diamond" << endl;
            cin >> entry4;
            cout << "\n===============================" << endl;
            switch (entry4)
            {
            case 1:
            {
                int i, j;
                for (i = 1; i <= row4; i++)
                {
                    for (j = row4; j > i; j--)
                    {
                        cout << " ";
                    }
                    cout << "*";
                    for (j = 1; j < (i - 1) * 2; j++)
                    {
                        cout << " ";
                    }
                    if (i == 1)
                    {
                        cout << "\n";
                    }
                    else
                    {
                        cout << "*\n";
                    }
                }
                for (i = row4 - 1; i >= 1; i--)
                {
                    for (j = row4; j > i; j--)
                    {
                        cout << " ";
                    }
                    cout << "*";
                    for (j = 1; j < (i - 1) * 2; j++)
                    {
                        cout << " ";
                    }
                    if (i == 1)
                    {
                        cout << "\n";
                    }
                    else
                    {
                        cout << "*\n";
                    }
                }

                cout << "===============================" << endl;

                break;
            }

            case 2:
            {
                for (int i = 0; i <= row4; i++)
                {
                    for (int j = 1; j <= row4 - i; j++)
                        cout << " ";
                    for (int j = 1; j <= 2 * i - 1; j++)
                        cout << "*";
                    cout << endl;
                }
                for (int i = row4 - 1; i >= 1; i--)
                {
                    for (int j = 1; j <= row4 - i; j++)
                        cout << " ";
                    for (int j = 1; j <= 2 * i - 1; j++)
                        cout << "*";
                    cout << endl;
                }
            }
            }
            cout << "===============================" << endl;
            break;
        default:
        {
            cout << "Invalid Input";
            cout << "\n===============================" << endl;

            break;
        }
        }
        }
        break;
    case 5:
    {
        for (int i = 0; i <= row4; i++)
        {
            for (int j = 1; j <= row4 - i; j++)
                cout << " ";
            for (int j = 1; j <= 2 * i - 1; j++)
                cout << "*";
            cout << endl;
        }
        for (int i = row4 - 1; i >= 1; i--)
        {
            for (int j = 1; j <= row4 - i; j++)
                cout << " ";
            for (int j = 1; j <= 2 * i - 1; j++)
                cout << "*";
            cout << endl;
        }
        float radius;
        int entry5;
        cout << "Enter Radius: ";
        cin >> radius;
        cout << "Enter '1' for Filled Circle" << endl;
        cout << "Enter '2' for Hollow Circle" << endl;
        cin >> entry5;
        cout << "\n===============================" << endl;
        switch (entry5)
        {
        case 1:
        {
            int N = 2 * radius + 1;
            int x, y;
            for (int i = 0; i < N; i++)
            {
                for (int j = 0; j < N; j++)
                {
                    x = i - radius;
                    y = j - radius;
                    if (x * x + y * y <= radius * radius + 1)
                        cout << "*";
                    else
                        cout << " ";
                    cout << " ";
                }
                cout << "\n";
            }
            cout << "\n===============================" << endl;
        }
        break;
        case 2:
        {
            float pr = 2;
            for (int i = -radius; i <= radius; i++)
            {
                for (int j = -radius; j <= radius; j++)

                {

                    float d = ((i * pr) / radius) * ((i * pr) / radius) + (j / radius) * (j / radius);
                    if (d > 0.95 && d < 1.08)
                    {
                        cout << "*";
                    }
                    else

                    {
                        cout << " ";
                    }
                }
                cout << endl;
            }
            cout << "\n===============================" << endl;
            break;
        }

        default:
        {
            cout << "Invalid Input" << endl;
            cout << "\n===============================" << endl;
            break;
        }
        }
    }

    break;
    case 6:
    {

        int rows6, entry6;
        cout << "Enter number of Rows(Half of Hexagonal): ";
        cin >> rows6;
        cout << "Enter '1' for Filled Hexagonal" << endl;
        cout << "Enter '2' for Hollow Hexagonal" << endl;
        cin >> entry6;
        cout << "\n===============================" << endl;
        switch (entry6)
        {
        case 1:
        {
            int i = 0, j = 0, k, l;
            for (i = 1, k = rows6, l = 2 * rows6 - 1; i < rows6; i++, k--, l++)
            {
                for (j = 0; j < 3 * rows6; j++)
                {
                    if (j >= k && j <= l)
                    {

                        cout << "*";
                    }
                    else
                        cout << " ";
                }
                cout << "\n";
            }
            for (i = 0, k = 1, l = 3 * rows6 - 2; i < rows6; i++, k++, l--)
            {
                for (j = 0; j < 3 * rows6; j++)
                {
                    if (j >= k && j <= l)
                        cout << "*";
                    else
                        cout << " ";
                }
                cout << "\n";
            }
            cout << "\n===============================" << endl;

            break;
        }
        case 2:
        {
            int kk, l;
            for (int i = 1, kk = rows6, l = 2 * rows6 - 1; i < rows6; i++, kk--, l++)
            {
                for (int j = 0; j < 3 * rows6; j++)
                {
                    if (j == kk || j == l)
                    {
                        cout << "*";
                    }
                    else
                        cout << " ";
                }
                cout << "\n";
            }
            for (int i = 0, kk = 1, l = 3 * rows6 - 2; i < rows6; i++, kk++, l--)

            {
                for (int j = 0; j < 3 * rows6; j++)
                {
                    if (j == kk || j == l)
                    {
                        cout << "*";
                    }
                    else
                        cout << " ";
                }
                cout << "\n";
            }
        }
            cout << "\n===============================" << endl;

            break;
        default:
        {
            cout << "Invalid Input";
            cout << "\n===============================" << endl;

            break;
        }
        break;
        }
    }
    }
    system("PAUSE");
    system("cls");

while (a != 0);

return 0;
}