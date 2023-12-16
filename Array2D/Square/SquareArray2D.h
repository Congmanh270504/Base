#ifndef SquareArray2D_h
#define SquareArray2D_h
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
void menu();
void fixScanf();

void Input(int**& a, int& m);
void Output(int** a, int m);
void createRandomArray2D(int**& a, int& m);

void readArray2DFile(const char* filename, int**& a, int& m);
void writeFileArray2D(const char* filename, int** a, int m);



int findMax(int*& b, int n);
int findMin(int*& b, int n);
void sortZicZac(int** a, int& m);


void freeMatrix(int**& a, int m);
#endif 