#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
void LietKe(int[], int);

int main()
{
	int b[500];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);
	cout << endl;
	LietKe(b, k);
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
	for (int i = 0; i < n;i++)
		cout << setw(10) << a[i];
}

void LietKe(int a[], int n)
{
	cout << "Phan tu chan: ";
	for (int i = 0;i < n;i++)
	{
		if (a[i] % 2 == 0)
			cout << setw(6) << a[i];
	}
	cout << endl;
	cout << "Phan tu le: ";
	for (int i = 0;i < n;i++)
	{
		if (a[i] % 2 != 0)
			cout << setw(6) << a[i];
	}
}