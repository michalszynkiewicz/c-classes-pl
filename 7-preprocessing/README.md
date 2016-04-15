# Omówienie zadania domowego z zajęć 4.

Napisz program, który wczyta tekst ze standardowego wejścia i zliczy występujące w nim litery. Program powinien ignorować wszystkie inne znaki i zakończyć wczytywanie w momencie napotkania znaku końca pliku.

Wejście:

a--00aas


df   gaa.
Wyjście:

a:5
b:0
c:0
d:1
f:1
g:1
h:0
i:0
...
Uwaga Jeśli trudno Ci zrobić wczytywanie do końca pliku, możesz ustalić dowolny znak jako koniec wyjścia i na nim zakończyć wczytywanie.


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
int main(){
  int arr[] = {1,7,3};
  int x;
  foreach(x, arr) printf("%d ", x);
  return 0;
}
```


# Tekst - c.d.
Napisz program rozwiązujący zadanie https://www.mat.umk.pl:8070/ZawodyWeb/problem/4084/parentheses-balance.html


# * Makefile
Sposób na organizację kompilacji projektów: http://www.programuj.com/artykuly/linux/makefile.php

## Zadanie
Utwórz plik Makefile do kompilacji programów utworzonych na zajęciach.











<sub>Popróbuj z sizeof</sub>
