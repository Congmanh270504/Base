#include"Array1D.h"
void menu()
{
	printf("***************************Menu****************************\n");
	printf("* 1.Nhap mang so nguyen va xuat ra man hinh               *\n");
	printf("* 2.Tao mang nguyen  va xuat ra man hinh                  *\n");
	printf("* 3.Doc file nguyen duong va xuat ra man hinh             *\n");
	printf("* 4.Ghi file nguyen duong                                 *\n");
	printf("* 0.Thoat chuong trinh			                  *\n");
	printf("***************************End*****************************\n");
}
void fixScanf()
{
	char c;
	while ((c = getchar()) != '\n' && c != EOF);
}
void getElement(int& n)
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
void Input(int*& a, int& n)
{
	getElement(n);
	a = new int[n];
	for (int i = 0; i < n; i++)
	{

		printf("Nhap phan tu thu %d: ", i);
		scanf("%d", &a[i]);

	}
}
void createRandomArray(int*& a, int& n)
{
	getElement(n);
	a = new int[n];
	srand((unsigned)time(NULL));
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % 199 - 99;
	}
}
void readFile(const char* filename, int*& a, int& n)
{
	FILE* fi = fopen(filename, "rt");
	if (!fi)
	{
		printf("Khong mo dc file!!\n");
		return;
	}
	fscanf(fi, "%d\n", &n);
	a = new int[n];
	for (int i = 0; i < n; i++)
	{
		fscanf(fi, "%d", &a[i]);
	}
	fclose(fi);
	Output(a, n);
}
void Output(int* a, int n)
{
	printf("Mang 1 chieu: ");
	for (int i = 0; i < n; i++)
	{
		printf("%4d ", a[i]);
	}
	printf("\n");
}

int findMax(int* a, int& n)
{
	int max = a[0];
	for (int i = 0; i < n; i++)
	{
		if (max < a[i])
		{
			max = a[i];
		}
	}
	return max;
}
int findMin(int* a, int& n)
{
	int min = a[0];
	for (int i = 0; i < n; i++)
	{
		if (min > a[i])
		{
			min = a[i];
		}
	}
	return min;
}
int findNumber(int* a, int& n, int x)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] == x)
		{
			return i;
		}
	}
	return -1;
}
void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}
void intertchangeSort(int*& a, int& n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
			if (a[i] > a[j])
			{
				swap(a[i], a[j]);
			}
	}
}
void writeFile(const char* filename, int*& a, int& n)
{
	FILE* fo = fopen(filename, "wt");
	if (!fo)
	{
		printf("Khong mo dc file!!");
		return;
	}
	fprintf(fo, "%d\n", n);
	for (int i = 0; i < n; i++)
	{
		fprintf(fo, "%d\t", a[i]);
	}
	fclose(fo);
}