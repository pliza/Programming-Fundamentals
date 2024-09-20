/**
* Done by:
 * Student Name: Liza Rabirokh
 * Student Group: 121
 
 */

#include <iostream>
#include <cmath>

int main ()
{

unsigned short nA = 45671;
int nB= 167;
float nC = -3.9412;
double nD = 6.7e-6; 

unsigned short* pnA;
int* pnB;
float* pnC;
double* pnD;

void* pV;

pnA = &nA;
pnB = &nB;
pnC = &nC;
pnD = &nD;


*pnA = 45671;
*pnB = 167;
*pnC = -3.9412;
*pnD = 6.7e-6; 

int sizenA = sizeof(nA);
int sizenB = sizeof(nB);
int sizenC = sizeof(nC);
int sizenG = sizeof(nD);

int sizepnA = sizeof(pnA);    
int sizepnB = sizeof(pnB);
int sizepnC = sizeof(pnC);
int sizepnD = sizeof(pnD);

pV = &pnA;

 return 0;
}
