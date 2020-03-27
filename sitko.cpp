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

	//tab = new int[N]; // przez to tablica sie nie zerowala bo tworzyles tablice tablic
	for (int i = 0; i < N; i++) {
		tab[i] = 0;
	}
}

Primes::~Primes(){

}

int* Primes::Odsiej(int Tablica[],int range) {
    // możliwe ze troche zmieniłem algorytm ale przynajmniej działa tak jak powinien
	for (int i = 2; i< range; i++) {
		if (!Tablica[i]){
			for (int j = i+i; j <= range; j += i) { // tutaj i+i a nie i*i
				Tablica[j] = true;  //nie i tylko j! przez to nie oznaczalismy wszystkich liczb
				//oznaczamy liczby ktore nie sa pierwsze
			}
		}
	}
	return T;
}
void Primes::Wyswietl(int T[],int range) {

	cout << "liczby pierwsze: " << endl;
	for (int i = 2; i < range; i++) {
		if (!T[i]) { //tutaj zanegowanie bo szukamy zer
			cout << i << "|"<<T[i]<<endl;
		}
	}
}
void Primes::Sprawdz(int x) {
}
void testPrimes() {

	int k = 0;
	int *tablica;
	tablica = new int[k];

	cout << "podaj zakres(1 do n): ";
	cin >> k;
	cout<<"Pokazujemy syf w tablicy"<<endl;
	for(int i=2;i<k;i++){
        cout<<tablica[i]<<"|";;
	}
	cout<<endl;
	Primes prim1{ k,tablica };
	cout<<"Tablica po czyszczeniu"<<endl;
	for(int i=2;i<k;i++){
        cout<<tablica[i]<<"|";;
	}
	cout<<endl;
	cout<<"wysietlanie przed odsianiem <indeks|zawartosc tablicy>"<<endl;
    prim1.Wyswietl(tablica,k);

	//tablica =
	prim1.Odsiej(tablica,k);
	cout<<"wysietlanie po odsianiu <indeks|zawartosc tablicy>"<<endl;
	prim1.Wyswietl(tablica,k);

	delete[] tablica;
}
int main() {

	testPrimes();

	return 0;
}
