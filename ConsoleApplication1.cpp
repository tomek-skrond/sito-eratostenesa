#include<iostream>

using namespace std;

class Primes{
	
	int *T;
	int n;

public:

	Primes(int n,int T[]);
	~Primes();

	int *Odsiej(int T[],int n);
	void Wyswietl(int T[],int n);
	void Sprawdz(int x);
	
};

Primes::Primes(int N,int tab[]) : n(N), T(tab){

	tab = new int[N];
	for (int i = 0; i < N; i++) {
		tab[i] = false;
	}
}

Primes::~Primes(){

}

int* Primes::Odsiej(int Tablica[],int range) {

	for (int i = 2; i*i < range; i++) {
		if (!Tablica[i]) {
			for (int j = i * i; j < range; j += i) {
				Tablica[i] = true;
			}
		}
		
	}

	return T;
}
void Primes::Wyswietl(int T[],int range) {

	cout << "liczby pierwsze: " << endl;
	for (int i = 2; i < range; i++) {
		if (T[i]) {
			cout << i << "|";
		}
	}
}
void Primes::Sprawdz(int x) {
	if()
}
void testPrimes() {

	int k = 0;
	int *tablica;
	tablica = new int[k];

	cout << "podaj zakres(1 do n): ";
	cin >> k;
	Primes prim1{ k,tablica };

	tablica = prim1.Odsiej(tablica,k);
	prim1.Wyswietl(tablica,k);

	delete[] tablica;
}
int main() { 

	testPrimes();

	return 0;
}