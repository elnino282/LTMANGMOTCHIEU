#include<iostream>
#include<iomanip>

using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
void LietKe(int[], int, int, int);

int main()
{
    int b[500];
    int k;
    Nhap(b, k);
    cout << "Mang ban dau: ";
    Xuat(b, k);
    cout << endl;
    int x, y;
    cout << "Nhap khoang: ";
    cin >> x >> y;
    cout << "Mang trong khoang [" << x << ", " << y << "]: ";
    LietKe(b, k, x, y);
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

void LietKe(int a[], int n, int x, int y)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= x && a[i] <= y)
            cout << setw(10) << a[i];
    }
}
