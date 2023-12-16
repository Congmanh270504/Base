//#include"SquareArray2D.h"	
//int main()
//{
//	int** a = NULL;
//	int m, choose, sum, k, checkreturn, secondchoose;
//	const char* fi = "input-Array2DSquare.txt";
//	const char* fo = "output-Array2DSquare.txt";
//	menu();
//	do
//	{
//		printf("Nhap bai muon lam: ");
//		if (!scanf("%d", &choose))
//			choose = -1;
//		fixScanf();
//		switch (choose)
//		{
//		case 1:
//			do
//			{
//				printf("Nhap so dong t: ");
//				if (!scanf("%d", &m))
//					m = -1;
//				fixScanf();
//			} while (m <= -1);
//
//			Input(a, m);
//			Output(a, m);
//			break;
//		case 2:
//			do
//			{
//				printf("Nhap so dong t: ");
//				if (!scanf("%d", &m))
//					m = -1;
//				fixScanf();
//			} while (m <= -1);
//			createRandomArray2D(a, m);
//			Output(a, m);
//			break;
//		case 3:
//			readArray2DFile(fi, a, m);
//			Output(a, m);
//			break;
//		case 4:
//			if (a == NULL)
//			{
//				printf("Please! choose option 1,2 or 3 \n ");
//			}
//			else
//			{
//
//			}
//			break;
//		case 5:
//			if (a == NULL)
//			{
//				printf("Please! choose option 1,2 or 3 \n ");
//			}
//			else
//			{
//				writeFileArray2D(fo, a, m);
//				printf("Ghi File thanh cong!!\n");
//			}
//			break;
//
//			//case 7:
//			//	if (a == NULL)
//			//	{
//			//		printf("Please! choose option 1,2 or 3 \n ");
//			//	}
//			//	else
//			//	{
//			//		printf("Ma tran sau khi sap xep Zic-Zac la:\n");
//			//		sortZicZac(a, m);
//			//		Output(a, m);
//			//	}
//			//	break;
//		case 0:
//			printf("Have a nice day sir!!\n");
//			freeMatrix(a, m);
//			break;
//		default:
//			printf("Khong co su lua chon so %d!!\n", choose);
//			break;
//		}
//	} while (choose != 0);// check
//
//	getch();
//}