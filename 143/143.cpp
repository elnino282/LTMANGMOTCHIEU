#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
void HoanVi(int&, int&);
void SapTang(int[], int);
int ktHoanVi(int[], int, int[], int);

int main()
{
	int a[100];
	int n;

	Nhap(a, n);
	cout << "Mang thu nhat: ";
	Xuat(a, n);

	cout << endl;

	int b[100];
	int m;

	Nhap(b, m);
	cout << "Mang thu hai: ";
	Xuat(b, m);

	if (ktHoanVi(a, n, b, m))
		cout << "\nThoa tinh chat";
	else
		cout << "\nKhong thoa";

	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		cin >> a[i];
}

void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(10) << a[i];
}


void HoanVi(int& a, int& b)
{
	int tmp = a;
	a = b;
	b = tmp;
}


void SapTang(int a[], int n) 
{
	for (int i = 0; i <= n - 2; i++)
		for (int j = i + 1; j <= n - 1; j++)
			if (a[i] > a[j])
				HoanVi(a[i], a[j]);
}

int ktHoanVi(int a[], int n, int b[], int m)
{
	if (m != n)
		return 0;
	SapTang(a, n);
	SapTang(b, m);

	int flag = 1;
	for (int i = 0; i < 0; i++)
		if (a[i] != b[i])
			flag = 0;
	return flag;
}