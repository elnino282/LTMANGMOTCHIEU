#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
void HoanVi(int&, int&);
void ViTriLeTang(int[], int);

int main()
{
	int b[500];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);
	cout << "\nVi tri le trong mang cac so nguyen tang dan cac gia tri khac giu nguyen gia tri va vi tri: ";
	ViTriLeTang(b, k);
	Xuat(b, k);
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

void ViTriLeTang(int a[], int n)
{
	for (int i = 0; i <= n - 2; i++)
		for (int j = i + 1; j <= n - 1; j++)
			if (i % 2 != 0 && j % 2 != 0 && a[i] > a[j])
				HoanVi(a[i], a[j]);
}