#include <iostream>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int DemChan(int[], int);
int DemLe(int[], int);
int TuongQuan(int[], int);


int main()
{
	int a[100];
	int n;

	Nhap(a, n);
	cout << "Mang ban dau: ";
	Xuat(a, n);

	cout << "\nSo luong so nguyen to la: " << TuongQuan(a, n);
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; ++i)
		a[i] = rand() % (200 + 1) - 100;
}

void Xuat(int a[], int n)
{
	for (int i = 0; i < n; ++i)
		cout << a[i] << " ";
}

int DemChan(int a[], int n)  
{
	int dem = 0;
	for (int i = 0; i < n; ++i)
		if (a[i] % 2 == 0)
			dem++;
	return dem;
}

int DemLe(int a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; ++i)
		if (a[i] % 2 != 0)
			dem++;
	return dem;
}

int TuongQuan(int a[], int n)
{
	int chan = DemChan(a, n);
	int le = DemLe(a, n);
	if (chan > le)
		return -1;
	else if (chan == le)
		return 0;
	else if (chan < le)
		return 1;
}