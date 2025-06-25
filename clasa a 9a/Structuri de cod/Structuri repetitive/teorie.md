# Structuri repetitive

Structurile repetitive sunt blocuri de cod ce ruleaza un set de instrcțiuni în mod repetat până la atingerea unei condiții.

Cele 3 structuri repetitive cu care o sa lucrezi sunt pentru (for), cât timp (while) și execută... cât timp (do... while).

## Pentru (for)

Structura repetitivă "Pentru" este folosită atunci când știm exact numărul de pași. Numărul de pași poate fi atât o valoare clară (cum ar fi 5) sau o variabilă Int a cărei valoare este cunoscută. 

### Sintaxa
```
pentru Variabilă <- [ValoareStart, ValoareFinal, Pas] executa:
    set de instructiuni
```
ValoareStart este valoarea de la care se pleaca inițial, ValoareFinal este valoarea maxima până la care mergem, iar Pas reprezintă valoarea cu care incrementăm valoare la fiecare iterație (la fiecare pas) și se citește 
```sh
Pentru Variabilă de la ValoareStart până la ValoareFinal (cu pasul Pas) execută
```
Un exemplu de program ce folosește instrucțiunea Pentru:

```sh
pentru i <- 1,10 execută
    dacă i mod 2 = 0 execută
        scrie i
```

Ceea ce va afișa
```sh
2 4 6 8 10
```

Explicație: i primește pe rând toate valorile de la 1 la 10. Pentru fiecare valoare primită și se verifică paritatea acesteia. În caz afirmativ, va fi afișată. Când pasul nu este precizat în mod explicit, îl considerăm ca fiind 1.


## Cât Timp (While)

Instrucțiunea Cât Timp repetă un bloc de instrucțiuni până la îndeplinirea unei condiții. Dintre cele 2 instrucțiuni rămase, aceasta este cu **test inițial**, adică mai întâi se verifică dacă am îndeplinit condiția de oprire și dacă nu am atins-o încă, continuăm cu execuția programului.

### Sintaxă

```sh
Cât Timp (condiție) execută
```
Ideea de bază pentru Cât Timp este că aceasta rulează în mod repetat instrucțiunile atât timp cât condiția este adevărată.

Exemplu:

```sh
n <- 5
Cât timp n != 0 execută
    scrie "test "
    n <- n-1
```
Ceea ce va afișa cuvântul "test" de 5 ori.

**Atenție**

În exemplul de mai sus instrucțiunea 
```
n <- n-1
```
este crucială pentru rularea corectă a programului. După fiecare afișare a cuvântului "test", decrementăm valoarea lui n. Dacă nu se decrementează n, programul ar rula la nesfârșit pentru că nu ar ajunge niciodată la valoarea de oprire (spunem că intrăm în buclă).

Se numește cu test final deoarece mai întâi verificăm dacă n este diferit de 0 și apoi, dacă trecem de verificare, executăm instrucțiunile din interior.


# Execută... Cât timp (Do... While)

Execută... Cât timp este ultima structură repetitivă, aceasta fiind cu **test final**. Asta înseamnă că mai întăi executăm instrucțiunile din interior, iar la final verificăm dacă am ajuns la condiția de oprire.

## Sintaxă

```sh
Execută
    listă de instrucțiuni
Până când (condiție)
```

Exemplu:
```sh
Citește n
Execută
    scrie "test"
    n <- n-1
Până când n = 0
```

Pentru n = 5, acesta va afișa cuvântul test de 5 ori. Este folosită pentru cerințe de tipul "Se citesc numere naturale până la citirea valorii 0". O astfel de rezolvare arată așa:
```sh
suma <- 0
Execută
    Citește n
    s <- s + n
Cât timp n != 0
Scrie s
```
Dacă pentru n se citesc pe rând valorile 10, 3, 15, 21, 4, 0, atunci programul va rula în următorul mod:

Suma este inițializată cu 0.

Intrăm in blocul Execută... Cât timp

Prima instrucțiune este Citește n

Pentru n este citită valoarea 10

s primește vechea valoare a lui s plus valoarea lui n ( 0 + 10 )

Ajungem la verificarea condiției

n nu este 0, deci putem continua

Ne întoarcem la începutul blocului Execută... Cât Timp și urmăm toate instrucțiunile din nou.

Următoarea valoare a lui n este 3, se adaugă în sumă si verificăm daca n este 0. Este fals și ne întoarcem din nou la inceputul blocului de cod. Repetăm acest proces pentru fiecare valoare. După executarea instrucțiunilor pentru n având vaoarea 4, următoarea valoare citită este 0. O adăugăm in s chiar dacă nu are niciun efect asupra sumei totale. Apoi, la verificarea condiției observăm ca n este 0 și ieșim din blocul de cod Execută... Cât Timp.

Diferența majoră dintre Cât Timp și Execută... Cât Timp este momentul în care se face testarea condiției.

# Transformări

## Căt timp -> Execută... Cât timp

```sh
Cât timp condiție execută
    instrucțiuni
```

Devine

```sh
dacă condiție este adevărată atunci
    execută
        instrucțiuni
    cât timp condiție
```

## Execută... Până când -> Cât timp

```sh
execută
    instrucțiuni
cât timp condiție
```

Devine

```sh
instrucțiuni
cât timp condiție execută
    instrucțiuni
```

## Pentru -> Cât timp

```sh
pentru contor <- start, stop executa
    instrucțiuni
```

Devine

```sh
contor <- start
cât timp contor <= stop execută
    instrucțiuni
    contor <- contor + 1
```

## Pentru -> Execută... Cât timp

```sh
pentru contor <- start, stop executa
    instrucțiuni
```

Devine

```sh
contor <- start
daca contor <= stop atunci
    execută
        instrucțiuni
        contor <- contor + 1
    cât timp contor <= stop
```

# Exerciții

https://www.ududec.com/wp-content/uploads/2021/09/Transformări-echivalente-între-structurile-repetitive.pdf
