#include"Recursive.h"
int main()
{
	int n, choose = -1;
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
				printf("Nhap N: ");
				if (!scanf("%d", &n))
					n = -1;
				fixScanf();
			} while (n <= -1);
	
			break;
		case 2:
			do
			{
				printf("Nhap so dong t: ");
				if (!scanf("%d", &n))
					n = -1;
				fixScanf();
			} while (n <= -1);
			
			break;
		case 3:
			
			break;
		case 4:
			
			break;
		case 5:
			
			break;
		case 0:
			printf("HAVE A NICE DAY SIR!!\n");
			break;
		default:
			printf("Khong co su lua chon so %d!!\n", choose);
			break;
		}
	} while (choose != 0);
	getch();
}