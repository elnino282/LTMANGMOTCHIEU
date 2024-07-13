#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
void DaoNguoc(float[], int);

int main()
{
	float b[500];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);
	DaoNguoc(b, k);
	cout << "\nMang da dao nguoc:";
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

void DaoNguoc(float a[], int n)
{
	int d = 0;
	int c = n - 1;
	while (d < c)
	{
		float tmp = a[d];
		a[d] = a[c];
		a[c] = tmp;
		d++;
		c--;
	}
}