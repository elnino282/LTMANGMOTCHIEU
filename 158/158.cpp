#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
void DichTrai(float[], int);

int main()
{
	float b[500];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);
	DichTrai(b, k);
	cout << "\nDich trai xoay vong cac phan tu trong mang: ";
	Xuat(b, k);
	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = -100.0 + (rand() / (RAND_MAX / (100.0 - (-100.0))));
}

void Xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(10) << setprecision(3) << a[i];
}

void DichTrai(float a[], int n)
{
	float tmp = a[0];
	for (int i = 0; i <= n - 2; i++)
		a[i] = a[i + 1];
	a[n - 1] = tmp;
}