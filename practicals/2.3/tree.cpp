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

    string green = "\033[32m"; // Зелений колір
    string brown = "\033[33m"; // Коричневий колір
    string reset = "\033[0m";  // Скидання кольору

    string toys = "@$%#";
    srand(time(0));

    int n; // Кількість рівнів ялинки
    cout << "Введіть кількість рівнів ялинки: ";
    cin >> n;

    // Малюємо рівні ялинки
    for (int level = 1; level <= n; level++)
    {                         // Проходимо по кожному рівню
        int rows = level + 1; // Кількість рядків для кожного рівня (наприклад, 2, 3, 4,...)
        for (int row = 1; row <= rows; row++)
        { // Проходимо по кожному рядку в рівні
            // Друкуємо пробіли для вирівнювання трикутника
            for (int space = 1; space <= n + rows - row; space++)
            {
                cout << " ";
            }
            // Друкуємо зірочки
            cout << green;
            for (int star = 1; star <= 2 * row - 1; star++)
            {
                if (rand() % 5 == 0)
                {
                    cout << toys[rand() % toys.length()]; // Вибираємо випадкову іграшку
                }
                else
                {
                    cout << "*"; // Друкуємо зірочку
                }
            }

            cout << reset << endl;
        }
    }

    // Друкуємо стовбур ялинки
    int trunkHeight = 2; // Висота стовбура
    int trunkWidth = 3;  // Ширина стовбура (непарне число)
    for (int t = 0; t < trunkHeight; ++t)
    {
        // Друкуємо пробіли для вирівнювання стовбура
        for (int space = 1; space <= n + 1; space++)
        {
            cout << " ";
        }
        // Друкуємо зірочки для стовбура
        cout << brown;
        for (int star = 1; star <= trunkWidth; star++)
        {
            cout << "*";
        }
        cout << reset << endl;
    }

    return 0;
}