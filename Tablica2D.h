#pragma once
template<int NumberOfEl,int NumberOfEl1> class Tablica2D
{private:
	int Tab2D[NumberOfEl][NumberOfEl1];
	void swap(int &x, int &y);
public:
	Tablica2D();//konstruktor
	void Set(int Element, int N, int M);
	int Get(int N, int M);
	int Maksimum();
	int Minimum();
	void Sortuj();
	void Wyswietl();
};

