# Instrucțiunea de decizie (if) + altfel (else)

Instrucțiunea decizioinală 'dacă' este cea mai de bază instrucțiune. Aceasta permite executarea unui program doar sub anumite condiții.

## Sintaxă

```sh
dacă condiție atunci
    instrucțiune 1
altfel
    instrucțiune 2
```

Instrucțiunea 'altfel' este opțională. Această conferă un 'drum' suplimentar pentru cazul în care condiția nu este satisfăcută de prima clauză 'dacă'. Instrucțiunea 'dacă' poate fi în continuare folosită in aceeași clauză 'altfel' ca în următorul exemplu:

```sh
dacă condiție1 atunci
    instrucțiune1
altfel dacă condiție2 atunci
        instrucțiune2
    altfel
        instrucțiune3
```

