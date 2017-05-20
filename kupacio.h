//Soos Szabolcs, 514 csoport, ssim1672
//BINARIS KUPAC Beolvasas - header file

#include <iostream>

using namespace std;

int BeolvasTombMeret(){
// Megadjuk a sorozat elemeinek szamat
    int n;
    cout << "Adja meg az n erteket, n: "; cin >> n;
    return n;
}

void BeolvasTombElemek(int BeTomb[], int n){
    //Beolvassuk az elemeket
    cout << endl << "A beolvasott szamok sorozata: ";
    for (int i = 0; i < n; i++)
        cin >> BeTomb[i];
}

void Kiir(int Tomb[], int n){
// Kiirjuk a tombot
    for(int i = 0; i < n; i++)
        cout << Tomb[i] << " ";
    cout << endl;
}
