#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
bool ktDang3m(int);
void LietKe(int[], int);

int main()
{
	int b[500];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);
	cout << endl;
	cout << "Day so 3^m la: ";
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

bool ktDang3m(int n)
{
	if (n < 1)
		return false;
	bool flag = true;
	int t = n;
	while (t > 1)
	{
		int du = t % 3;
		if (du != 0)
			flag = false;
		t /= 3;
	}
	return flag;
}

void LietKe(int a[], int n)
{
	for (int i = 0; i < n;i++)
	{
		if (ktDang3m(a[i]))
			cout << setw(10) << a[i];
	}
}