#define MAX 100
#define TAB '\t'

typedef int DaySo[MAX];

void NhapMangTuDong(DaySo a, int& n);
void XuatMang(DaySo a, int n);
void HoanVi(int& a, int& b);
void SoDuongTangDan(DaySo a, int n);
void So0CuoiMang(DaySo a, int n);
void So0_AmGiam_DuongTang(DaySo a, int n);
void SoLeDau_Tang_ChanCuoi_Giam(DaySo a, int n);
int KiemTraSo_NT(unsigned int n);
void SoNTDau_Tang_ConLai_CuoiGiam(DaySo a, int n);

void NhapMangTuDong(DaySo a, int& n)
{
	do
	{
		cout << "\nNhap vao kich thuoc cua mang ";
		cin >> n;
	} while (n <= 0);

	srand((unsigned)time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = (MAX / 2 - rand() % MAX) / 6;
}

void XuatMang(DaySo a, int n)
{
	int i;
	for (i = 0; i < n; i++)
		cout << a[i] << TAB;
}

void HoanVi(int& a, int& b)
{
	int tam;
	tam = a;
	a = b;
	b = tam;
}

void SoDuongTangDan(DaySo a, int n)
{
	int i, j;
	for (i = 0; i < n - 1; i++)
	{
		if (a[i] >= 0)
		{
			for (j = i + 1; j < n; j++)
			{
				if (a[i] > a[j] && a[j] >= 0)
					HoanVi(a[i], a[j]);
			}
		}
	}
}

void So0CuoiMang(DaySo a, int n)
{
	int i, j, mc;
	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			mc = (a[i] < 0 && a[j] < 0 && a[i] > a[j]) ||
				(a[i] > 0 && a[j] < 0) ||
				(a[i] == 0 && a[j] != 0) ||
				((a[i] > 0 && a[j] > 0 && a[i] > a[j]));
			if (mc)
				HoanVi(a[i], a[j]);
		}
	}
}

void So0_AmGiam_DuongTang(DaySo a, int n)
{
	int i, j, mc;
	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			mc = (a[i] < 0 && a[j] < 0 && a[i] < a[j]) ||
				(a[i] > 0 && a[j] < 0) ||
				((a[i] > 0 && a[j] > 0 && a[i] > a[j])) ||
				(a[i] != 0 && a[j] == 0);
			if (mc)
				HoanVi(a[i], a[j]);
		}
	}
}

void SoLeDau_Tang_ChanCuoi_Giam(DaySo a, int n)
{
	int i, j, mc;
	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			mc = (a[i] % 2 == 0 && a[j] % 2 != 0) ||
				(a[i] % 2 == 0 && a[i] < a[j]) ||
				(a[j] % 2 != 0 && a[i] > a[j]);
			if (mc)
				HoanVi(a[i], a[j]);
		}
	}
}

int KiemTraSo_NT(unsigned int n)
{
	int kq = 1, //gia su la so nguyen to
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

void SoNTDau_Tang_ConLai_CuoiGiam(DaySo a, int n)
{
	int i, j, mc;
	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			mc = (KiemTraSo_NT(a[i]) < KiemTraSo_NT(a[j])) ||
				(KiemTraSo_NT(a[i]) == 1 && KiemTraSo_NT(a[j]) == 1 && a[i] > a[j]) ||
				(KiemTraSo_NT(a[i]) == 0 && KiemTraSo_NT(a[j]) == 0 && a[i] < a[j]);
			if (mc)
				HoanVi(a[i], a[j]);
		}
	}
}