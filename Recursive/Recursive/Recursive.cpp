#include"Recursive.h"
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
int sum1A(int n)
{
	if (n == 1)
	{
		return 1;
	}
	return n + sum1A(n - 1);
}
long float sum1B(int n)
{
	if (n == 1)
	{
		return sqrt(5);
	}
	return sqrt(5 + sum1B(n - 1));
	/*float sum = 0;
	for (int i = 1; i <= n; i++)
	{
		sum = sqrt(5 + sum);
	}
	return sum;*/
}
long float sum1C(int n)
{
	if (n == 1)
	{
		return (float)1 / 2;
	}
	return (float)n / (n + 1) + sum1C(n - 1);
}
long float sum1D(int n)
{
	if (n == 0)
	{
		return 1;
	}
	return (float)1 / (2 * n + 1) + sum1D(n - 1);
}
long int sum1E(int n)
{
	if (n == 1)
	{
		return 2;
	}
	return n * (n + 1) + sum1E(n - 1);
}