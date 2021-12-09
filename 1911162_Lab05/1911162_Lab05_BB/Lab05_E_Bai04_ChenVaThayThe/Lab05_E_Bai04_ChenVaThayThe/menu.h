void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, DaySo a, int& n);

void XuatMenu()
{
	cout << "\n============== CHON CHUC NANG ===============\n";
	cout << "\n0. Thoat chuong trinh";
	cout << "\n1. Nhap mang tu dong";
	cout << "\n2. Xuat mang";
	cout << "\n3. Chen phan tu x vao mang a tai vi tri vt cho truoc";
	cout << "\n4. Chen phan tu x vao sau phan tu lon nhat (dau tien tim duoc) trong mang";
	cout << "\n5. Chen phan tu x vao truoc so nguyen to dau tien trong mang";
	cout << "\n6. Chen phan tu x vao sau moi phan tu y cho truoc";
	cout << "\n7. Thay the gia tri nho nhat bang gia tri x cho truoc";
	cout << "\n=============================================\n";
}

int ChonMenu(int soMenu)
{
	int stt;

	do
	{
		system("cls");
		XuatMenu();
		cout << "\nChon chuc nang >> ";
		cin >> stt;
	} while (stt < 0 || stt > soMenu);

	return stt;
}

void XuLyMenu(int menu, DaySo a, int& n)
{
	int x, y, vt, max, min, kt;
	switch (menu)
	{
	case 0:
		cout << "\n0. Thoat chuong trinh";
		break;
	case 1:
		cout << "\n1. Nhap mang tu dong";
		NhapMangTuDong(a, n);
		cout << "\nMang vua nhap:\n";
		XuatMang(a, n);
		break;
	case 2:
		cout << "\n2. Xuat mang\n";
		XuatMang(a, n);
		break;
	case 3:
		cout << "\n3. Chen phan tu x vao mang a tai vi tri vt cho truoc";
		cout << "\nNhap gia tri muon chen: x = ";
		cin >> x;
		cout << "\nNhap vi tri muon chen (0 <= vt <= " << n - 1 << ") : vt = ";
		vt = DieuKienNhap_ViTri(n);

		cout << "\nChen gia tri x = " << x << " vao vi tri vt = " << vt;
		cout << "\nKich thuoc mang truoc khi chen\n";
		XuatMang(a, n);
		Chen_x_Vao_vt(a, n, x, vt);
		cout << "\nKich thuoc mang sau khi chen la\n ";
		XuatMang(a, n);
		break;
	case 4:
		cout << "\n4. Chen phan tu x vao sau phan tu lon nhat (dau tien tim duoc) trong mang";
		cout << "\nNhap gia tri muon chen: x = ";
		cin >> x;
		max = TimMax(a, n);
		vt = TimViTri_Max_DauTien(a, n) + 1;
		cout << "\nChen gia tri x = " << x << " vao vi tri vt = " << vt << " sau gia tri lon nhat la : " << max;
		cout << "\nKich thuoc mang truoc khi chen\n";
		XuatMang(a, n);
		Chen_x_Vao_vt(a, n, x, vt);
		cout << "\nKich thuoc mang sau khi chen\n";
		XuatMang(a, n);
		break;
	case 5:
		cout << "\n5. Chen phan tu x vao so nguyen to dau tien trong mang";
		cout << "\nNhap gia tri muon chen: x = ";
		cin >> x;
		kt = KiemTra_NT_TrongMang(a, n);
		vt = TimViTri_NT_TrongMang(a, n);
		cout << "\nChen gia tri x = " << x << " vao vi tri vt = " << vt << " truoc so " << kt;
		cout << "\nKich thuoc mang truoc khi chen\n";
		XuatMang(a, n);
		Chen_x_Vao_vt(a, n, x, vt);
		cout << "\nKich thuoc mang sau khi chen\n";
		XuatMang(a, n);
		break;
	case 6:
		cout << "\n6. Chen phan tu x vao sau moi phan tu y cho truoc";
		cout << "\nNhap gia tri muon chen: x = ";
		cin >> x;
		cout << "\nNhap gia tri cua phan tu y muon chen " << x  << " vao sau: y = ";
		cin >> y;
		ThongBao_y_TrongMang(a, n, y);
		cout << "\nKich thuoc mang truoc khi chen\n";
		XuatMang(a, n);
		cout << "\nKich thuoc mang sau khi chen\n";
		XuatMang(a, n);
		break;
	case 7:
		cout << "\n7. Thay the gia tri nho nhat bang gia tri x cho truoc";
		cout << "\nNhap gia tri muon thay the: x = ";
		cin >> x;
		min = Tim_Min(a, n);
		cout << "\nMang truoc khi thay the\n";
		XuatMang(a, n);
		Thay_x_Cho_min(a, n, x);
		cout << "\nMang sau khi thay the\n";
		XuatMang(a, n);
		break;
	}
	_getch();
}