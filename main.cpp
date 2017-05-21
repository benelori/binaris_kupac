//Soos Szabolcs, 514 csoport, ssim1672
//BINARIS KUPAC - main
#include "binariskupac.h"
#include "kupacio.h"
#include "menu.h"
#include "tesztallomany.h"

void opciok() //lehetseges muveletek kiiratasa
{ cout<<"OPCIOK:"<<endl;
    cout<<"1. A beolvasott szamok kiirasa."<<endl;
    cout<<"2. A kupac-sorozat kiirasa."<<endl;
    cout<<"3. Uj elem beszurasa."<<endl; //tartalom/marka/kategoria/lejart
    cout<<"4. Elem torlese."<<endl; //teljes/tartalom/kategoria szerint
    cout<<"5. Maximum torlese."<<endl;
    cout<<"6. Kilepes."<<endl;
    cout<<endl<<"Valasszon egy opciot! ";
}

int main(){

    int valasztas;
    cout << "1. Tesztallomany" << endl;
    cout << "2. Menu" << endl;
    cout << "Honnan futattod az aplikaciot" << endl;

    cin >> valasztas;
    if (valasztas >2)
        cout<<"Nem letezik ilyen opcio, kerem valasszon ujat: ";
    cin >> valasztas;

    switch(valasztas)
        {
            case 1:
                {
                opciok();
                break;
            }

            case 2:
                {
                opciok();
                {
                int ValasztOpcio1;
                cin >> ValasztOpcio1;
                if (ValasztOpcio1 > 6)
                    cout <<"Nem letezik ilyen opcio, kerem valasszon ujat: ";
                cin ValasztOpcio1;
                }
                switch(ValasztOpcio1)
                {
                    case 1:
                    {cout << "Beolvassuk a tomb meretet:" << endl;
                         BeolvasTombElemek(Tomb, n);
                         break;
                    }
                    case 2:
                        {
                    break;
                        }
                    case 3:
                        {
                    break;
                        }
                    case 4:
                        {
                    break;
                        }
                    case 5:
                        {
                    break;
                        }
                    case 6:
                        {
                    break;
                        }
                    }
               // menu();
                break;
                }

            default: return 1;
    }
return 1;
}
