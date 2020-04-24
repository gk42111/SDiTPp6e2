#include "Tablica2D.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

template<int NumberOfEl, int NumberOfEl1>
void Tablica2D<NumberOfEl, NumberOfEl1>::swap(int & x, int & y)
{
	int temp = x;
	x = y;
	y = temp;
}

template<int NumberOfEl, int NumberOfEl1> Tablica2D<NumberOfEl, NumberOfEl1>::Tablica2D() {
	srand(time(NULL));
	int x = 1, y = 100;
	for (int i = 0; i < NumberOfEl; i++) {
		for (int j = 0; j < NumberOfEl1; j++) {
			Tab2D[i][j] = x + rand() % (y - x + 1);
		}
	}		
}

template<int NumberOfEl, int NumberOfEl1>
void Tablica2D<NumberOfEl, NumberOfEl1>::Set(int Element, int N, int M)
{
	Tab2D[N][M] = Element;
}

template<int NumberOfEl, int NumberOfEl1>
int Tablica2D<NumberOfEl, NumberOfEl1>::Get(int N, int M)
{
	return Tab2D[N][M];
}

template<int NumberOfEl, int NumberOfEl1>
int Tablica2D<NumberOfEl, NumberOfEl1>::Maksimum()
{
	int max = Tab2D[0][0];
	for (int i = 0; i < NumberOfEl; i++) {
		for (int j = 0; i < NumberOfEl1; j++) {
			if (max < Tab2D[i][j]) max = Tab2D[i][j];
		}
	}
	return max;
}

template<int NumberOfEl, int NumberOfEl1>
int Tablica2D<NumberOfEl, NumberOfEl1>::Minimum()
{
	int max = Tab2D[0][0];
	for (int i = 0; i < NumberOfEl; i++) {
		for (int j = 0; i < NumberOfEl1; j++) {
			if (max > Tab2D[i][j]) max = Tab2D[i][j];
		}
	}
	return max;
}

template<int NumberOfEl, int NumberOfEl1>
void Tablica2D<NumberOfEl, NumberOfEl1>::Sortuj()
{
	int x;

	for (int k = 0; k < NumberOfEl; k++)
	{
		for (int m = 0; m < NumberOfEl1; m++)
		{
			x = m + 1;
			for (int i = k; i < NumberOfEl; i++)
			{
				for (int j = x; j < NumberOfEl1; j++)
				{
					if (Tab2D[k][m] > Tab2D[i][j])
						swap(Tab2D[k][m], Tab2D[i][j]);
				}
				x = 0;
			}
		}
	}
}

template<int NumberOfEl, int NumberOfEl1>
void Tablica2D<NumberOfEl, NumberOfEl1>::Wyswietl()
{
	for (int i = 0; i < NumberOfEl; i++) {
		cout << endl;
		for (int j = 0; j < NumberOfEl1; j++)
			cout << Tab2D[i][j] <<"\t";
	}
}
