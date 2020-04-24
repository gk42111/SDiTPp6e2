
#include "Tablica2D.h"
#include "Tablica2D.cpp"
using namespace std;
int main()
{
	Tablica2D<10,10> T;
	cout<<T.Get(9,9)<<endl;
	T.Set(50, 9, 9);
	cout << T.Get(9, 9) << endl;
	T.Sortuj();
	T.Wyswietl();
	cin.get();
}