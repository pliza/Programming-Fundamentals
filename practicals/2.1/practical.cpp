/**
* Done by:
 * Student Name: Liza Rabirokh
 * Student Group: 121 1groups

 */

#include <iostream>
#include <vector>
using namespace std;

int main()
{

    // 2. Задано множину послідовностей значень
    // A[m,n]A[m,n]A[m,n], де m – номер послідовності, а n – кількість
    // елементів у m-тій послідовності. Знайти індекси розміщення
    // мінімального значення в множині.
    vector<vector<int>> vec1 = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
    int min = vec1[0][0];
    int minRow = 0;
    int minCol = 0;

    for (int i = 0; i < vec1.size(); i++)
    {
        for (int j = 0; j < vec1[i].size(); j++)
        {
            if (vec1[i][j] < min)
            {
                min = vec1[i][j];
                minRow = i;
                minCol = j;
            }
        }
    }
    cout << "Мінімальне значення: " << min << endl;
    cout << "Індекс розташування: рядок " << minRow << ", стовпець " << minCol << endl;

    // 3. Задано множину послідовностей значень
    // A[m,n]A[m,n]A[m,n], де m – номер послідовності, а n – кількість елементів у m-тій послідовності.
    // Знайти максимальне від’ємне значення в множині

    vector<vector<int>> vec2 = {
        {1, -2, 3},
        {4, 5, -6},
        {-7, 8, 9}};
    int max = 0;
    for (int i = 0; i < vec2.size(); i++)
    {
        for (int j = 0; j < vec2[i].size(); j++)
        {
            if (vec2[i][j] < 0 && (max == 0 || vec2[i][j] > max))
            {
                max = vec2[i][j];
            }
        }
    }
    if (max < 0) // Якщо знайдено від'ємне значення
        cout << "Максимальне від’ємне значення: " << max << endl;
    else
        cout << "Від’ємних значень не знайдено" << endl;

    // 4. Задано множину послідовностей значень
    // A[m,n]A[m,n]A[m,n], де m – номер послідовності, а n – кількість
    // елементів у m-тій послідовності. Знайти мінімальне додатне
    // значення в множині.
    vector<vector<int>> vec3 = {
        {1, -2, -3},
        {4, 5, 6},
        {7, 8, -9}};
    int min1 = 0;
    for (int i = 0; i < vec3[i].size(); i++)
    {
        for (int j = 0; j < vec3[i].size(); j++)
        {
            if (vec3[i][j] > 0 && (min1 == 0 || vec3[i][j] < min1))
            {
                min1 = vec3[i][j];
            }
        }
    }
    if (min1 > 0) // Якщо знайдено додатнє значення
        cout << "Мінімальне додатне значення: " << min1 << endl;
    else
        cout << "Додатніх значень не знайдено" << endl;
}
