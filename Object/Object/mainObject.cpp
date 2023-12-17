#include"Object.h"

int main()
{
	const char* fi = "input-DanhSachSV.txt";
	const char* fo = "output-DanhSachSV.txt";
	Object* a = NULL;
	int n, choose = -1, result;
	char pMSSV[15], pten[10];
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
			setArrayInfor(a, n);
			getArrayInfor(a, n);
			break;
		case 2:
			readFile(fi, a, n);
			printf("Danh sach cac sinh vien vua load tu FILE: \n");
			getArrayInfor(a, n);
			break;
		case 3:
			printf("Danh sach cac sinh vien:\n");
			getArrayInfor(a, n);
			break;
		case 4:
			if (a == NULL)
			{
				printf("Mang SV chua duoc khoi tao!!\n(Hay chon option 1 2 )\n");

			}
			else
			{
			}
			break;
		case 0:
			return 0;
		default:
			printf("Khong co bai muon lam!!\n");
			break;
		}
	} while (choose != 0);
	free(a);
	_getch();
}