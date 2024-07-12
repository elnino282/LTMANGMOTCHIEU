#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
void Tron(int[], int, int[], int, int[], int&);
int main()
{
	int b[500];
	int k;
	Nhap(b, k);
	cout << "Mang 1: ";
	Xuat(b, k);
	cout << endl;

	int a[500];
	int h;
	Nhap(a, h);
	cout << "Mang 2: ";
	Xuat(b, k);

	int c[500];
	int j;
	Tron(b, k, a, h, c, j);
	cout << "\nMang duoc tron: ";
	Xuat(c, j);
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = rand() % (200 + 1) - 100;
}

void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(10) << a[i];
}

void Tron(int a[], int n, int b[], int m, int c[], int& p)
{
	int i = 0;
	int j = 0;
	p = 0;
	while (!(i >= n && j >= m))
	{
		if ((i < n && j < m && a[i] < b[j]) || (j >= m))
			c[p++] = a[i++];
		else
			c[p++] = b[j++];
	}
}