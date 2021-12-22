#include <iostream>
#include <conio.h>

using namespace std;

#include "thuvien.h"

int main()
{
	char a[MAX] = "1234567890";
	int kq;
	kq = ChuyenDoi(a);
	cout << "\nDang so cua chuoi a la : " << kq;

	// Chứng minh kq là 1 số bằng cách thực hiện phép toán lên kq
	int x = kq + 1;
	int y = kq - 1;

	cout << "\nx = " << x;
	cout << "\ny = " << y;

	_getch();
	return 1;
}


