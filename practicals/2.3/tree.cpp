/**
 * Done by:
 * Student Name: Liza Rabirokh
 * Student Group: 121 1groups
 */
#include <iostream>
#include <string>
#include <fstream> // Для роботи з файлами

using namespace std;

int main()
{
    ofstream outFile("cristmas_tree.txt");

    string green = "\033[32m";
    string brown = "\033[33m";
    string reset = "\033[0m"; // Скидання кольору

    string toys = "@$%#";
    srand(time(0));

    int n;
    cout << "Введіть кількість рівнів ялинки: ";
    cin >> n;

    for (int level = 1; level <= n; level++)
    {
        int rows = level + 2;
        for (int row = 1; row <= rows; row++)
        {
            for (int space = 2; space <= n + 3 - row; space++)
            {
                cout << " ";
                outFile << " ";
            }
            cout << green;
            for (int star = 1; star <= 2 * row - 1; star++)
            {
                if (rand() % 5 == 0)
                {
                    char toy = toys[rand() % toys.length()];
                    cout << toy;
                    outFile << toy;
                }
                else
                {
                    cout << "*";
                    outFile << "*";
                }
            }

            cout << reset << endl;
            outFile << endl;
        }
    }
    int trunkHeight = 2;
    int trunkWidth = 3;
    for (int t = 0; t < trunkHeight; ++t)
    {
        for (int space = 1; space <= n; space++)
        {
            cout << " ";
            outFile << " ";
        }
        cout << brown;
        for (int star = 1; star <= trunkWidth; star++)
        {
            cout << "*";
            outFile << "*";
        }
        cout << reset << endl;
        outFile << endl;
    }

    return 0;
}