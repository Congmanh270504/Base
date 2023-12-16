#include"Array2D.h"
int main()
{
	int** a = NULL;
	int m = -1, n = -1, choose = -1, sum, k;
	const char* fi = "input-Array2D.txt";
	const char* fo = "output-Array2D.txt";
	menu();
	do
	{
		printf("Nhap bai muon lam: ");
		if (!scanf("%d", &choose))
			choose = -1;
		fixScanf();
		switch (choose)
		{
		case 1:
			do
			{
				printf("Nhap so dong t: ");
				if (!scanf("%d", &m))
					m = -1;
				fixScanf();
			} while (m <= -1);
			do
			{
				printf("Nhap so cot: ");

				if (!scanf("%d", &n))
					n = -1;
				fixScanf();
			} while (n <= -1);
			Input(a, m, n);
			Output(a, m, n);
			break;
		case 2:
			do
			{
				printf("Nhap so dong t: ");
				if (!scanf("%d", &m))
					m = -1;
				fixScanf();
			} while (m <= -1);
			do
			{
				printf("Nhap so cot: ");

				if (!scanf("%d", &n))
					n = -1;
				fixScanf();
			} while (n <= -1);
			createRandomArray2D(a, m, n);
			Output(a, m, n);
			break;
		case 3:
			readArray2DFile(fi, a, m, n);
			Output(a, m, n);
			break;
		case 4:
			if (a == NULL)
			{
				printf("Please! Choose option 1,2 or 3 \n ");
			}
			else
			{

			}
			break;
		case 5:
			if (a == NULL)
			{
				printf("Please! Choose option 1,2 or 3 \n ");
			}
			else
			{
				writeFileArray2D(fo, a, m, n);
				printf("Ghi File thanh cong!!\n");
			}
			break;
		case 0:
			deleteArray(a, m);
			printf("HAVE A NICE DAY SIR!!\n");
			break;
		default:
			printf("Khong co su lua chon so %d!!\n", choose);
			break;
		}
	} while (choose != 0);
	getch();
}