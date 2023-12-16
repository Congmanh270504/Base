#include"Array2D.h"
void menu()
{
	printf("+============================Menu===============================+\n");
	printf("|| **************************Init***************************** ||\n");
	printf("|| * 1.Nhap mang 2 chieu va xuat mang 2 chieu                * ||\n");
	printf("|| * 2.Tao mang 2 chieu va xuat ra man hinh                  * ||\n");
	printf("|| * 3.Doc mang 2 chieu tu File va xuat ra man hinh          * ||\n");
	printf("|| **************************Exam***************************** ||\n");
	//printf("|| * 4.Tong cac so co chu so dau la chu so le                * ||\n");
	printf("|| **************************WriteFile************************ ||\n");
	printf("|| * 5.Ghi mang so phan so tu File                           * ||\n");
	printf("|| * 0.Thoat chuong trinh			             * ||\n");
	printf("|| ***************************End***************************** ||\n");
	printf("+===============================================================+\n");
}
void fixScanf()
{
	char c;
	while ((c = getchar()) != '\n' && c != EOF);
}
void elementArray(int& n)
{
	do
	{
		printf("Nhap so luong phan tu :");
		scanf("%d", &n);
		if (n <= 0)
		{
			printf("Khong the khoi tao mang -> Moi ban nha lai!\n");
		}
	} while (n <= 0);
}
void init(int**& a, int& m, int& n)
{
	a = new int* [m];
	for (int i = 0; i < m; i++)
	{
		a[i] = new int[n];
	}
}
void Input(int**& a, int& m, int& n)
{
	init(a, m, n);
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("Nhap phan tu a[%d][%d]: ", i, j);
			scanf("%d", &a[i][j]);
		}
	}
}
void Output(int**& a, int m, int n)
{
	printf("Mang 2 chieu vua tao la: \n");
	for (int i = 0; i < m; i++)
	{
		printf("\t");
		for (int j = 0; j < n; j++)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n\n");
	}
}
void createRandomArray2D(int**& a, int& m, int& n)
{
	init(a, m, n);
	srand((unsigned)time(NULL));
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			a[i][j] = -99 + rand() % 199;
		}
	}
}
void readArray2DFile(const char* filename, int**& a, int& m, int& n)
{
	FILE* fi = fopen(filename, "rt");
	if (!fi)
	{
		printf("Loi mo File!!\n");
		getch();
	}
	fscanf(fi, "%d %d\n", &m, &n);
	init(a, m, n);
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			fscanf(fi, "%d", &a[i][j]);
		}
	}
	fclose(fi);
}
void writeFileArray2D(const char* filename, int** a, int& m, int& n)
{
	FILE* fo = fopen(filename, "wt");
	if (!fo)
	{
		printf("Khong the ghi File!!\n");
		return;
	}
	fprintf(fo, "%d %d\n", m, n);
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			fprintf(fo, "%d\t", a[i][j]);
		}
		fprintf(fo, "\n\n");
	}
	fclose(fo);
}
void deleteArray(int**& a, int& m)
{
	for (int i = 0; i < m; i++)
	{
		delete a[i];
	}
	delete a;
}