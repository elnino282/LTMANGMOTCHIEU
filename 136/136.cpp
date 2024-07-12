#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
void XayDung(int[], int, int[], int&);

int main()
{
	int b[500];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);
	
	int a[500];
	int h;
	cout << "\nMang tao tu mang ban dau co tinh chan le: ";
	XayDung(b, k, a, h);
	Xuat(a, h);
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = rand() % (100);
}

void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(10) << a[i];
}

void XayDung(int a[], int n, int b[], int &k)
{
	k = 0;
	b[k++] = a[0];
	for (int i = 1; i <= n - 1; i++)
	{
		if (a[i] % 2 == 0 && b[k - 1] % 2 == 0)
			b[k++] = 1;
		else
			if (a[i] % 2 != 0 && b[k - 1] % 2 != 0)
				b[k++] = 0;
		b[k++] = a[i];
	}
}