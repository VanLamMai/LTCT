#define SIZE 10
#define TAB '\t'

typedef int MaTranVuong[SIZE][SIZE];

int DieuKienNhap_KichThuoc();
int DieuKienNhap_CotHang();
void NhapTuDong(MaTranVuong a, int n);
void XuatMaTran(MaTranVuong a, int n);

int DieuKienNhap_KichThuoc()
{
	int n;
	do
	{
		cin >> n;
		if (n <= 0 || n > SIZE)
			cout << "Khong hop le (Yeu cau nhap lai) : ";
	} while (n <= 0 || n > SIZE);
	return n;
}

int DieuKienNhap_CotHang(int n)
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

void NhapTuDong(MaTranVuong a, int n)
{
	srand((unsigned)time(NULL));
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			a[i][j] = 0 + rand() % 21;
		}
	}
}

void XuatMaTran(MaTranVuong a, int n)
{
	cout << endl << "Cac phan tu cua ma tran : " << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << a[i][j] << TAB;
		}
		cout << endl;
	}
	cout << endl;
}

void HoanVi(int& x, int& y)
{
	int tam;
	tam = x;
	x = y;
	y = tam;
}

void HoanVi_Cot_j_Cot_h(MaTranVuong a, int n, int j, int h)
{
	int i;
	for (i = 0; i < n; i++)
	{
		HoanVi(a[i][j], a[i][h]);
	}
	cout << endl << "Ma tran sau khi da hoan vi cot " << j << " cho cot " << h << " la:\n";
	XuatMaTran(a, n);
}

void HoanVi_Hang_i_Hang_k(MaTranVuong a, int n, int i, int k)
{
	int j;
	for (j = 0; j < n; j++)
	{
		HoanVi(a[i][j], a[k][j]);
	}
	cout << endl << "Ma tran sau khi da hoan vi hang " << i << " cho hang " << k << " la:\n";
	XuatMaTran(a, n);
}