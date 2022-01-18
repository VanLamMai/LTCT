void XuatMenu()
{
	cout << "\n============ HE THONG CHUC NANG ================\n";
	cout << "\n0. Thoat chuong trinh";
	cout << "\n1. Tim so Fibonacci thu n";
	cout << "\n2. Xuat k fibonacci dau tien (dem tu 0) : ";
	cout << "\n3. Tinh to hop chap k trong n : ";
	cout << "\n4. Tim gia tri Min, Max trong doan a[l..r] cua mang a[l..n].";
}

int ChonMenu(int soMenu)
{
	int stt;

	for (;;)
	{
		system("cls");
		XuatMenu();
		cout << "\nChon chuc nang: ";
		cin >> stt;
		if (0 <= stt && stt <= soMenu)
			break;
	}

	return stt;
}

void XuLyMenu(int menu, Mang a, int &n)
{
	int kq, k, l, r;
	int Min = 0, Max = 0;
	switch (menu)
	{
	case 0:
		cout << "\n0. Thoat chuong trinh";
		break;
	case 1:
		cout << "\n1. Tim so Fibonacci thu n";
		cout << "\nNhap vao 1 so : ";
		cin >> n;
		kq = Fib(n);
		cout << "\nSo Fib thu " << n << "la : " << kq;
		break;
	case 2:
		cout << "\n2. Xuat k so fibonacci dau tien (dem tu 0) : ";
		cout << "\nNhap vao 1 so : ";
		cin >> n;
		cout << n << " So fibonacci dau tien la :\n";
		Xuat_K_Fib(n);
		break;
	case 3:
		cout << "\n3. Tinh to hop chap k trong n";
		cout << "\nNhap n : ";
		cin >> n;
		cout << "\nNhap k : ";
		cin >> k;
		kq = Tinh_Cnk(n, k);
		cout << "\nTo hop chap k trong n la : " << kq;
		break;
	case 4:
		cout << "\n4. Tim gia tri Min, Max trong doan a[l..r] cua mang a[l..n].";
		cout << "\nNhap doan muon tim gia tri Min, Max.";
		cout << "\nNhap Min = ";
		cin >> l;
		cout << "\nNhap Max = ";
		cin >> r;
		MinMax(a, l, r, Min, Max);
		cout << Min;
		cout << Max;
		break;
	}
	_getch();
}