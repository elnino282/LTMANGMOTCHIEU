#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
float TongCucDai(float[], int);

int main()
{
	float b[500];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);
	cout << endl;
	cout << "Tong gia tri cuc dai: " << TongCucDai(b, k);
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

float TongCucDai(float a[], int n)
{
	if (n <= 1)
		return 0;
	float s = 0;
	if (a[1] < a[0])
		s += a[0];
	for (int i = 1; i < n - 1;i++)
		if (a[i] > a[i - 1] && a[i] > a[i + 1])
			s += a[i];
	if (a[n - 1] > a[n - 2])
		s += a[n - 1];
	return s;
}