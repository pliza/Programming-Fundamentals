/**
* Done by:
 * Student Name: Liza Rabirokh
 * Student Group: 121 1groups
 */
#include <iostream>
#include <cmath>
using namespace std;

int main(){
 
//10 '>', '7', 'R'       0x1a, 0x32, 0x63

const char CONST1 = 10;
char chVar1;
chVar1 = '>';
char chVar2 = '7';
char chVar3 = 'R';

const char CONST2 = 0x1a;
char chVar4;
chVar4 = 0x32;
char chVar5 = 0x63;

     {
        
        //int float unsigned short
        //682 -8.4e2    25921

     int nA = 682;
     float nB = -8.4e2;
     unsigned short nC = 25921;

     double nD;
     int nG;
     char nK;

     //неявне приведення типів 

     nD = nA;
     nG = nB;
     nK = nC;

     //явне приведення типів 
     nD = (double) nA;
     nG = (int) nB;
     nK = (char) nC;

     cout << "nD (double) = " << nD << endl;
     cout << "nG (int) = " << nG << endl;
     cout << "nK (char) = " << nK << endl; 

    // з обходом суворої типізації
     double *pnD;
     void *pV;

     pV = &nA;
     pnD = (double*)pV;
     nD = *pnD;

     int *pnG;
     pV = &nB;
     pnG = (int*)pV;
     nG = *pnG;

     char *pnK;
     pV = &nC;
     pnK = (char*)pV;
     nK = *pnK;
    
    cout << "nD (double)" << nD << endl;
    cout << "nG (int)" << nG << endl;
    cout << "nK (char)" << nK << endl;

     //При використанні суворої типізації значення спотворюються через некоректне приведення вказівників різних типів.
     // Явне приведення типів працює коректно, дозволяючи отримати очікувані результати без втрати даних.

 
     }






}