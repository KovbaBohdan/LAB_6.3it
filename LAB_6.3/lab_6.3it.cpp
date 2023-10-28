#include<iostream>
#include<iomanip>
#include <time.h>

using namespace std;

template <typename Type> 
Type Sum(Type* a, Type size)
{
	int S = 0;
	for (int i = 0; i < size; i++)
		if (a[i] % 2 != 0)
			S += a[i];
	return S;
}
void Create(int* a, const int size, const int Low, const int High)
{
	for (int i = 0; i < size; i++)
		a[i] = Low + rand() % (High - Low + 1);
}
void Print(int* a, const int size)
{
	for (int i = 0; i < size; i++)
		cout << setw(4) << a[i];
	cout << endl;
}

int main()
{
	srand((unsigned)time(NULL));
	int n;
	cout << "n = "; cin >> n;
	int* p = new int[n];
	int Low = 1;
	int High = 20;
	Create(p, n, Low, High);
	cout << "a[n] =";
	Print(p, n);
	cout << "Sum = " << Sum(p, n) << endl;
	return 0;
}
