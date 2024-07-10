#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
float DauTien(float[], int);

int main()
{
	float b[500];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);

	float x = DauTien(b, k);
	if (x == 0)
		cout << "\nKhong co gia tri lon hon 2023";
	else
		cout << "\nGia tri lon hon 2023 la: " << x;
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

float DauTien(float a[], int n)
{
	for (int i = 0; i < n; i++)
		if (a[i] > 2023)
		{	
			float lc = a[i];
			return lc;
		}
	return 0;
}