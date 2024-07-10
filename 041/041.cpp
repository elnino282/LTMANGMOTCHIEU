#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
float TongGiaTri(float[], int);

int main()
{
	float b[500];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);
	cout << endl;
	cout << "Tong gia tri lon hon gia tri truoc no: " << TongGiaTri(b, k);
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

float TongGiaTri(float a[], int n)
{
	float s = 0;
	for (int i = 1; i < n; i++)
		if (a[i] > a[i - 1])
			s = s + a[i];
	return s;
}