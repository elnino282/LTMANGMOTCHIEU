#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int TanSuat(int[], int, int);
void LietKe(int[], int, int[], int);

int main()
{
	int b[500];
	int k;
	Nhap(b, k);
	cout << "Mang 1: ";
	Xuat(b, k);
	cout << endl;

	int a[500];
	int n;
	Nhap(a, n);
	cout << "Mang 2: ";
	Xuat(a, n);

	cout << "\nCac gia tri xuat hien qua mot lan trong mang: ";
	LietKe(b, k, a, n);
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

int TanSuat(int a[], int n, int x)
{
	int dem = 0;
	for (int i = 0; i <= n - 1; i++)
	{
		if (a[i] == x)
			dem++;
	}
	return dem;
}
void LietKe(int a[], int n, int b[], int m)
{
	for (int i = 0; i < n; i++)
	{
		int flag = 1;
		for (int j = 0; j <= i - 1; j++)
			if (a[j] == a[i])
				flag = 0;
		if (TanSuat(b, m, a[i]) == 0 && flag)
			cout << setw(8) << a[i];
	}
	for (int i = 0; i < m; i++)
	{
		int flag = 1;
		for (int j = 0; j <= i - 1; j++)
			if (b[j] == b[i])
				flag = 0;
		if (TanSuat(a, n, b[i]) == 0 && flag)
			cout << setw(8) << b[i];
	}
}