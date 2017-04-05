# Omówienie zadania domowego z zajęć 4.

Napisz program, który wczyta tekst ze standardowego wejścia i zliczy występujące w nim cyfry.
Program powinien ignorować wszystkie inne znaki i zakończyć wczytywanie w momencie napotkania znaku końca pliku.

Wejście:
```
a--00aas


df   34gaa53asdf.
```

Wyjście:
```
0:2
1:0
2:0
3:2
4:1
5:1
6:0
7:0
8:0
9:0
...
```


# Dyrektywy preprocesora
https://pl.wikibooks.org/wiki/C/Preprocesor
http://edu.pjwstk.edu.pl/wyklady/pro/scb/PRG2CPP_files/node14.html

## Zadania

### 1. #define
Zdefiniuj (`#define`) dwie stałe, IMIE oraz NAZWISKO. Ustaw w nich odpowiednio swoje imię i nazwisko.

Wypisz wartości stałych na ekran przy pomocy `printf`.

### 2. Błąd
Przeanalizuj i uruchom `2-gdzie-jest-blad.c`.

Znajdź błąd i popraw program.

### 3. Utils
Utwórz plik `utils.h` (plik nagłówkowy).
Napisz w nim funkcję `int mnozOdDo(int a, int b)`, która obliczy iloczyn elementów od `a` do `b`.

Następnie utwórz plik `silnia.h` i zdefiniuj w nim metodę `int silnia(int n)` zwracającą `n!`, korzystając z metody `mnozOdDo`.
Aby móc skorzystać z `mnozOdDo`, dodaj definicję nagłówka `utils.h` do `silnia.h`.

Napisz program `program.c`, który wczyta z ekranu dwie liczby, `a` i `b`, i wypisze na ekran:
`a!`, `b!` oraz iloczyn liczb od `a` do `b`.
Do rozwiązania wykorzystaj metody `mnozOdDo` i `silnia` zdefiniowane w w/w nagłówkach (*zainclude'uj* odpowiednie nagłówki).

Co zrobić, aby móc w program.c załączyć co następuje?
```c
#include "utils.h"
#include "silnia.h"
```

### 4. Makra

**UWAGA** do kompilacji tego zadania zamiast flagi -ansi użyj -std=c99

Zediniuj makra:

1. `max` znajdujące maksimum dwóch liczb

1. `length(arr)` znajdujące długość tablicy (wskazówka na dole strony)

1. `foreach(x, arr)` które wywołuje następujący po nim blok kodu dla każdego elementu tablicy.
Np poniższy program powinien wypisać elementy tablicy arr:

```c
#include <stdio.h>
#include <limits.h>

/* tu zdefiniuj makra */

int main() {
        int arr[] = {1,7,4};
        int x, maximum = INT_MIN;
        foreach(x, arr) printf("%d\n", x);
        foreach(x, arr) maximum = max(maximum, x);
        printf("max: %d\n", maximum);

        return 0;
}

```


# Tekst - c.d.
Napisz program rozwiązujący zadanie https://uva.onlinejudge.org/external/6/673.pdf


# Zadanie domowe
## Stos
Zaimplementuj stos.

Na jego podstawie napisz program, który będzie wczytywał polecenia postaci:

- `push ` *liczba* - wstawia liczbę na czubek stosu
- `pop` - wypisuje na ekran wartość czubka stosu i usuwa ją ze stosu (przesuwa czubek na poprzednią liczbę)
- `quit` - kończy działanie programu


Np dla wejścia:
```
push 10
push 12
push 100
pop
pop
quit
```
Na wyjściu pojawi się:
```
100
12
```



<sub>Popróbuj z sizeof</sub>
