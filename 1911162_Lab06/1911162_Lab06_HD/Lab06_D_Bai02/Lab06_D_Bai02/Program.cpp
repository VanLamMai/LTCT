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
	int soMenu = 8,
		menu,
		m = 0,
		n = 0;
	int a[SIZE][SIZE];
	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, a, m, n);
	} while (menu > 0);

	_getch();
}
