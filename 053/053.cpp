#include <iostream>
using namespace std;

void Nhap(float[], int&, float&);
void Xuat(float[], int);
int TanSuat(float[], int, float);

int main()
{
	float a[100];
	int n;
	float x;

	Nhap(a, n, x);
	cout << "Mang ban dau: ";
	Xuat(a, n);

	cout << "\nSo lan xuat hien cua phan tu " << x << " la: " << TanSuat(a, n, x);
	return 0;
}

void Nhap(float a[], int& n, float& x)
{
	cout << "Nhap n: ";
	cin >> n;
	cout << "Nhap x: ";
	cin >> x;
	for (int i = 0; i < n; ++i)
		a[i] = -100.0 + (rand() / (RAND_MAX / (100.0 - (-100.0))));
}

void Xuat(float a[], int n)
{
	for (int i = 0; i < n; ++i)
		cout << a[i] << " ";
}

int TanSuat(float a[], int n, float x)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (a[i] == x)
			dem++;
	return dem;
}