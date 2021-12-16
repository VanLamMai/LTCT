#define SIZE 10

typedef int MaTran[SIZE][SIZE];

int DoiThu(int day, int month, int year);
void Lich(int dayofweek, int day);
void XuatLich(MaTran a, int n, int m, int dayofweek, int day);
int TimSoNgay(int month, int year);

int DoiThu(int day, int month, int year)
{
	int t, x, k, w;
	t = year - (14 - month) / 12;
	x = t + t / 4 - t / 100 + t / 400;
	k = month + 12 * ((14 - month) / 12) - 2;
	w = (day + x + (31 * k) / 12) % 7;
	return w;
}

int TimSoNgay(int month, int year)
{
	int day;
	switch (month)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		day = 31;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		day = 30;
		break;
	default :
		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
			day = 29;
		}
		else {
			day = 28;
		}break;
	}
	return day;
}

void Lich(int dayofweek, int day)
{
	MaTran a;
	int n = 7;
	int m = 5;
	cout << setw(10) << "Sun" << setw(10) << "Mon" << setw(10)
		<< "Tue" << setw(10) << "Wed" << setw(10)
		<< "Thu" << setw(10) << "Fri" << setw(10) << "Sat";
	switch (dayofweek)
	{
	case 0:
		XuatLich(a, n, m, 0, day);
		break;
	case 1:
		XuatLich(a, n, m, 1, day);
		break;
	case 2:
		XuatLich(a, n, m, 2, day);
		break;
	case 3:
		XuatLich(a, n, m, 3, day);
		break;
	case 4:
		XuatLich(a, n, m, 4, day);
		break;
	case 5:
		XuatLich(a, n, m, 5, day);
		break;
	case 6:
		XuatLich(a, n, m, 6, day);
		break;
	}
}

void XuatLich(MaTran a, int n, int m, int dayofweek, int day)
{
	int value = 1;
	for (int i = 0; i < m; i++)
	{
		cout << "\n";
		for (int j = 0; j < n; j++)
		{
			if (j < dayofweek) { cout << setw(10) << ""; }
			if (j >= dayofweek)
			{
				a[i][j] = value;
				cout << setw(10) << a[i][j];
				value++;
			}
		}
		break;
	}
	for (int i = 0; i < m; i++)
	{
		if (value <= day)
		{
			cout << "\n";
			for (int j = 0; j < n && value <= day; j++)
			{
				a[i][j] = value;
				cout << setw(10) << a[i][j];
				value++;
			}
		}
		else { break; }
	}
}