# Subprograme

## Definitie

Un subprogram este un bloc de cod ce contine tipuri de date, variabile, instructiuni ce se executa atunci cand 
este apelat.

Pentru a intelege conceptul de subprogram si utilitatea acestora, luam ca exemplu urmatoarea problema:

Se dau 2 numere intregi, a si b. Sa se determine inversele cele 2 numere.

Fara a folosi un subprogram, ar trebui sa folosim 2 secvente de cod aproape identice pentru 
identificarea inverselor fiecarui numar, ceea ce ar duce la un cod mai lung, incarcat si greu de citit.
O solutie mai simpla este sa cream un **subprogram** pe care sa il apelam de 2 ori, o data pentru fiecare numar.

Folosirea subprogramelor usureaza lucrul, ne ajuta sa refolosim cod astfel incat sa nu rescriem blocuri identice,
confera modularitate programului si ajuta la un debug mai usor.

Problema rezolvata fara subprogram:
```sh
int main()
{
  int a, b;
  cin>>a>>b;
  int newA, newB;
  while(a != 0){
    newA = newA * 10 + a % 10;
    a /= 10;
  }

  while(b != 0){
    newB = newB * 10 + b % 10;
    b /= 10;
  }
}
```

Iar acum, cu subprogram:

```shell
int Invers (int x) {
  int newX;
  while (x != 0) {
    newX = newX * 10 + x % 10;
    x /= 10;
  }
  
  return newX;
}

int main() {
  int a,b;
  cin>>a>>b;
  
  int newA, newB;
  newA = Invers(a);
  newB = Invers(b);
}
```