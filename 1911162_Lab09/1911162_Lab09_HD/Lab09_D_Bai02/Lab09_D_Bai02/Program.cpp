#include<iostream>
#include<conio.h>
#include<iomanip>

using namespace std;

#include "thuvien.h"
#include "menu.h"

void ChayChuongTrinh();

int main()
{
	ChayChuongTrinh();
	return 1;
}

void ChayChuongTrinh()
{
	int soMenu = 5, menu, n;
	int* a, * b;
	do
	{
		cout << "\nNhap vao do dai canh ma tran vuong: ";
		cin >> n;
	} while (n <= 0);
	
	a = new int[n * n];
	b = new int[n * n];

	TaoMaTran_TuDong(a, n);
	TaoMaTran_TuDong(b, n);

	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, a, b, n);
	} while (menu > 0);

	delete[]a;
	delete[]b;
}