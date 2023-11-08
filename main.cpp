#include <iostream>
#include<conio.h>
#include<math.h>
#include<ctime>

using namespace std;

struct phanso
{
	int tu;
	int mau;
} typedef ps;


void nhapPhanSoThuCong(phanso &ps)
{
        cout << " Nhap vao tu so: ";
        cin >> ps.tu;
        do
	{
	cout << "Nhap vao mau so ";
		cin >> ps.mau;
		if(ps.mau == 0)
			cout << "Mau phai khac khong, Vui long nhap lai";
	}while(ps.mau == 0);
}
void nhapPhanSoTuDong(phanso &ps)
{
	ps.tu = rand();
	ps.mau = rand();
	do
        {
	cout << "Nhap vao mau so ";
		cin >> ps.mau;
		if(ps.mau == 0)
			cout << " Mau phai khac 0, xin nhap lai: ";
	}while(ps.mau == 0);
}
void xuatphanso(phanso ps)
{
	cout << " Phan so: "  <<  ps.tu << "/" << ps.mau << endl;
}
void xuatphansoTuDong(phanso ps)
{
	cout << " Phan so tu dong: "  <<  ps.tu << "/" << ps.mau << endl;
}

/*Tim uoc chung lon nhat cua tu so va mau so
intput :
   + int tu
   + int mau
output :
    + UCLN
*/
int UCLN(int a, int b)
{
	a = abs(a);
	b = abs(b);
	while(a!=b)
	{
		if(a > b)
			a = a - b;
		else
			b = b - a;
	}
	return a;
}
/* Rut gon phan so:
intput:
    tu so
    mau so
output:
    Phan so rut gon
*/
void rutgon(phanso &ps)
{
	int c = UCLN(ps.tu,ps.mau);
	ps.tu=ps.tu/c;
	ps.mau=ps.mau/c;
	cout << ps.tu << "/" << ps.mau << endl;
}

/* Rut gon phan so:
intput:
    tu so
    mau so
output:
    Phan so nghich dao
*/
void NghichDao(phanso &ps)
{
    int t = ps.mau;
    int m = ps.tu;
    cout <<" Phan so nghich dao: " << t <<"/" << m << endl;
}
phanso tongps(phanso a,phanso b)
{
	phanso tong;
	tong.tu = a.tu * b.mau + b.tu * a.mau;
    tong.mau = a.mau * b.mau;
	return tong;
}
phanso hieups(phanso a,phanso b)
{
	phanso hieu;
	hieu.tu = a.tu * b.mau - b.tu * a.mau;
    hieu.mau = a.mau * b.mau;
	return hieu;
}
phanso tichps(phanso a,phanso b)
{
	phanso tich;
	tich.tu = a.tu * b.tu;
    tich.mau = a.mau * b.mau;
	return tich;
}
phanso thuongps(phanso a,phanso b)
{
	phanso thuong;
	thuong.tu = a.tu * b.mau;
    thuong.mau = a.mau * b.tu;
	return thuong;
}
int main()
{
    phanso x, y, z, k;
    int a[100];
    int n = 0;

    cout <<"   ==== Cau 01 va Cau 02 ===   " << endl;
	nhapPhanSoThuCong(x);
	nhapPhanSoThuCong(y);
	nhapPhanSoTuDong(z);
	nhapPhanSoTuDong(k);
	cout << endl;


    cout <<"   ==== Cau 03: Xuat phan so ===   " << endl;
    cout <<" Phan so dau tien: ";
    xuatphanso(x);
    cout <<" Phan so thu hai: ";
    xuatphanso(y);
    xuatphansoTuDong(z);
    xuatphansoTuDong(k);
    cout << endl;



    cout <<"   ==== Cau 04: Rut gon phan so ===   " << endl;
    cout <<" Phan so dau tien: "; rutgon(x);
    cout <<" Phan so thu hai: "; rutgon(y);
    //cout <<" Phan so tu dong: "; rutgon(z);
    cout << endl;


    cout <<"   ==== Cau 05: Nghich dao phan so ===   " << endl;
    NghichDao(x);
    NghichDao(y);
    //NghichDao(z);
    cout << endl;

    cout <<"   ==== Cau 06: Tong hai phan so phan so ===   " << endl;
    phanso tong = tongps(x,y);
    cout <<"Tong = "; rutgon(tong);
    cout << endl;


    cout <<"   ==== Cau 07: Hieu hai phan so phan so ===   " << endl;
    phanso hieu = hieups(x,y);
    cout <<"Hieu = "; rutgon(hieu);
    cout << endl;


    cout <<"   ==== Cau 08: Tich hai phan so phan so ===   " << endl;
    phanso tich = tichps(x,y);
    cout <<"Tich = "; rutgon(tich);
    cout << endl;

    cout <<"   ==== Cau 09: Thuong hai phan so phan so ===   " << endl;
    phanso thuong = thuongps(x,y);
    cout <<"Thuong = "; rutgon(thuong);
    cout << endl;

    return 0;
}
