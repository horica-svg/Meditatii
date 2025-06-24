#include <iostream>

using namespace std;

int main() {
    int a = 5; // numere naturale in intervalul [ -2^31, (2^31)-1 ]
    float b = 2.5; // numere reale, memorate pe 4 octeti
    double c = 3.5; // numere reale, memorate pe 8 octeti
    char d = 'a'; // caractere (de exemplu litere ale alfabetului, semne de punctuatie si alte caractere speciale)
    bool e = true; // boolean - retine doar true sau false, 1 sau 0
    int* f = &a; // pointer - retine adresa din memorie a unei variabile
    cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<f<<endl;

    // conersii de tip
    // putem converti o variabila de un tip in altul

    b = a; // b va fi 5
    a = c; // a va fi 3, deoarece nu poate retine decat int

    cout<<b<<" "<<a<<endl;

    cout<<2 + 3.5<<endl; // va afisa 5.5, nu 5, pentru a nu avea pierderi de date

    cout<<(int) d<<endl; // conversie explicita de la char la int
    // va afisa codul ASCII al caracterului retinut in d
    cout<<(char) 100<<endl; // va afisa 'd', caracterul corespunzator al codului 100 in ASCII

    a = 30;
    cout<<a/3<<endl; // va returna 10 (impartire a 2 intregi)
    cout<<a/3.0<<endl; // va returna 10.0 (impartirea unui intreg la un float/double)
}
