#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
void MotVeDau(float[], int);

int main()
{
	float b[500];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);
	MotVeDau(b, k);
	cout << "\nMang luc sau: ";
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

void MotVeDau(float a[], int n)
{
	int vt = 0;
	for(int i=0; i<n; i++)
		if (a[i] == 1)
		{
			float tmp = a[i];
			a[i] = a[vt];
			a[vt] = tmp;
			vt++;
		}
}