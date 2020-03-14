#include <iostream>
using namespace std;

struct PhanSo
{
	int iTuSo;
	int iMauSo;
};
void Nhap(PhanSo& x);
int UCLN(int a, int b);
PhanSo RutGon(PhanSo a);
PhanSo Tong(PhanSo a, PhanSo b);
PhanSo Hieu(PhanSo a, PhanSo b);
PhanSo Tich(PhanSo a, PhanSo b);
PhanSo Thuong(PhanSo a, PhanSo b);

int main()
{
	PhanSo x, y;
	Nhap(x);
	Nhap(y);
	PhanSo z = Tong(x, y);
	cout << z.iTuSo << "/" << z.iMauSo << endl;
	z = Hieu(x, y);
	cout << z.iTuSo << "/" << z.iMauSo << endl;
	z = Tich(x, y);
	cout << z.iTuSo << "/" << z.iMauSo << endl;
	z = Thuong(x, y);
	cout << z.iTuSo << "/" << z.iMauSo << endl;
	return 0;
}

void Nhap(PhanSo& x)
{
	cin >> x.iTuSo;
	cin >> x.iMauSo;
}
int UCLN(int a, int b)
{
	if (b == 0) return a;
	else return UCLN(b, a % b);
}
PhanSo RutGon(PhanSo a)
{
	PhanSo c;
	c.iTuSo = a.iTuSo / UCLN(a.iTuSo, a.iMauSo);
	c.iMauSo = a.iMauSo / UCLN(a.iTuSo, a.iMauSo);
	return c;
}
PhanSo Tong(PhanSo a, PhanSo b)
{
	PhanSo c;
	c.iTuSo = a.iTuSo * b.iMauSo + a.iMauSo * b.iTuSo;
	c.iMauSo = a.iMauSo * b.iMauSo; 
	c = RutGon(c);
	return c;
}
PhanSo Hieu(PhanSo a, PhanSo b)
{
	PhanSo c;
	c.iTuSo = a.iTuSo * b.iMauSo - a.iMauSo * b.iTuSo;
	c.iMauSo = a.iMauSo * b.iMauSo;
	c = RutGon(c);
	return c;
}
PhanSo Tich(PhanSo a, PhanSo b)
{
	PhanSo c;
	c.iTuSo = a.iTuSo * b.iTuSo;
	c.iMauSo = a.iMauSo * b.iMauSo;
	c = RutGon(c);
	return c;
}
PhanSo Thuong(PhanSo a, PhanSo b)
{
	PhanSo c;
	c.iTuSo = a.iTuSo * b.iMauSo;
	c.iMauSo = a.iMauSo * b.iTuSo;
	c = RutGon(c);
	return c;
}
