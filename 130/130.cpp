#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int TanSuat(int[], int, int);
int ktThuoc(int[], int, int[], int);

int main()
{
	int b[500];
	int k;
	Nhap(b, k);
	cout << "Mang 1: ";
	Xuat(b, k);

	int a[500];
	int h;
	cout << endl;
	Nhap(a, h);
	cout << "Mang 2: ";
	Xuat(a, h);

	if (ktThuoc(b, k, a, h) == 1)
		cout << "\nMang A nam trong mang B";
	else
		cout << "\nMang A khong nam trong mang B";
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = rand() % (200 + 1) - 100;
}

void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(10) << a[i];
}

int TanSuat(int a[], int n, int x)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (a[i] == x)
			dem++;
	return dem;
}

int ktThuoc(int a[], int n, int b[], int m)
{
	int flag = 1;
	for (int i = 0; i < n; i++)
		if (TanSuat(b, m, a[i]) == 0)
			flag = 0;
	return flag;
}