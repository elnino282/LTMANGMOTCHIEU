#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int ktCon(int[], int, int[], int);

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

	if (ktCon(b, k,a,h) == 1)
		cout << "\nMang a la mang con mang b";
	else 
		cout << "\nMang a khong la mang con mang b";
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

int ktCon(int a[], int n, int b[], int m)
{
	if(n > m)
		return 0;
	int flag = 0;
	for (int vt = 0; vt <= m - n; vt++)
	{
		int co = 1;
		for (int i = 0; i < n; i++)
			if (a[i] != b[vt + i])
				co = 0;
		if (co == 1)
			flag = 1;
	}
	return flag;
}