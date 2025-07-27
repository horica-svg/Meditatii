// Fisierele sunt foarte importante in tot ce inseamna programare.
// In principiu, cu ajutorul lor putem citi mai usor si mai lejer datele de intrare pentru un program

#include <iostream>
// pentru a putea folosi fisierele va trebui sa includem o noua biblioteca
#include <fstream>

using namespace std;

int main() {

    // in plus, e nevoie sa declaram noi cai de intrare si iesire
    ifstream f("intrare.txt"); // fisierul de intrare, din care programul va citi datele
    ofstream g("iesire.txt"); // fisierul de iesire, in care programul va scrie rezultatul final

    int suma = 0;
    int a;
    // sa zicem ca vrem sa calculam suma numerelor din fisierul de intrare
    // pentru a citi din fisier, vom folosi "f" in acelasi mod in care foloseam si "cin"
    // pentru ca ipotetic nu stim cate variabile sunt in fisier, va trebui sa citim
    // pana la finalul fisierului in urmatorul mod
    while (f>>a) {
        suma += a;
    }
    cout << suma << endl;

    f.close();
    // dupa ce terminam de folosit un fisier, il inchidem pentru a nu mai folosi resurse degeaba
    // o parte implicita a compilatorului (numita destructor) se ocupa automat de inchiderea fisierelor,
    // dar e un good practice sa o facem noi explicit

    // iar pentru a afisa in fisier va fi la fel ca la afisarea pe ecran, dar ne folosim de noul
    // declarat "g"
    g<<suma;
    g.close();

    return 0;
}