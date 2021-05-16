#include <iostream>
#include <climits>

using namespace std;

struct lista{
    int pos1;
    int pos2;
    lista * kov;
};

int main()
{
    lista * mutato = NULL;
    int szam1=1 , szam2=1;
    while(szam1!=0 && szam2!=0){
        lista * ujelem = new lista;
        cin >> szam1;
        ujelem -> pos1 = szam1;
        cin >> szam2;
        ujelem -> pos2 = szam2;
        ujelem -> kov = mutato;
        mutato = ujelem;

    }
    int max1 = INT_MIN , max2 = INT_MIN;
    while(mutato){
        if(mutato -> pos1 > max1 && mutato -> pos2 > max2){
            max1 = mutato -> pos1;
            max2 = mutato -> pos2;
        }
        mutato = mutato->kov ;
        //cout << max1 <<" "<< max2;
    }
    cout << max1 <<" " << max2;
    return 0;
}
