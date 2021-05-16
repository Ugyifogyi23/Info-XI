#include<iostream>
#include<climits>

using namespace std;

struct lista
{
    int ertek;
    lista * kov;
};


int main()
{
    lista * mutato = NULL;
    int i, n, szam;
    cout << "n= ";
    cin >> n;
    for(i=0; i<n; i++)
    {
        lista * ujelem = new lista;
        cout << "szam = ";
        cin >> szam;
        ujelem->ertek = szam;
        ujelem->kov  = mutato;
        mutato = ujelem;
    }
    int legkisebb = INT_MAX;
    while(mutato)
    {
        if(mutato->ertek < legkisebb)
        {
            legkisebb = mutato->ertek;
        }
        //cout << mutato->ertek << " ";
        mutato = mutato->kov;
    }
    cout << endl << "legkisebb elem = " << legkisebb;
    return 0;
}
