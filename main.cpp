#include <iostream>
#include <vector>

using std::vector;
using std::cout;

class Primes{

    int n;
    vector<bool> T;
    int check;

public:

    Primes(int n,vector<bool> &T);
    vector<bool> Odsiej(int n,vector<bool> &T);
    void Wyswietl(int n,vector<bool> &T);
    //void Sprawdz(int check);

};

Primes::Primes(int N, vector<bool> &t):n(N),T(t){
    for(int i=0;i<N;i++){
        t.push_back(0);
    }
}

vector<bool> Primes::Odsiej(int Nn,vector<bool> &Tab){

    for(int i=2;i*i<Nn;i++){
        if(!Tab[i]) {
            for (int j = i + i; i <= Nn; j += i) {
                Tab[j] = 1;
            }
        }
    }
    return T;
}

void Primes::Wyswietl(int nn,vector<bool> &Tt){
    for(int i=0;i<nn;i++){
        if(!Tt[i]){
            cout<<i<<"|"<<Tt[i]<<std::endl;
        }
    }
}
void classTests(){

    vector<bool> tab;
    int m;
    cout<<"podaj zakres: "<<std::endl;
    std::cin>>m;

    Primes prim1(m,tab);

    prim1.Odsiej(m,tab);
    prim1.Wyswietl(m,tab);

}
int main() {

    classTests();

    return 0;
}
