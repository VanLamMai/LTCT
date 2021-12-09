#include<iostream>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>

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
	int menu, soMenu = 7;
	DaySo a;
	int n = 0;
	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, a, n);
	} while (menu > 0);

	cout << "\nCam on da su dung chuong trinh";
	_getch();
}