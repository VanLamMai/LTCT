#include<iostream>
#include<conio.h>
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
	int soMenu = 9, menu;
	Vector u = { 0,0,0 }, v = { 0,0,0 };
	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, u, v);
	} while (menu > 0);
}