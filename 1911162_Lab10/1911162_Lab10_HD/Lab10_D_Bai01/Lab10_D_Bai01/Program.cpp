#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

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
	int soMenu = 9,
		menu,
		n;
	DayDong a;

	do
	{
		cout << "\nNhap vao so phan tu cua day : ";
		cin >> n;
	} while (n <= 0);

	a = new int[n];

	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, a, n);
	} while (menu > 0);

	delete[]a;
}