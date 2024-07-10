#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
float XaNhat(float[], int, float);

int main()
{
	float b[500];
	int k;
	Nhap(b, k);
	int x;
	cout << "Nhap x: ";
	cin >> x;
	cout << "Mang ban dau: ";
	Xuat(b, k);
	cout << "\nVi tri gan " << x << ": " << XaNhat(b, k, x);
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

float XaNhat(float a[], int n, float x)
{
	float lc = 0;
	for (int i = 0; i < n; i++)
		if (abs(a[i] - x) < abs(lc - x))
			lc = i;
	return lc;
}