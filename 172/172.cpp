#include<iostream>
#include<iomanip>
using namespace std;

void NhapTang(float[], int&);
void Xuat(float[], int);

int main()
{
	float b[500];
	int k;
	NhapTang(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);
	return 0;
}

void NhapTang(float a[], int& n)
{
	cout << "Nhap n:";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		float x;
		cout << "Nhap a[" << i << "]: ";
		cin >> x;
		int j = i - 1;
		while (j >= 0 && a[j] < x)
		{
			a[j + 1] = a[j];
			--j;
		}
		a[j + 1] = x;
	}
}

void Xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(10) << setprecision(3) << a[i];
}