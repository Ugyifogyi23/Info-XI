#include <iostream>
#include <climits>

using namespace std;

struct lista{
    int szam;
    string szo;
    lista * kov;
};

int main()
{
    lista * mutato = NULL;
    int n , a;
    string szo;
    cout << "n=";
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        lista * ujelem = new lista;
        cout << "szam" << i+1 <<": ";
        cin >> a;
        ujelem -> szam = a;
        cout << "szo" << i+1 <<": " ;
        cin >> szo;
        ujelem -> szo = szo;
        ujelem -> kov = mutato;
        mutato = ujelem;
    }
    int max = INT_MIN;
    string kiir = "";
    while(mutato){
        if(mutato -> szam > max){
            max = mutato -> szam;
            kiir = mutato -> szo;
        }
         mutato = mutato -> kov;
    }
    cout << kiir;

    return 0;
}
