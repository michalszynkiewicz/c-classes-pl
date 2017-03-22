# 0. Rozwiązanie zadania domowego *k-ty element*

# 1. Zadania

## A. Suma elementów parzystych
Napisz program, który przyjmie od użytkownika ciąg liczb i zwróci sumę elementów o parzystych wartościach.

Np. dla wejścia:
```
5 3 1 7 4 9 1 2
```
Da wyjście:
```
6
```

## B. Mnożenie macierzy przez skalar

Napisz program, który wczyta ze standardowego wejścia: skalar, wymiary macierzy, macierz, a następnie wypisze iloczyn macierzy przez skalar.

Macierz można reprezentować jako tablicę tablic (ale nie trzeba!). Można założyć, że wymiary tablicy nie będą przekraczały 10000x10000.

Np:

Wejście:
```
2
3 3
1 1 1
1 1 1
1 1 1
```
Wyjście:
```
2 2 2
2 2 2
2 2 2
```

## C. Mnożenie dwóch macierzy kwadratowych

Napisz program, który wczyta: wymiar macierzy i dwie macierze ze standardowego wejścia i wypisze iloczyn wczytanych macierzy.

Podobnie jak w zadaniu C, można założyć górne ograniczenie na wymiary macierzy.

Np:

Wejście:
```
2
1 1
1 0
4 3
5 2
```

Wyjście:
```
9 5
4 3
```

## D Mergesort

Zaimplementuj sortowanie tablicy algorytmem *mergesort*. Możesz założyć, że rozmiar tablicy jest potęgą dwójki i że nie będzie przekraczał 2048.


Sposób działania algorytmu:

1. Jeśli tablica do posortowania ma mniej niż dwa elementy - jest już posortowana
2. W przeciwnym przypadku:   
    2.1 podziel tablicę na dwie równe części i posortuj każdą z nich (rekurencyjnie)
    2.2 połącz obie części tablicy w jedną posortowaną tablicę

Dokładniejszy opis algorytmu: https://pl.wikipedia.org/wiki/Sortowanie_przez_scalanie


# 2. Zadanie domowe: Palindromy
Napisz program, który sprawdzi czy jest słowo jest *palindromem*.

Program powinien wczytać jedno słowo ze standardowego wejścia i wypisać `TAK` jeśli jest ono palindromem, `NIE` w przeciwnym przypadku.

**Palindrom** to słowo, które czytane od lewej strony jest takie samo jak czytane od prawej (jest symetryczne), np *ADA*, *PKP*, *POTOP*, *RADAR*.
