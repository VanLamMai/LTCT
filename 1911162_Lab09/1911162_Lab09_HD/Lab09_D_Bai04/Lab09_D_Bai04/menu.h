void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, SinhVien *a, int &n);

void XuatMenu() 
{
	cout << "\n================ HE THONG CHUC NANG =================\n";
	cout << "\n0. Thoat chuong trinh."; 
	cout << "\n1. Tao danh sach sinh vien.";
	cout << "\n2. Xem danh sach sinh vien."; 
	cout << "\n3. Sap danh sach sinh vien giam dan theo diem.";
	cout << "\n4. Xem danh sach sinh vien theo lop.";  
	cout << "\n5. Xuat danh sach sinh vien theo lop va co diem giam dan."; 
	cout << "\n6. Thong ke chat luong sinh vien theo lop.";
	cout << "\n======================================================\n";
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

void XuLyMenu(int menu, SinhVien *a, int &n)
{  
	switch (menu) 
	{ 
	case 0: 
		system("cls");
		cout << "\n0. Thoat chuong trinh";
		break; 
	case 1:  
		system("cls"); 
		cout << "\n1. Tao danh sach nhan vien";   
		TaoDanhSachSinhVien(a, n); 
		system("cls");   
		cout << "\n                DANH SACH SINH VIEN :\n";
		Xuat_DSSV(a, n);  
		cout << "\nSo sinh vien trong danh sach : n = " << n;
		break; 
	case 2:  
		system("cls");  
		cout << "\n2. Xem danh sach nhan vien";   
		cout << "\n                DANH SACH SINH VIEN :\n"; 
		Xuat_DSSV(a, n); 
		cout << "\nSo sinh vien trong danh sach : n = " << n;
		break; 
	case 3: 
		system("cls");  
		cout << "\n3. Sap danh sach sinh vien giam dan theo diem"; 
		cout << "\nDanh sach ban dau :\n"; 
		Xuat_DSSV(a, n); 
		Sap_DSSV_GiamDiem(a, n);
		cout << "\nDanh sach sinh vien giam theo diem :\n"; 
		Xuat_DSSV(a, n);
		break; 
	case 4:
		system("cls");
		cout << "\n4. xem danh sach sinh vien theo lop"; 
		cout << "\nDanh sach ban dau :\n";  
		Xuat_DSSV(a, n);  
		cout << endl << "Nhan phim bat ki de tiep tuc.";
		_getch();
		Xuat_DSSV_Lop(a, n, "CTK39"); 
		cout << endl << "Nhan phim bat ki de tiep tuc.";
		_getch();  
		Xuat_DSSV_Lop(a, n, "CTK38");  
		cout << endl << "Nhan phim bat ki de tiep tuc.";
		_getch();  
		Xuat_DSSV_Lop(a, n, "CTK37"); 
		cout << endl << "Nhan phim bat ki de tiep tuc.";
		_getch();   
		Xuat_DSSV_Lop(a, n, "CTK36");
		cout << endl << "Nhan phim bat ki de tiep tuc.";
		break; 
	case 5: 
		system("cls");
		cout << "\n5. Xuat danh sach sinh vien theo lop va co diem giam dan"; 
		cout << "\nDanh sach ban dau :\n"; 
		Xuat_DSSV(a, n);  
		Xuat_DSSV_Lop_Giam_Diem(a, n, "CTK39");
		cout << endl << "Nhan phim bat ki de tiep tuc.";
		_getch();   
		Xuat_DSSV_Lop_Giam_Diem(a, n, "CTK38"); 
		cout << endl << "Nhan phim bat ki de tiep tuc.";
		_getch();
		Xuat_DSSV_Lop_Giam_Diem(a, n, "CTK37");
		cout << endl << "Nhan phim bat ki de tiep tuc.";
		_getch(); 
		Xuat_DSSV_Lop_Giam_Diem(a, n, "CTK36");
		cout << endl << "Nhan phim bat ki de tiep tuc.";
		break; 
	case 6:   
		system("cls"); 
		cout << "\n6. Thong ke chat luong sinh vien theo lop"; 
		cout << "\nDanh sach ban dau :\n";  
		Xuat_DSSV(a, n); 
		cout << endl << "Nhan phim bat ki de tiep tuc.";
		_getch();  
		system("cls");  
		ThongKe_ChatLuong(a, n, "CTK39");  
		cout << endl << "Nhan phim bat ki de tiep tuc.";
		_getch();  
		system("cls");
		ThongKe_ChatLuong(a, n, "CTK38");  
		cout << endl << "Nhan phim bat ki de tiep tuc.";
		_getch(); 
		system("cls");
		ThongKe_ChatLuong(a, n, "CTK37");    
		cout << endl << "Nhan phim bat ki de tiep tuc.";
		_getch();   
		system("cls");
		ThongKe_ChatLuong(a, n, "CTK36");
		break;
	} 
	_getch();
}