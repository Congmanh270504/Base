#ifndef Object_h
#define Object_h

#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

#define LEN_MSSV 15
#define LEN_HO 10
#define LEN_TENLOT 15
#define LEN_TEN 11
#define LEN_FLOAT 7.2
#define LEN_STT 5
#define STR(S) #S
#define STR2(S) STR(S)
#define LEN_HO_TENLOT 26
#define FORMAT_O "%s#%s#%s#%s#%f"
#define GENDER 9
#define FORMAT_PRINT_VALUE "| %-" STR2(LEN_MSSV) "s | %-" STR2(LEN_HO_TENLOT) "s | %-" STR2(LEN_TEN) "s | %-" STR2(LEN_FLOAT) "f | %-" STR2(GENDER) "s |"
#define FORMAT_PRINT_TITLE "| %-" STR2(LEN_STT) "s | %-" STR2(LEN_MSSV) "s | %-" STR2(LEN_HO_TENLOT) "s | %-" STR2(LEN_TEN) "s | %-7s | %-" STR2(GENDER) "s |"
// "| %- "sl ki tu" " variable 
struct Object
{
	char MSSV[15];
	char ho[10], tenlot[15], ten[11], gioitinh[4];
	float diemTB;
};
typedef Object Obj;
void menu();

void deleteEndLine(char s[]);
void fixScanf();

void createElenment(int& n);

void setInfor(Obj& a);
void getInfor(Obj a);

void readInfor(FILE*& fi, Obj& a);// cho parameter la fi=file input
void writeInfor(FILE*& fo, Obj& a);// fo=file output


void setArrayInfor(Obj*& a, int& n);
void getArrayInfor(Obj* a, int& n);

void readFile(const char* filename, Obj*& a, int& n);
void writeFile(const char* filename, Obj*& a, int& n);

void swap(Obj& a, Obj& b);

#endif // Mang1Chieu_SV_h
