/**
 * Done by:
 * Student Name: Liza Rabirokh
 * Student Group: 121 1groups
 */

#include <iostream>
#include <vector>
#include <algorithm>
#include <bitset>

using namespace std;

int main()
{

    // 1. Перевірка парності числа
    int nA = 145;
    cout << "Число " << nA << " у двійковій системі: " << bitset<32>(nA) << endl;
    int result = nA & 1;
    if (result == 0)
        cout << "Число парне" << endl;
    else
        cout << "Число не парне" << endl;

    // 2. Підрахунок кількості одиничних бітів
    int nB = 78;
    int ones = 0;
    cout << "Число " << nB << " у двійковій системі: " << bitset<32>(nB) << endl;

    for (int i = 0; i < 32; i++)
    {
        if (nB & (1 << i))
        {
            ones++;
        }
    }
    cout << "Кількість одиниць: " << ones << endl;

    // 3. Перевірка встановленого біта на певній позиції
    int nC = 150;
    int pos = 0;
    cout << "Число " << nC << " у двійковій системі: " << bitset<32>(nC) << endl;

    int result1 = (nC & (1 << pos));
    if (result1)
    {
        cout << "1" << endl;
    }
    else
    {
        cout << "0" << endl;
    }

    return 0;
}