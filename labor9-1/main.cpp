#include <iostream>

int N = 8;
int a[10][10];

using namespace std;

bool van(int x , int y){
    if(a[x][y]==1){
        return true;
    }
    return false;
}

int main()
{
    for(int i = 0 ; i < (N+1) ; i++){
        for(int j = 0 ; j < (N+1) ; j++){
            a[i][j]=0;
        }
    }
    a[1][2]=1;
    a[2][1]=1;
    a[2][3]=1;
    a[3][2]=1;
    a[3][4]=1;
    a[4][3]=1;
    a[2][4]=1;
    a[4][2]=1;
    a[4][8]=1;
    a[8][4]=1;
    a[5][6]=1;
    a[6][5]=1;
    a[5][7]=1;
    a[7][5]=1;
    a[5][8]=1;
    a[8][5]=1;

    /*for(int i = 0 ; i < (N+1) ; i++){
        for(int j = 0 ; j < (N+1) ; j++){
            cout << a[i][j] <<" ";
        }
        cout << endl;
    }*/

    cout << van(1 , 8);




    return 0;
}
