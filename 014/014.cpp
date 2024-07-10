#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
bool ktChinhPhuong(int);
void LietKe(int[], int);

int main()
{
	int b[500];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);
	cout << endl;
	cout << "Vi tri tai do la so chinh phuong: ";
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

bool ktChinhPhuong(int k)
{
	int i = 0;
	while ((i * i) <= k)
	{
		if (i * i == k)
			return true;
		i++;
	}
	return false;
}

void LietKe(int a[], int n)
{
	for (int i = 0; i < n;i++)
	{
		if (ktChinhPhuong(a[i]))
			cout << setw(8) << i;
	}
}