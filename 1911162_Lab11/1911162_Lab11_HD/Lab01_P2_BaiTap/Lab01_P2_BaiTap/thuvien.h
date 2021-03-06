#define MAX 100

struct Date
{
	int ngay;
	int thang;
	int nam;
};

struct NhanVien
{
	char maNV[7];
	char ho[10];
	char tenLot[10];
	char ten[10];
	Date ntn;
	char diaChi[20];
	double luong;
};

void File_Array(char* filename, int arr[MAX], int& n);
void Display_Array(int arr[MAX], int n);
void File_NhanVien(char* filename, NhanVien ds[MAX], int& n);
void Display_NhanVien(NhanVien ds[MAX], int n);

void File_Array(char* filename, int arr[MAX], int& n)
{
	ifstream in(filename);
	if (!in)
	{
		cout << "\nLoi mo tep";
		exit(-1);
	}
	in >> n;
	for (int i = 0; i < n; i++)
		in >> arr[i];
	in.close();
}

void Display_Array(int arr[MAX], int n)
{
	for (int i = 0; i < n; i++)
		cout << arr[i] << '\t';
}

void File_NhanVien(char* filename, NhanVien ds[MAX], int& n)
{
	ifstream in(filename);
	if (!in)
	{
		cout << "\nLoi mo file.";
		exit(-1);
	}
	char maNV[7];
	char ho[10];
	char tenLot[10];
	char ten[10];
	Date ntn;
	char diaChi[20];
	double luong;

	n = 0;

	in >> maNV; strcpy_s(ds[n].maNV, maNV);
	in >> ho; strcpy_s(ds[n].ho, ho);
	in >> tenLot; strcpy_s(ds[n].tenLot, tenLot);
	in >> ten; strcpy_s(ds[n].ten, ten);
	in >> ntn.ngay; ds[n].ntn.ngay = ntn.ngay;
	in >> ntn.thang; ds[n].ntn.thang = ntn.thang;
	in >> ntn.nam; ds[n].ntn.nam = ntn.nam;
	in >> diaChi; strcpy_s(ds[n].diaChi, diaChi);
	in >> luong; ds[n].luong = luong;

	while (!in.eof())
	{
		n++;
		in >> maNV; strcpy_s(ds[n].maNV, maNV);
		in >> ho; strcpy_s(ds[n].ho, ho);
		in >> tenLot; strcpy_s(ds[n].tenLot, tenLot);
		in >> ten; strcpy_s(ds[n].ten, ten);
		in >> ntn.ngay; ds[n].ntn.ngay = ntn.ngay;
		in >> ntn.thang; ds[n].ntn.thang = ntn.thang;
		in >> ntn.nam; ds[n].ntn.nam = ntn.nam;
		in >> diaChi; strcpy_s(ds[n].diaChi, diaChi);
		in >> luong; ds[n].luong = luong;
	}
	in.close();
}

void Display_NhanVien(NhanVien ds[MAX], int n)
{
	cout << setiosflags(ios::left);
	cout << setw(10) << "Ma NV"
		<< setw(10) << "Ho"
		<< setw(10) << "Ten Lot"
		<< setw(10) << "Ten"
		<< setw(17) << "NTN Sinh"
		<< setw(15) << "Dia Chi"
		<< setw(15) << "Luong";
	cout << endl;

	for (int i = 0; i < n; i++)
	{
		cout << setw(10) << ds[i].maNV
			<< setw(10) << ds[i].ho
			<< setw(10) << ds[i].tenLot
			<< setw(10) << ds[i].ten
			<< setw(4) << ds[i].ntn.ngay
			<< setw(4) << ds[i].ntn.thang
			<< setw(9) << ds[i].ntn.nam
			<< setw(15) << ds[i].diaChi
			<< setiosflags(ios::fixed) << setprecision(2) << setw(15) << ds[i].luong;
		cout << endl;
	}

}