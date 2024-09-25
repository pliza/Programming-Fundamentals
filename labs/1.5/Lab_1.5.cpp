/**
* Done by:
 * Student Name: Liza Rabirokh
 * Student Group: 121
 
 */
#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    {
    float fltA = 45;
    int nB1 = 13;
    int nC = 47;
    int nD1 = 59;
    bool bRez1 = !( ! (fltA > nB1) && ! (nC > nD1));

    double nA = 84.6;
    double nB2 = 84.6;
    int nD2 = 63;
    float fltC = 34;
    bool bRez2 = !( ! (nA > nB2) && !(fltC > nD2));
    }
{
    int const CONSTA = 71; 
    int nB, nD, nE;
    nB = 15;
    nD = 1;
    nE = 49;
    float ptr= 53.4;
    float* fltG = &ptr;
    short sh = 34;
    bool bRez = (((CONSTA &(~nB))+ (*fltG)) != (nD * (nE >> sizeof(34))));
    cout << bRez;

}
return 0;
}




