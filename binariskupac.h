//Soos Szabolcs, 514 csoport, ssim1672
//BINARIS KUPAC - header file

#include <iostream>

using namespace std;

typedef struct kupac {
	int Tomb[100];
	int KupacMeret;
    int Maximum(int A[]);
	void Beszur(int elem);
	void TorolMaximum();
};

kupac K;


void MaxKupacRendez(kupac & K, int i){
// Rendezzuk a sorozatot, ugy, hogy minden elem utan, kisebb vagy egyenlo ertek kovetkezzen
	int bal;
	int jobb;
	int maximum;
	int seged;
	bal = 2 * i;
	jobb = (2 * i) + 1;
	if ((bal <= K.KupacMeret) && (K.Tomb[bal] > K.Tomb[i]))
		maximum = bal;
	else
		maximum = i;
	if((jobb <= K.KupacMeret) && (K.Tomb[jobb] > K.Tomb[maximum]))
		maximum = jobb;
	if(maximum != i)
	{
		seged = K.Tomb[i];
		K.Tomb[i] = K.Tomb[maximum];
		K.Tomb[maximum] = seged;
		MaxKupacRendez(K, maximum);
	}
}


kupac KupacEpites(int Tomb[],int n){
// A Tombot atalakitjuk kupacca
	for (int i= 0; i<n; i++)
        K.Tomb[i]=Tomb[i];

    K.KupacMeret=n;


	for(int i = K.KupacMeret/2; i >= 1; i--)
		MaxKupacRendez(K, i);
		return K;
}


void KupacRendezes(kupac & K){
// Rendezzuk a kupacot
	int seged;
	for(int i = K.KupacMeret; i >= 2; i--){
		seged = K.Tomb[1];
		K.Tomb[1] = K.Tomb[i];
		K.Tomb[i] = seged;
		K.KupacMeret=K.KupacMeret - 1;
		MaxKupacRendez(K,1);
	}
}

/*void elemnoveles(int meret, int elem) {

}

void kupac::Beszur(int elem)
//Uj ertek parameterkenti beszurasa
{
	KupacMeret=KupacMeret+1;
	Tomb[KupacMeret]=33;
	elemnoveles(KupacMeret,elem);
}

int kupac::Maximum(int A[])
//Kiirja a kupac legnagyobb elemet
{
	return A[1];
}

void MaxKupacRendez(int Tomb[], int size, int counter) {

}

void kupac::TorolMaximum()
//Toroljuk a kupac legnagyobb elemet
{
	int maximum;
	if (1 > KupacMeret)
		cout<<"Nincs eleg elem a kupacban";
	else
	{
		maximum=Tomb[1];
		Tomb[1]=Tomb[KupacMeret];
		KupacMeret=KupacMeret - 1;
		MaxKupacRendez(Tomb,KupacMeret,1);
	}
}
*/
void Kiir(int Tomb[], int n){
// Kiirjuk a tombot
	for(int i = 0; i < n; i++)
		cout << Tomb[i] << " ";
	cout << endl;
}

void KiirKupac(kupac K){
for (int i=0; i < K.KupacMeret; i++){
    cout << K.Tomb[i]<< " ";
}
cout<< endl;
}
