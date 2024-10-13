/**
* Done by:
 * Student Name: Liza Rabirokh
 * Student Group: 121 1groups

 */
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
enum Names
{
    David,
    Tom,
    Andrew,
    Kate,
    Mary,
    Olga
};
struct Students
{
    Names name;
    int birth;
    int Monthofbirth;
};
struct Student
{
    Names name;
    int yearsofstudy;
    bool stipend;
};

int main()
{
    Students myStudents[7];

    myStudents[0] = {Tom, 21, 1};
    myStudents[1] = {David, 18, 2};
    myStudents[2] = {Kate, 5, 3};
    myStudents[3] = {Andrew, 31, 4};
    myStudents[4] = {Olga, 11, 5};
    myStudents[5] = {Mary, 14, 6};
    myStudents[6] = {Andrew, 31, 4};

    int countSpring = 0;
    int totalStudents = 7;
    for (int i = 0; i < totalStudents; i++)
    {
        if (myStudents[i].Monthofbirth >= 3 && myStudents[i].Monthofbirth <= 5)
        {
            countSpring++;
        }
    }

    float Spring = (float(countSpring) / totalStudents) * 100;
    cout << "Відсоток студентів, що народилися навесні: " << Spring << endl;

    // Другий масив студентів для 3-го курсу і стипендії
    Student myOtherStudents[7];

    myOtherStudents[0] = {Tom, 2, false};
    myOtherStudents[1] = {David, 3, true};
    myOtherStudents[2] = {Kate, 3, false};
    myOtherStudents[3] = {Andrew, 1, false};
    myOtherStudents[4] = {Olga, 2, true};
    myOtherStudents[5] = {Mary, 3, true};
    myOtherStudents[6] = {Andrew, 1, false};

    int countStipend = 0;
    for (int i = 0; i < totalStudents; i++)
    {
        if (myOtherStudents[i].yearsofstudy == 3 && myOtherStudents[i].stipend == true)
        {
            countStipend++;
        }
    }

    float percentStipend = (float(countStipend) / totalStudents) * 100;
    cout << "Відсоток студентів 3-го курсу, що отримують стипендію: " << percentStipend << endl;

    return 0;
}