#include"string.h"

void menu()
{
	printf("+============================Menu===============================+\n");
	printf("|| ************************* Init **************************** ||\n");
	printf("|| * 1.Nhap S1,S2 va xuat ra man hinh                        * ||\n");
	printf("|| * 2.Doc S1,S2 tu File va xuat ra man hinh                 * ||\n");
	printf("|| ************************* Exam **************************  * ||\n");
	printf("|| * 3.Xem chuoi S1 co chua so khong                         * ||\n");
	printf("|| **************************WriteFile************************ ||\n");
	printf("|| * 30.Ghi mang so phan so tu File                          * ||\n");
	printf("|| * 0.Thoat chuong trinh                                    * ||\n");
	printf("|| ***************************End***************************** ||\n");
	printf("+===============================================================+\n");
}
void deleteEndline(char*& s)
{
	int len = strlen(s);
	if (s[len - 1] == '\n')
	{
		s[len - 1] = '\0';
	}
}
void fixScanf()
{
	char c;
	while ((c = getchar()) != '\n' && c != EOF);
}
void Input(char*& s1, char*& s2)
{
	printf("Nhap ten cho Character 1: ");
	fgets(s1, MaxSize, stdin);
	fflush(stdin);
	deleteEndline(s1);
	printf("Nhap ten cho Character 2: ");
	fgets(s2, MaxSize, stdin);
	fflush(stdin);
	deleteEndline(s2);
}
void Output(char* s1)
{
	printf("Character is: %s\n", s1);
}
void Upper(char*& s)
{
	int len = strlen(s);
	for (int i = 0; i < len; i++)
	{
		if (s[i] >= 97)
		{
			s[i] -= 32;
		}
	}
}
void deleteChar(char*& s, int index)
{
	int len = strlen(s);
	for (int i = index; i < len; i++)
	{
		s[i] = s[i + 1];
	}
	s[len - 1] = '\0';
}
void deleteExtraWhiteSpace(char*& s)
{
	int len = strlen(s);
	for (int i = 0; i < len; i++)
	{
		if (s[i] == ' ' && s[i + 1] == ' ')
		{
			deleteChar(s, i);
			i--;
		}
		else if (s[i] == '\0')
		{
			break;
		}
	}
	if (s[0] == ' ')
	{
		deleteChar(s, 0);
	}
	if (s[strlen(s) - 1] == ' ')
	{
		deleteChar(s, strlen(s));
	}
}
void realForm(char*& s)
{
	Upper(s);
	int len = strlen(s);
	for (int i = 1; i < len; i++)
	{
		if (s[i - 1] == ' ' && s[i] >= 'A' || s[i] == ' ')
		{
			continue;
		}
		else
		{
			s[i] += 32;
		}
	}
	deleteExtraWhiteSpace(s);
}
void readFile(const char* filename, char* s1, char* s2)
{
	FILE* fi = fopen(filename, "rt");
	if (!fi)
	{
		printf("Loi mo File!!\n");
		return;
	}

	fgets(s1, MaxSize, fi);
	fgets(s2, MaxSize, fi);
	fclose(fi);
}
void writeFile(const char* filename, char* s1, char* s2)
{
	FILE* fo = fopen(filename, "wt");
	if (!fo)
	{
		printf("Loi mo File!!\n");
		return;
	}
	/*fprintf(fo, "%s", s1);
	fprintf(fo, "%s", s2);*/
	fputs(s1, fo);
	fputs(s2, fo);
	fclose(fo);
}
void insertSubStr(char* s1, char* s2, int index)
{
	int len1 = strlen(s1), len2 = strlen(s2);
	if (len1 + len2 > MaxSize) return;
	if (index > len1)	index = len1;

	if (index < len1)
	{
		char* temp = new char[len1 - index + 1];
		strcpy(temp, s1 + index);

		strcpy(s1 + index, s2);


		strcpy(s1 + index + len2, temp);
	}
	else
	{
		strcpy(s1 + index, s2);
	}
}
void deleteSubStr(char*& s, int index, int numChar)
{
	int len = strlen(s);
	if (index >= len)
	{
		return;
	}
	if (index + numChar > len)
	{
		numChar = len - index;
	}
	strcpy(s + index, s + index + numChar);
}