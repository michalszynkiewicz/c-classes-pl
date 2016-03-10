# 1. Wspólne zadanie

Napisać program, który będzie wczytywał ze standardowego wejścia polecenia:
- `wczytaj n` - dodaj liczbę `n` do zbioru
- `wyjmij n` - usuń liczbę `n` ze zbioru
- `sprawdz n` - sprawdź czy `n` należy do zbioru
- `wyjdz` - zakończy program

`n ∈ {0, 1, ..., 31}`

# 2. Zadania
## A Potęgowanie
Wczytaj ze standardoweg wejścia `n` i wypisz `2`<sup>`n`</sup>
Np.:

Wejście: `10`

Wyjście: `1024`

## B Pierwsza czy złożona
Wczytaj liczbę `n` i wypisz `pierwsza` jeśli jest liczbą pierwszą lub najmniejszy z jej dzielników jeśli jest liczbą złożoną.

Np.

Wejście: `225`

Wyjście: `3`

## C Krawężnik
Na ile sposobów można ułożyć krawężnik długości `n` z bloków długości `2`, `3` i `5`?
Napisz program, który wczyta `n` i wypisze liczbę sposobów modulo `10`<sup>`9`</sup>

Np.:

Wejście: `10`

Wyjście: `14`


# 3. Zadanie domowe
Napisz program, który wczyta dwa zbiory liczb należących do przedziału `{0, 1, ... 31}` i wypisze przecięcie i sumę tych zbiorów. Rozwiązanie ma wykorzystywać operacje bitowe (tylko takie będą punktowane).

Elementy obu zbiorów są oddzielone liczbą `-1`.

Np dla wejścia:

`1 2 5 8 -1 3 2 4 5`

Wypisze:
```
Przecięcie: 2 5
Suma: 1 2 3 4 5 8
```
