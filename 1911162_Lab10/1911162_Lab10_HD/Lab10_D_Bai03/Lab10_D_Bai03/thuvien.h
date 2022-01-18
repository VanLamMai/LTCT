#define MAX 10
int a[MAX], n;

int DieuKienNhapKichThuoc()
{
	int so;
	do
	{
		cin >> so;
		if (so <= 0 || so > MAX)
			cout << "Khong hop le (Yeu cau nhap lai) : ";
	} while (so <= 0 || so > MAX);
	return so;
}

void NhapMangTuDong()
{
	int i;
	cout << endl << "Nhap kich thuoc cua mang (0 < n <= " << MAX << "), n = ";
	n = DieuKienNhapKichThuoc();
	for (i = 1; i < n; i++)
		a[i] = i;
}

void XuatDaySo()
{
	int i;
	for (i = 0; i < n; i++)
		cout << a[i] << '\t';
}

void HV(int& x, int& y)
{
	int t;
	t = x;
	x = y;
	y = t;
}

void LietKe_HoanVi(int k)
{
	int j;
	if (k == 1)
	{
		cout << "\n";
		for (j = 0; j < n; j++)
			cout << a[j] << '\t';
	}
	else
		for (j = k - 1; j >= 0; j--)
		{
			HV(a[k - 1], a[j]);
			LietKe_HoanVi(k - 1);
			HV(a[j], a[k - 1]);
		}
}