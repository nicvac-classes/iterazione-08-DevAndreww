#include <iostream>
using namespace std;

int main() {
 int i, n, debito, promosso;
    string nome;
    double voto, somma, media;

    cout << "Quanti studenti ci sono?" << endl;
    cin >> n;
    i = 0;
    debito = 0;
    promosso = 0;
    somma = 0;
    while (i < n) {
        i = i + 1;
        cout << "Come ti chiami?" << endl;
        cin >> nome;
        cout << "Quanto hai preso?" << endl;
        cin >> voto;
        somma = somma + voto;
        if (voto >= 6) {
            cout << "Sei stato promosso." << endl;
            promosso = promosso + 1;
        } else {
            cout << "Hai preso il debito..." << endl;
            debito = debito + 1;
        }
    }
    media = somma / n;
    cout << "Saranno promossi " << promosso << " persone, e prenderanno il debito " << debito << " persone." << endl;
    cout << "La media della classe è " << media << "." << endl;

}

//LEGGERE LE ISTRUZIONI NEL FILE README.md
