#include<iostream>
#include<conio.h>
#include<fstream>

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
	int arr[MAX], n;
	char filename[MAX];

	cout << "\nNhap ten file de mo : ";
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

	File_Array(filename, arr, n);

	cout << "\nXem lai mang : \n";
	Array_Display(arr, n);

	_getch();
}