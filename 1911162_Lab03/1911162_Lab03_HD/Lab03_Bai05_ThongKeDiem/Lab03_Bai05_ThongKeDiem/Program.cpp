#include<iostream>
#include<conio.h>

using namespace std;

void ThongKe(unsigned int n);
unsigned short NhapDiem(int stt);

int main()
{
	//Khai báo biến lưu số lượng sinh viên
	unsigned int n = 0;

	//Nhập giá trị cho biến n
	cout << endl << "Nhap so luong sinh vien : ";
	cin >> n;

	//Gọi hàm thống kê
	ThongKe(n);

	_getch();
	return 1;
}

/*
	Định nghĩa hàm nhập điểm từ bàn phím
	Input:
		stt: Số thứ tự của sinh viên
	Output:
		Điểm đưuọc nhập từ bàn phím: thuộc đoạn [0..10]
*/
unsigned short NhapDiem(int stt)
{
	unsigned short diem = 0;
	do
	{
		cout << endl << "Nhap diem cua SV thu " << stt << " : ";
		cin >> diem;
	} while (diem < 0 || diem > 10);
	return diem;
}

/*
	Định nghĩa hàm thống kê điểm
	Input:
		n: số lượng sinh viên
	Output:
		Không có. Chỉ xuất kết quả thống kê
*/
void ThongKe(unsigned int n)
{
	//Khai báo các biến đếm để thống kê điểm số
	int d0 = 0, d1 = 0, d2 = 0, d3 = 0, d4 = 0, d5 = 0,
		d6 = 0, d7 = 0, d8 = 0, d9 = 0, d10 = 0;

	unsigned short diem = 0;

	//Duyệt qua từng sinh viên
	for (int i = 0; i < n; i++)
	{
		//Nhập điểm cho sinh viên thứ i
		diem = NhapDiem(i + 1);
		switch (diem)
		{
		case 10: d10++;
		case 9:  d9++;
		case 8:  d8++;
		case 7:  d7++;
		case 6:  d6++;
		case 5:  d5++;
		case 4:  d4++;
		case 3:  d3++;
		case 2:  d2++;
		case 1:  d1++;
		case 0:  d0++;
		}
	}

	//Xuất kết quả thống kê
	cout << endl << "Sinh vien co diem >= 0 : " << d0;
	cout << endl << "Sinh vien co diem >= 1 : " << d1;
	cout << endl << "Sinh vien co diem >= 2 : " << d2;
	cout << endl << "Sinh vien co diem >= 3 : " << d3;
	cout << endl << "Sinh vien co diem >= 4 : " << d4;
	cout << endl << "Sinh vien co diem >= 5 : " << d5;
	cout << endl << "Sinh vien co diem >= 6 : " << d6;
	cout << endl << "Sinh vien co diem >= 7 : " << d7;
	cout << endl << "Sinh vien co diem >= 8 : " << d8;
	cout << endl << "Sinh vien co diem >= 9 : " << d9;
	cout << endl << "Sinh vien co diem = 10 :" << d10;
}