void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, MaTranVuong a, int& n);

void XuatMenu()
{
	
	cout << "\n==================== CHON CHUC NANG =====================\n";
	cout << "\n0. Thoat chuong trinh";
	cout << "\n1. Nhap tu dong ma tran a.";
	cout << "\n2. Xem du lieu ma tran.";
	cout << "\n3. Hoan vi hai cot j va h cua ma tran.";
	cout << "\n4. Hoan vi hai hang i va k cua ma tran.";
	cout << "\n5. Tim ma tran hoan vi.";
	cout << "\n======================================================\n";
}

int ChonMenu(int soMenu)
{
	int stt;
	for (;;)
	{
		system("cls");
		XuatMenu();
		cout << "\nNhap mot so trong khoang [0,...," << soMenu << "] de chon chuc nang, stt = ";
		cin >> stt;
		if (0 <= stt && stt <= soMenu)
			break;
	}
	return stt;
}

void XuLyMenu(int menu, MaTranVuong a, int& n)
{
	int j, h,
		i, k;
	switch (menu)
	{
	case 0:
		system("cls");
		cout << "\n0. Thoat chuong trinh";
		break;
	case 1:
		system("cls");
		cout << "\n1. Nhap tu dong ma tran a.";
		cout << "\nNhap cap cua ma tran (0 < n <= " << SIZE << ") : n = ";
		n = DieuKienNhap_KichThuoc();
		NhapTuDong(a, n);
		system("cls");
		cout << "\nMa tran hien hanh:\n";
		XuatMaTran(a, n);
		break;
	case 2:
		system("cls");
		cout << "\n2. Xem du lieu ma tran.";
		cout << endl << "\nMa tran hien hanh:\n";
		XuatMaTran(a, n);
		break;
	case 3:
		system("cls");
		cout << "\n3. Hoan vi hai cot j va h cua ma tran.";
		cout << "\nNhap cot muon hoan vi (0 <= j <= " << n - 1 << "): j = ";
		j = DieuKienNhap_CotHang(n);
		cout << "\nNhap cot muon hoan vi (0 <= h <= " << n - 1 << "): h = ";
		h = DieuKienNhap_CotHang(n);
		system("cls");
		cout << "\nMa tran hien hanh:\n";
		XuatMaTran(a, n);
		HoanVi_Cot_j_Cot_h(a, n, j, h);
		break;
	case 4:
		system("cls");
		cout << "\n4. Hoan vi hai hang i va k cua ma tran.";
		cout << "\nNhap hang muon hoan vi (0 <= i <= " << n - 1 << "): i = ";
		i = DieuKienNhap_CotHang(n);
		cout << "\nNhap hang muon hoan vi (0 <= k <= " << n - 1 << "): k = ";
		k = DieuKienNhap_CotHang(n);
		system("cls");
		cout << "\nMa tran hien hanh:\n";
		XuatMaTran(a, n);
		HoanVi_Hang_i_Hang_k(a, n, i, k);
		break;
	case 5:
		system("cls");
		cout << "\n5. Tim ma tran hoan vi.";
		break;
	}
	_getch();
}