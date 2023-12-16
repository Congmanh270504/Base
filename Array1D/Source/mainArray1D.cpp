#include "Array1D.h"
int main()
{
	const char* fi = "input-Array1D.txt";
	const char* fo = "output-Array1D.txt";
	int* a = NULL, n, choose = -1, x, k, result;
	menu();
	do
	{
		printf("Nhap lua chon bai muon lam: ");
		if (!scanf("%d", &choose))
			choose = -1;
		fixScanf();
		switch (choose)
		{
		case 1:
			Input(a, n);
			Output(a, n);
			break;
		case 2:
			createRandomArray(a, n);
			Output(a, n);
			break;
		case 3:
			readFile(fi, a, n);
			break;
			/*case 4:
				if (a == NULL)
				{
					printf("Mang chua duoc khoi tao!!\n(Hay chon option 1 2 3)\n");
				}
				else
				{

				}
				break;*/
		case 4:
			if (a == NULL)
			{
				printf("Mang chua duoc khoi tao!!\n(Hay chon option 1 2 3)\n");
			}
			else
			{
				writeFile(fo, a, n);
				printf("Ghi File thanh cong!!\n");
			}
			break;
		case 0:
			free(a);
			printf("\tHave a nice day Sir!!");
			return 0;
		default:
			printf("Khong co su lua chon do!!\n");
			break;
		}
	} while (choose != 0);
	_getch();
}