//Soos Szabolcs, 514 csoport, ssim1672
//BINARIS KUPAC - main
#include "binariskupac.h"
#include "kupacio.h"
#include "menu.h"
#include "tesztallomany.h"

int main(){

    int valasztas;
    cout << "1. Tesztallomany" << endl;
    cout << "2. Menu" << endl;
    cout << "Honnan futattod az aplikaciot" << endl;

    cin >> valasztas;

    switch(valasztas)
        {
            case 1: {

                break;
            }

            case 2: {
                menu();
                break;
            }

            default: return 1;
        }


  // cout << "A legnagyobb elem:" << maximum<< endl;

return 1;
}
