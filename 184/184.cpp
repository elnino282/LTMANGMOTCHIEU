#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int DemCon(int a[], int n, int b[], int);

int main()
{
	int b[500];
	int k;
	Nhap(b, k);
	cout << "Mang a: ";
	Xuat(b, k);

	int a[500];
	int h;
	cout << endl;
	Nhap(a, h);
	cout << "Mang b: ";
	Xuat(a, h);

	cout << "\nSo lan xuat hien mang a trong mang b: " << DemCon(b, k, a, h);
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

int DemCon(int a[], int n, int b[], int m)
{
	if (n > m)
		return 0;
	int dem = 0;
	for (int vt = 0; vt <= m - n; vt++)
	{
		int flag = 1;
		for (int i = 0; i < n; i++)
			if (a[i] != b[vt + i])
				flag = 0;
		if (flag == 1)
			dem++;
	}
}
