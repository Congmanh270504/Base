#ifndef String_h
#define String_h

#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#define MaxSize 100
void menu();

void Input(char*& s1, char*& s2);
void Output(char* s1);

void deleteEndline(char*& s);

void fixScanf();


void readFile(const char* filename, char* s1, char* s2);
void writeFile(const char* filename, char* s1, char* s2);

void realForm(char*& s);

int checkS1String(char*& s1);
void insertSubStr(char* s1, char* s2, int startPos);
void deleteSubStr(char*& s, int index, int numChar);
#endif