# Enunț

> CONJECTÚRĂ, conjecturi, s. f. Părere bazată pe ipoteze sau pe presupuneri; prezumție, supoziție. – Din fr. conjecture, lat. conjectura.
dexonline.ro

Conjecturile sunt probleme pentru care nu există o demonstrație pentru cazul general, dar la care matematicienii nu au găsit încă un caz particular care să nege presupunerea făcută. Una din aceste conjecturi se numește Lychrel. Se ia un număr natural, se adună cu un alt număr obținut prin oglindirea lui și se așteaptă să se găsească un palindrom. Dacă nu se întâmplă asta, se repetă operația cu noul număr.

De exemplu 49:

49+
94=
143+
341=
484 <- palindrom

Dar unele numere, ca 196, nu ajung să fie palindrom niciodată. Scrieți un algoritm care pentru câteva numere date va afișa în câte iterații numărul devine palindrom sau LYCHREL în caz că acesta nu devine palindrom în 1000 de iterații. Dacă numărul este deja palindrom, afișați 0.


## Date de intrare
Fişierul de intrare conjectura.in va conține pe prima linie N, reprezentând numărul de numere care trebuie testate. Pe următoarele N linii se va afla câte un număr X, reprezentând numerele care trebuie verificate.

## Date de ieșire
Fișierul de ieșire conjectura.out va conține pe fiecare linie numărul de iterații până când acel număr devine palindrom sau LYCHREL dacă acesta nu devine în numărul maxim de iterații.

## Restricții

```
Pentru 30 de puncte:
1 <= N <= 10
1 <= X <= 1.000

Pentru 100 de puncte:
1 <= N <= 100
1 <= X <= 10.000
```

Se garantează că pe primele 3 teste, în timpul operațiilor, numerele nu vor depăși 2147483647. Pe următoarele 7 teste, numerele nu vor depăși 512 cifre ca lungime.

# Teste

1. N=10, int-uri
2. N=10, int-uri
3. N=10, int-uri
4. N=20
5. N=30
6. N=50
7. N=80, int-uri
8. N=90
9. N=100
10. N=100, cele mai groaznice ca timp de iterare
