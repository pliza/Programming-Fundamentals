/**
* Done by:
 * Student Name: Liza Rabirokh
 * Student Group: 121 1groups

 */
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

// Написати програму, яка складається з наступних дій:
// 1. 2. Опису змінної індексованого типу згідно з варіантом (табл. 19).
// Ініціювання цієї змінної виразом згідно з варіантом.
// 3. Обробки змінної індексованого типу.
int main()
{
    int size = 11;
    int arr1[size];
    for (int i = 0; i < 11; i++)
    {
        if (i % 2 == 0)
        {
            arr1[i] = i - 7;
        }
        else
        {
            arr1[i] = 7 + i;
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr1[i] << " ";
    }

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (arr1[j] > arr1[j + 1])
            {
                int temp = arr1[j];
                arr1[j] = arr1[j + 1];
                arr1[j + 1] = temp;
            }
        }
    }
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;
    //  Завдання 2
    //     Написати програму, яка складається з наступних дій:
    // 1. 2. 3. 4. Опису трьох змінних індексованого типу з 10 символьних значень.
    // Ініціювання двох змінних виразами згідно з варіантом (табл. 20).
    // Ініціювання третьої змінної рівними значеннями двох попередніх змінних.
    // Обробки третьої змінної згідно з варіантом.
    char arr5[10]; // 1
    char arr6[10]; // 2
    char arr7[10]; // 3

    for (int i = 0; i < 10; i++)
    {
        arr5[i] = i + 100;
    }
    for (int i = 0; i < 10; i++)
    {
        cout << arr5[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < 10; i++)
    {
        arr6[i] = 110 - i * i;
    }
    for (int i = 0; i < 10; i++)
    {
        cout << arr6[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            arr7[j] = arr5[j] * arr6[j];
        }
    }
    for (int i = 0; i < 10; i++)
    {
        cout << arr7[i] << " ";
    }
    cout << endl;

    // Завдання 3
    // Із середнього арифметичного від’ємних значень елементів стовпців
    // двовимірного масиву
    {
        int arr[5][4] = {
            {11, 21, -3, 4},
            {5, -6, 0, 8},
            {9, 0, 11, 2},
            {4, -4, 4, 1},
            {0, 1, -9, 6}};

        int arr8[4];

        for (int i = 0; i < 4; i++)
        {
            arr8[i] = 0;
            int countNegative = 0;
            for (int j = 0; j < 5; j++)
            {
                if (arr[j][i] < 0)
                {
                    arr8[i] += arr[j][i];
                    countNegative++;
                }
            }
            if (countNegative > 0)
            {
                arr8[i] /= countNegative;
            }
        }
        for (int i = 0; i < 4; i++)
        {
            cout << arr8[i] << " ";
        }
        cout << endl;
    }
}
