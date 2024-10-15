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
    int arr1[11];
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
    int size = 11;
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
    //  Завдання 2
    char arr5[10]; // 1
    char arr6[10]; // 2
    char arr7[10]; // 3

    for (int i = 0; i < 10; i++)
    {
        arr5[i] = 100 + i;
    }

    for (int i = 0; i < 10; i++)
    {
        arr6[i] = 110 - i * i;
    }
    int a = 0;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (arr5[i] == arr6[j])
            {
                arr7[a] = arr5[i];
                a++;
                break;
            }
        }
    }
    int multipl = 1;
    for (int i = 0; i < a; i++)
    {
        multipl *= arr7[i];
    }

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

        int arr8[4]; // 1

        for (int i = 0; i < 4; i++)
        {
            arr1[i] = 0;
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
    }

    {
        float arr[4][5] = {
            {1.1, -2.0, -8.34, 5.5, 1.2},
            {-0.2, 1.34, 2.2, -3.5, 1.1},
            {-2.9, -3.1, 4.4, 7.2, -8.1},
            {-2.6, -1.2, 3.4, 5.4, 6.6}};
        float arr9[5]; // 1
        for (int i = 0; i < 5; i++)
        {
            arr9[i] = 1;
            for (int j = 0; j < 5; j++)
            {
                float mult = 1;
                for (int i = 0; i < 4; i++)
                {
                    mult *= arr[i][j];
                }
                arr9[j] = mult;
            }
        }
    }
}
