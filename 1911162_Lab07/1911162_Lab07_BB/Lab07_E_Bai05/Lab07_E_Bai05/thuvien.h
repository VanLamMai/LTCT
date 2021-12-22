#define MAX 100

int KyTuSangSo(char x);
int ChuyenDoi(char a[MAX]);

int KyTuSangSo(char x)
{
	switch (x)
	{
	case '0':
		return 0;
	case '1':
		return 1;
	case '2':
		return 2;
	case '3':
		return 3;
	case '4':
		return 4;
	case '5':
		return 5;
	case '6':
		return 6;
	case '7':
		return 7;
	case '8':
		return 8;
	case '9':
		return 9;
	}
}

int ChuyenDoi(char a[MAX])
{
	int kq, i;
	kq = 0;

	for (i = 0; a[i] != NULL; i++)
	{
		kq = kq * 10 + KyTuSangSo(a[i]);
	}
	return kq;
}