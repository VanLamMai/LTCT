#define MAX 100
#define TAB '\t'

typedef int DaySo[MAX];

void NhapMangTuDong(DaySo a, int& n);
void XuatMang(DaySo a, int n);
int DieuKienNhap_ViTri(int n);
void Chen_x_Vao_vt(DaySo a, int& n, int x, int vt);
int TimMax(DaySo a, int n);
int TimViTri_Max_DauTien(DaySo a, int n);
int KiemTraSo_NT(unsigned int n);
int KiemTraSo_Duong(int n);
int KiemTra_NT_TrongMang(DaySo a, int n);
int TimViTri_NT_TrongMang(DaySo a, int n);
int KiemTra_y_TrongMang(DaySo a, int n, int y);
void ThongBao_y_TrongMang(DaySo a, int n, int y);
int Tim_Min(DaySo a, int n);
void Thay_x_Cho_min(DaySo a, int n, int x);

void NhapMangTuDong(DaySo a, int& n)
{
	int i;
	do
	{
		cout << "\nNhap vao kich thuoc cua mang";
		cin >> n;
	} while (n <= 0);
	srand((unsigned)time(NULL));
	for (i = 0; i < n; i++)
		a[i] = -5 + rand() % 26;
}

void XuatMang(DaySo a, int n)
{
	int i;
	for (i = 0; i < n; i++)
		cout << a[i] << TAB;
}

int DieuKienNhap_ViTri(int n)
{
	int so;
	do
	{
		cin >> so;
		if (so < 0 || so > n - 1)
			cout << "Khong hop le (Yeu cau nhap lai) : ";
	} while (so < 0 || so > n - 1);
	return so;
}

void Chen_x_Vao_vt(DaySo a, int& n, int x, int vt)
{
	int i;
	for (i = n; i >= vt; i--)
		a[i + 1] = a[i];
	a[vt] = x;
	n++;
}

int TimMax(DaySo a, int n)
{
	int i,
		max = a[0];
	for (i = 1; i <= n; i++)
	{
		if (a[i] > max)
			max = a[i];
	}
	return max;
}

int TimViTri_Max_DauTien(DaySo a, int n)
{
	int i,
		max = 0;
	max = TimMax(a, n);
	for (i = 0; i <= n; i++)
	{
		if (max == a[i])
			return i;
	}
}

int KiemTraSo_NT(unsigned int n)
{
	int kq = 1, //Gia su n la so nguyen to
		dem = 0;
	if (n < 2)
		kq = 0; //n khong la so nguyen to
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			dem++;
		}
	}
	if (dem == 0)
		kq = 1; //la nguyen to
	else
		kq = 0; //khong la nguyen to
	return kq;
}

int KiemTraSo_Duong(int n)
{
	int kq = 1; //Gia su n la so duong
	if (n > 0)
		kq = 1;
	else
		kq = 0; //n la so am
	return kq;
}

int KiemTra_NT_TrongMang(DaySo a, int n)
{
	int i;
	for (i = 0; i <= n; i++)
	{
		if (KiemTraSo_NT(a[i]) == 1 && KiemTraSo_Duong(a[i]) == 1)
		{
			return a[i];
			break;
		}
	}
	return a[0];
}

int TimViTri_NT_TrongMang(DaySo a, int n)
{
	int i,
		nt = 0;
	nt = KiemTra_NT_TrongMang(a, n);
	for (i = 0; i < n; i++)
	{
		if (a[i] == nt)
		{
			return i;
		}
	}
}

int KiemTra_y_TrongMang(DaySo a, int n, int y)
{
	int i,
		kt = 1; //Gia su y co trong mang
	for (i = 0; i <= n; i++)
	{
		if (a[i] == y)
		{
			kt = 1;
			break;
		}
		else
			kt = 0;
	}
	return kt;
}

void ThongBao_y_TrongMang(DaySo a, int n, int y)
{
	if (KiemTra_y_TrongMang(a, n, y) == 1)
		cout << y << "\nCo trong mang";
	else
		cout << y << "\nKhong co trong mang";
}

int Tim_Min(DaySo a, int n)
{
	int i,
		min = a[0];
	for (i = 1; i <= n; i++)
	{
		if (a[i] < min)
			min = a[i];
	}
	return min;
}

void Thay_x_Cho_min(DaySo a, int n, int x)
{
	int i, min;
	min = Tim_Min(a, n);
	for (i = 0; i <= n; i++)
	{
		if (a[i] == min)
			a[i] = x;
	}
}