#include"Object.h"
void deleteEndLine(char s[])
{
	size_t len = strlen(s);
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
void menu() {
	printf("\n");
	printf("***************************Menu****************************\n");
	printf("* 1.Nhap danh sach doi tuong                              *\n");
	printf("* 2.Doc File danh sach doi tuong                          *\n");
	printf("* 3.Xem danh sach doi tuong                               *\n");
	printf("* 4.Sap xep Obj theo ten                                  *\n");
	printf("* 0.Thoat chuong trinh                                    *\n");
	printf("***************************End*****************************\n");
}
void createElenment(int& n)
{
	do
	{
		printf("\nNhap so luong sinh vien : ");
		scanf("%d", &n);
		fixScanf();
		if (n <= 0)
		{
			printf("Moi ban nha lai! ");
		}
	} while (n <= 0);
}
void setInfor(Obj& a)
{
	printf("Nhap MSSV: "); fflush(stdin); fgets(a.MSSV, sizeof(a.MSSV), stdin); deleteEndLine(a.MSSV);
	printf("Nhap ho: "); fflush(stdin); fgets(a.ho, sizeof(a.ho), stdin); deleteEndLine(a.ho);
	printf("Nhap ten lot: "); fflush(stdin); fgets(a.tenlot, sizeof(a.tenlot), stdin); deleteEndLine(a.tenlot);
	printf("Nhap ten: "); fflush(stdin); fgets(a.ten, sizeof(a.ten), stdin); deleteEndLine(a.ten);
	printf("Nhap DiemTB: "); fflush(stdin); scanf("%f", &a.diemTB); fixScanf();
}
void setArrayInfor(Obj*& a, int& n)
{
	createElenment(n);
	a = new Obj[n];
	for (int i = 0; i < n; i++)
	{
		Obj temp;
		setInfor(temp);
		a[i] = temp;
	}
}
void readInfor(FILE*& fi, Obj& a)
{
	fscanf(fi, "%[^#]%*c%[^#]%*c%[^#]%*c%[^#]%*c%f#%[^\n]%*c", &a.MSSV, &a.ho, &a.tenlot, &a.ten, &a.diemTB, &a.gioitinh);
}
void writeInfor(FILE*& fo, Obj& a)// fo=file output
{
	fprintf(fo, "%-12s%-11s%-18s%-19s%-10.2f\n", a.MSSV, a.ho, a.tenlot, a.ten, a.diemTB);
}
void readFile(const char* filename, Obj*& a, int& n)
{
	FILE* fi = fopen(filename, "rt");
	if (!fi)
	{
		printf("Khong mo dc file!!");
		return;
	}
	fscanf(fi, "%d\n", &n);
	a = new Obj[n];
	for (int i = 0; i < n; i++)
	{
		Obj temp;
		readInfor(fi, temp);
		a[i] = temp;
	}
}
void writeFile(const char* filename, Obj*& a, int& n)
{
	// nho la mo cai file dang moi no ko ghi de ma ghi ra 1 file khac 
	FILE* fo = fopen(filename, "wt");// write text
	if (!fo)
	{
		printf("Khong mo dc file!!");
		return;
	}
	fprintf(fo, "%-5s%-13s%-11s%-21s%-11s%-10s\n", "STT", "MSSV", "HO", "TEN LOT", "TEN", "DIEM TB");
	for (int i = 0; i < n; i++)
	{// no se ghi theo dang dong 
		fprintf(fo, "%-5d", i + 1);// thu tu
		writeInfor(fo, a[i]);//ghi vo thoi
	}
	fclose(fo);
}
void getInfor(Obj a)
{
	static char temp[LEN_HO_TENLOT] = { 0 };
	sprintf(temp, "%s %s", a.ho, a.tenlot);
	//printf("%-12s %-11s %-18s %-19s %-10.2f", a.MSSV, a.ho, a.tenlot, a.ten, a.diemTB);
	printf(FORMAT_PRINT_VALUE, a.MSSV, temp, a.ten, a.diemTB,a.gioitinh);
}
void getArrayInfor(Obj* a, int& n)
{
	printf("\n+-----------------------------------Danh sach sinh vien------------------------------------+\n");
	printf(FORMAT_PRINT_TITLE, "STT", "MSSV", "HO TEN LOT", "TEN", "DIEM TB","GIOI TINH");
	printf("\n+------------------------------------------------------------------------------------------+");
	for (int i = 0; i < n; i++)
	{
		printf("\n| %-5d ", i + 1);
		getInfor(a[i]);
	}
	printf("\n+------------------------------------------------------------------------------------------+\n");
}
void swap(Obj& a, Obj& b)
{
	Obj temp = a;
	a = b;
	b = temp;
}
