# Variabile

## Definitie

O variabilă reprezintă o locație de memorie unde se află o valoare de un anumit tip.

O varibila are:

    - adresa de memorie: locatia din memoria RAM unde este retinuta valoarea variabilei (un numar in baza 16) 
    - identificator: numele ales de utilizator prin care sa identifice variabila
        - acesta poate contine doar litere mari si mici ale alfabetului englez, underscore si cifre (oriunde doar nu la
    inceput)
    - tipul variabilei: int, float etc
    - domeniul de vizibilitate: globale sau locale (cele locale sunt vizibile doar in blocul de cod in care au fost 
    create, cele globale peste tot)

## Sintaxa

```
Tipul_de_date Lista_identificatori;
```

## Constante

Constantele sunt date care nu isi pot modifica valoarea

Acestea se pot declara in doua moduri diferite:

    - prin folosirea directivei "define": 
        #define MAX 100
    - sau prin folosirea modificatorului "const":
        const int MAX 101