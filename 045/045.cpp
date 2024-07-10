#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
float TongDuong(float[], int);
int DemDuong(float[], int);
float TrungBinhCong(float[], int);

int main()
{
	float b[500];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);
	cout << endl;
	cout << "Trung binh cong cac so duong: " << TrungBinhCong(b, k);
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
	for (int i = 0; i < n;i++)
		cout << setw(10) << setprecision(3) << a[i];
}

float TongDuong(float a[], int n)
{
	float s = 0;
	for (int i = 0; i < n;i++)
	{
		if (a[i] > 0)
			s += a[i];
	}
	return s;
}

int DemDuong(float a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n;i++)
	{
		if (a[i] > 0)
			dem++;
	}
	return dem;
}

float TrungBinhCong(float a[], int n)
{
	float tu = TongDuong(a, n);
	float mau = DemDuong(a, n);
	if (mau == 0)
		return 0;
	return (tu / mau);
}