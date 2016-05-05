# Rozwiązanie zadania domowego z operacji bitowych
https://github.com/michalszynkiewicz/c-classes-pl/tree/master/3-operacje-bitowe


# Alokacja i wskaźniki
https://pl.wikibooks.org/wiki/C/malloc

## Zadania wstępne

### 1 Modyfikowanie parametrów wejściowych
Uzupełnij wykropkowane miejsca w programie 1-modifying-in-param.c

### 2 Alokacja
Uruchom program 2-how-to-fix-it.c z limitem pamięci 40MB.

Co się stało? Jak to naprawić?

Uruchamianie programu z ograniczoną ilością pamięci:
```bash
ulimit -Sv 40000
```
-S soft limit, -v virtual memory, wartość w kB

Np żeby przetestować czy Twój program nie przekracza 40MB:
```bash
gcc my-program.c  &&  ulimit -Sv 40000 && ./a.out; ulimit -Sv unlimited
```


## Wspólne zadanie: Lista o dynamicznej długości (vector)
Uzupełnić metody w pliku `vector.c`.

Metoda `init` powinna zainicjalizować pola służące do przechowywania danych.

Wywołanie metody `add` skutkować "zapamiętaniem" wartości przekazanej jako parametr.

Pole `size` powinno zawierać ilość aktualnie zapamiętanych elementów.

## Zadania

### 1 (m/c)alloc
Zmień rozwiązanie zadania 1. z zajęć 5. tak, aby korzystało z dynamicznie alokowanej tablicy.

### 2 Chodzące wskaźniki
Zmień rozwiażanie zadania 3. z zajęć 4. (dwa składniki o zadanej sumie dla posortowanych ciągów) tak, żeby do iterowania po tablicy użyć wskaźników.

# Zadanie domowe: statystyki

Napisz program, który wczyta kilka zestawów danych a na końcu wypisze następujące statystyki:

- sumę wszystkich elementów ze wszystkich zestawów
- największą średnią zestawu

Pierwsza linia wejścia będzie zawierała liczbę zestawów *t*, dalej będzie następowało *t* definicji zestawu.

Definicja zestawu składa się z: liczby elementów zestawu *n*, a następnie *n* liczb.

**UWAGA** rozwiązanie zadania powinno wczytywać każdy z zestawów danych do dynamicznie zaalokowanej tablicy odpowiedniej wielkości.

Np.

Wejście:
```
3
2
5 5
5
1 2 3 4 5
1
3
```
Wyjście:
```
SUMA: 28
NAJWYŻSZA ŚREDNIA: 5
```
