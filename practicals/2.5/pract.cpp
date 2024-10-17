#include <vector>
#include <iostream>
using namespace std;

int main()
{
    vector<int> vector = {2, 3, 6, 8, -3, -7, 9};

    int size = vector.size();

    for (int i = 0; i < size - 1; i++)
    {
        if (vector[i] < vector[i + 1])
        {
            int temp = vector[i];
            vector[i] = vector[i + 1];
            vector[i + 1] = temp;
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << vector[i] << " ";
    }
}