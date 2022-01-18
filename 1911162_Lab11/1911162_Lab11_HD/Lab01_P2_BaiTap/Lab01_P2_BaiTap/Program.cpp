#include<iostream>
#include<conio.h>
#include<fstream>
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
	int soMenu = 3, menu, n_arr, n_ds;
	int arr[MAX];
	NhanVien ds[MAX];

	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, arr, ds, n_arr, n_ds);
	} while (menu > 0);
}