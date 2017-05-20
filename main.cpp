//Soos Szabolcs, 514 csoport, ssim1672
//BINARIS KUPAC - main
#include "binariskupac.h"
#include "kupacio.h"

int main(){
kupac K;
int Tomb[20];

    cout << "Beolvassuk a szamokat:" << endl;

    int n = BeolvasTombMeret();

    BeolvasTombElemek(Tomb, n);
    cout << "A beolvasott szamok sorozata:" << endl;
    Kiir(Tomb, n);
    cout << endl;

    K = KupacEpites(Tomb, n);
    cout << "A kupac-sorozat:" << endl;
    KiirKupac(K);
    cout << endl;

    KupacRendezes(K);
    cout << "A rendezett sorozat:" << endl;
    KiirKupac(K);
    cout << endl;
/*
  // cout << "A legnagyobb elem:" << maximum<< endl;
*/
return 1;
}
