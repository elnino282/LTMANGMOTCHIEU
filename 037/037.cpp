#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
bool ktDoiXung(int);
int TongDoiXung(int[], int);

int main()
{
	int b[500];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);
	cout << endl;
	cout << "Tong gia tri doi xung: " << TongDoiXung(b, k);
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

bool ktDoiXung(int n)
{
	int t = abs(n);
	int dn = 0;
	while (t != 0)
	{
		dn = dn * 10 + t % 10;
		t /= 10;
	}
	if (dn == abs(n))
		return true;
	return false;
}

int TongDoiXung(int a[], int n)
{
	int s = 0;
	for (int i = 0; i < n;i++)
		if (ktDoiXung(a[i]))
			s += a[i];
	return s;
}