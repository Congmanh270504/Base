#ifndef Array2D_h
#define Array2D_h
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
void menu();
void fixScanf();
void Input(int**& a, int& m, int& n);
void Output(int**& a, int m, int n);
void createRandomArray2D(int**& a, int& m, int& n);
void readArray2DFile(const char* filename, int**& a, int& m, int& n);
void writeFileArray2D(const char* filename, int** a, int& m, int& n);
void deleteArray(int**& a, int& m);

#endif 