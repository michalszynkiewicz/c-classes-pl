# 0. IDE

Polecam Netbeans dla C/C++: https://netbeans.org/downloads/index.html

Można również używać Code::Blocks.

# 1. Kompilacja
```bash
gcc kod_zrodlowy.c
```

Tworzy plik a.out, który można uruchomić wywołując `./a.out`


## Flagi
Będziemy używać następujących flag kompilacji:
```bash
gcc -Wall -ansi -pedantic -o wyjscie`
```

* `-Wall` - wypisuje więcej uwag kompilatora
* `-ansi` - oryginalny standard ANSI (równoważne `-std=c89`)
* `-pedantic` - sprawdza dokładną zgodność z w/w standardem



## Dodatkowe informacje
Opcje: https://gcc.gnu.org/onlinedocs/gcc/Option-Summary.html

# 2. Podstawy Wejścia-Wyjścia
Nagłówek z definicją operacji wypisywania i wczytywania:
```c
#include <stdio.h>
```

Opis funkcji `printf` (do wypisywania): https://pl.wikibooks.org/wiki/C/printf
Opis funkcji `scanf` (do wczytywania): https://pl.wikibooks.org/wiki/C/scanf

# 3. Zadania
## A
Funkcja `main` programu napisanego w C może mieć nagłówek:
```c
int main(int argc, char *argv[])
```
Napisz program, który wypisze swoją nazwę na standardowe wyjście.
Nazwa programu jest zerowym elementem funkcji argv.


## B
Napisz program, który wczyta z wejścia tablicę znaków (char[]) i wypisze ją na wyjście w
odwrotnej kolejności.
Rozmiar wejścia nie przekroczy 100000 znaków.

Np:

Wejście:
"abc"

Wyjście:
"cba"

## C
Napisz program, który wczyta z wejścia liczbę n i zwróci n-tą wartość Fibonacciego

Definicja ciągu Fibonacciego:
f(0) = 0, f(1) = 1, f(n+1) = f(n) + f(n-1)]

Np:

Wejście:
3

Wyjście:
2
