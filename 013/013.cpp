#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
bool ktNguyenTo(int);
void LietKe(int[], int);

int main()
{
	int b[500];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);
	cout << endl;
	cout << "Vi tri tai do la so nguyen to: ";
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

bool ktNguyenTo(int k)
{
	int dem = 0;
	for (int i = 1; i <= k;i++)
	{
		if (k % i == 0)
			dem++;
	}
	if (dem == 2)
		return true;
	return false;
}

void LietKe(int a[], int n)
{
	for (int i = 0; i < n;i++)
	{
		if (ktNguyenTo(a[i]))
			cout << setw(8) << i;
	}
}