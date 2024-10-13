/**
* Done by:
 * Student Name: Liza Rabirokh
 * Student Group: 121 1groups

 */
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
   {
      vector<int> arr = {2, 5, 8, 45, 87, 23, 87};
      int P = 87;
      for (int i = 0; i < arr.size(); i++)
      {
         if (arr[i] == P)
         {
            cout << i << endl;
            break;
         }
      }
   }
   // Задано послідовність значень А[n]. Знайти найменше значення серед
   // додатних елементів послідовності А[n].
   {
      vector<int> arr = {5, -4, 67, 3, 2, -72, 1};
      int min = arr[0];
      for (int i = 1; i < arr.size(); i++)
      {
         if (arr[i] > 0)
         {
            if (arr[i] < min)
            {
               min = arr[i];
            }
         }
      }
      cout << min << endl;
   }

   // 3. Задано послідовність значень А[n]. Знайти найбільше і найменше значення та поміняти їх місцями
   {
      vector<int> arr = {5, -4, -67, 3, -72, 1};
      int min = arr[0];
      int max = arr[0];
      int arrmin = 0;
      int arrmax = 0;
      for (int i = 1; i < arr.size(); i++)
      {
         if (arr[i] < min)
         {
            min = arr[i];
            arrmin = i;
         }
         if (arr[i] > max)
         {
            max = arr[i];
            arrmax = i;
         }
      }
      arr[arrmin] = max;
      arr[arrmax] = min;

      cout << max << endl;
      cout << min << endl;
   }
}
