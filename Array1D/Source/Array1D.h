#ifndef Array1D_h
#define Array1D_h

#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>

void menu();
void fixScanf();
void getElement(int& n);
void Input(int*& a, int& n);
void createRandomArray(int*& a, int& n);

void readFile(const char* filename, int*& a, int& n);
void writeFile(const char* filename, int*& a, int& n);

void Output(int* a, int n);

int findMax(int* a, int& n);
int findMin(int* a, int& n);

void swap(int& a, int& b);
int findNumber(int* a, int& n, int x);

void intertchangeSort(int*& a, int& n);

#endif //Mang1ChieuSoNguyen_h
