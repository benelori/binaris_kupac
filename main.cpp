//Soos Szabolcs, 514 csoport, ssim1672
//BINARIS KUPAC - main
#include "binariskupac.h"

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


int main(){
kupac K;
int Tomb[20];

	cout << "Beolvassuk a szamokat:" << endl;

 int n = BeolvasTombMeret();

    BeolvasTombElemek(Tomb, n);
    cout << "A beolvasott szamok sorozata:" << endl;
    Kiir(Tomb,n);
    cout << endl;

   K = KupacEpites(Tomb, n);
    cout << "A kupac-sorozat:" << endl;
    KiirKupac(K);
    cout << endl;

  /*  KupacRendezes(K);
    cout << "A rendezett sorozat:" << endl;
    Kiir(K);
    cout << endl;

   // cout << "A legnagyobb elem:" << maximum<< endl;
*/
return 1;
}
