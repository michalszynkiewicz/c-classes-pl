# 0. IDE
Polecam Netbeans dla C/C++: https://netbeans.org/downloads/index.html

Można również używać Code::Blocks.

# 1. Kompilacja

`gcc kod_zrodlowy.c`

Tworzy plik a.out, który można uruchomić wywołując `./a.out`


## Flagi
`gcc -Wall -ansi -pedantic -o wyjscie`

## Dodatkowe informacje
Opcje: https://gcc.gnu.org/onlinedocs/gcc/Option-Summary.html

# 2. Wejście-Wyjście

# 3. Zadania
## A
Napisz program, który wczyta z wejścia tablicę znaków (char*) i wypisze ją na wejście w odwrotnej kolejności.

Np:
Wejście:
"abc"
Wyjście:
"cba"

## B
Napisz program, który wczyta z wejścia liczbę n i zwróci n-tą wartość Fibonacciego

Definicja ciągu Fibonacciego:
f(0) = 0, f(1) = 1, f(n+1) = f(n) + f(n-1)

Np:
Wejście:
3
Wyjście:
2
