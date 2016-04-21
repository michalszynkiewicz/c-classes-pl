# Struktury, unie, enumeracje
https://pl.wikibooks.org/wiki/C/Typy_z%C5%82o%C5%BCone

# Zadania

## Byte order
Napisz program, który wczyta z wejścia liczbę całkowitą bez znaku (unsigned int) i wypisze kolejne jej bajty. Użyj odpowiedniej unii.

Uruchom program lokalnie i sprawdź jak liczby są reprezentowane w bajtach.

Zaloguj się na netra1 (np `ssh *login*@netra1`). Utwórz własny katalog w /tmp/progc/. Do katalogu skopiuj kod źródłowy programu. Skompiluj i uruchom program na netrze. Porównaj wyniki z lokalnymi.


## LinkedList
Korzystając ze `struct` i `malloc` zaimplementuj listę dwukierunkową przechowującą liczby (int).

Element listy powinien zawierać wskaźnik na następny element, wskaźnik na poprzedni element i wartość.

Listę może reprezentować pierwszy z jej elementów.

Zaimplementuj metody:
- `add(Lista, int)` dodającą element do listy
- `remove(Lista, int)` - usuwającą element o danej wartości z listy
- `print(Lista)` - wypisującą wszystkie wartości


# Zadania domowe (**UWAGA** są dwa!):

## LinkedList
Rozwiń rozwiązanie zadania LinkedList dodając metody:
1. Rozmiar listy
2. Utwórz odwróconą listę

## #define arraycpy
Napisz makro `arraycpy(source, target, length)`, które przepisze zawartość tablicy source do tablicy target. Załóż, że tablica target jest już zainicjalizowana.

Do kompilacji zamiast flagi `-ansi` użyj `-std=c99`, co pozwoli na zainicjowanie nowej zmiennej w "nagłówku" pętli `for`.
