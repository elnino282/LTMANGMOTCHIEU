#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int ktHoanThien(int);
int ktTinhChat(int[], int);

int main()
{
	int b[500];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);
	int kt = ktTinhChat(b, k);
	if (kt == 1)
		cout << "\nKhong ton tai so hoan thien lon hon 256";
	else if (kt == 0)
		cout << "\nTon tai so hoan thien lon hon 256";
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = rand() % (200+1);
}

void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(10) << a[i];
}

int ktHoanThien(int k)
{
	int s = 0;
	for (int i = 1; i < k; i++)
	{
		if (k % i == 0)
			s += i;
	}
	if (s == k)
		return true;
	return false;
}

int ktTinhChat(int a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (ktHoanThien(a[i]) && a[i] > 256)
			dem++;
	if (dem == 0)
		return 1;
	return 0;
}