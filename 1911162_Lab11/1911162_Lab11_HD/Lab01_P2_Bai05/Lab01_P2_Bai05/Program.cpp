#include<iostream>
#include<conio.h>
#include<fstream>
#include<stdlib.h>
#include<time.h>

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
	int n, a[MAX][MAX];
	char filename[MAX];

	do
	{
		cout << "\nNhap cap cua ma tran : ";
		cin >> n;
	} while (n <= 0);

	cout << "\nTao ma tran ngau nhien voi n = " << n << " ... \n";
	TaoMaTranNgauNhien(a, n);
	Matrix_Display(a, n);

	cout << "\n\nNhap ten vao file de luu : ";
	cin >> filename;

	int dau = 0;
	for(int i = 0; filename[i] != NULL; i++)
		if (filename[i] == '.')
		{
			dau = 1;
			break;
		}
	if (!dau)
		strcat_s(filename, ".txt");

	Mat_File(filename, a, n);
	_getch();

	system("cls");
	cout << "\nXem lai du lieu trong file de kiem tra : \n";
	File_Display(filename);

	_getch();
}