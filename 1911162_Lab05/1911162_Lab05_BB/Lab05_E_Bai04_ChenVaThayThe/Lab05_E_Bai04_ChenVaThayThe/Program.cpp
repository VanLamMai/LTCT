#include<iostream>
#include<conio.h>
#include<time.h>
#include<stdlib.h>

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
	int menu,
		soMenu = 7,
		n = 0;
	DaySo a;

	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, a, n);
	} while (menu > 0);

	cout << "\nCam on da su dung chuong trinh";
	_getch();
}