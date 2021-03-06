#include<iostream>
#include<conio.h>

using namespace std;

#include "thuvien.h"

void ChayChuongTrinh();

int main()
{
	ChayChuongTrinh();
	return 1;
}

void ChayChuongTrinh()
{
	PhanSo a, b, c;
	char kt;

	a = Nhap_PS();
	b = Nhap_PS();

	do
	{
		cout << "\nNhap phep toan (+ - * /) : ";
		cin >> kt;
	} while (kt != '+' && kt != '-' && kt != '*' && kt != '/');

	if (kt == '+')
	{
		c = CongPhanSo(a, b);
		cout << "a + b = ";
		Xuat_PS(c);
	}

	else if (kt == '-')
	{
		c = TruPhanSo(a, b);
		cout << "a - b = ";
		Xuat_PS(c);
	}

	else if (kt == '*')
	{
		c = NhanPhanSo(a, b);
		cout << "a * b = ";
		Xuat_PS(c);
	}

	else if (kt == '/')
	{
		c = ChiaPhanSo(a, b);
		cout << "a / b = ";
		Xuat_PS(c);
	}

	_getch();
}