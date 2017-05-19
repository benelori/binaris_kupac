//Soos Szabolcs, 514 csoport, ssim1672
//BINARIS KUPAC - main
#include "binariskupac.h"

int main(){
kupac K;

	cout << "Beolvassuk a szamokat:" << endl;

    Beolvas(K);
    cout << "A beolvasott szamok sorozata:" << endl;
    kiir(K);
    cout << endl;

    KupacEpites(K);
    cout << "A kupac-sorozat:" << endl;
    kiir(K);
    cout << endl;

    KupacRendezes(K);
    cout << "A rendezett sorozat:" << endl;
    kiir(K);
    cout << endl;

   // cout << "A legnagyobb elem:" << maximum<< endl;

return 1;
}
