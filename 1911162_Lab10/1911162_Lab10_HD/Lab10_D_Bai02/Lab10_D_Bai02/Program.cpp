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
		n = 0,
		soMenu = 4;
	Mang a;

	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, a, n);
	} while (menu > 0);
}