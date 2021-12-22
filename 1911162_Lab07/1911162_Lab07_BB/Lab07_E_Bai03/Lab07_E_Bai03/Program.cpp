#include<iostream>
#include<conio.h>

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
	int soMenu = 6, menu;
	String str;

	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, str);
	} while (menu > 0);
	_getch();
}