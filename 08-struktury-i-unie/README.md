# Struktury, unie
https://en.wikipedia.org/wiki/Union_type
http://www.tutorialspoint.com/cprogramming/c_unions.htm
https://en.wikipedia.org/wiki/Struct_(C_programming_language)

# Zadania

## Byte order
Napisz program, który wczyta z wejścia liczbę całkowitą bez znaku (unsigned int) i wypisze kolejne jej bajty. Użyj odpowiedniej unii.

Uruchom program lokalnie i sprawdź jak liczby są reprezentowane w bajtach.

Zaloguj się na netra1 (np `ssh *login*@netra1`). Utwórz własny katalog w /tmp/. Do katalogu skopiuj kod źródłowy programu. Skompiluj i uruchom program na netrze. Porównaj wyniki z lokalnymi.


## LinkedList
Korzystając ze `struct` i `malloc` zaimplementuj listę dwukierunkową przechowującą liczby (int).

Element listy powinien zawierać wskaźnik na następny element, wskaźnik na poprzedni element i wartość.

Lista powinna być reprezentowana przez wskaźnik na pierwszy i wskaźnik na ostatni element.

Zaimplementuj metody:
- `void add(Lista*, int)` dodającą element na koniec listy
- `void delete(Lista*, int)` - usuwającą element o danej wartości z listy
- `void print(const Lista*)` - wypisującą wszystkie wartości

Możesz również dodać metode `List* nowaLista()` inicjalizującą pustą listę.


# Zadania domowe (**UWAGA** są dwa!):

## LinkedList
Dokończ implementację LinkedList z zajęć. Popraw implementację metody remove. (0.5pkt)

Rozwiń rozwiązanie zadania LinkedList dodając metody:

1. `size` zwracającą rozmiar listy (0.5 pkt)
2. `reversed` tworzącą odwróconą listę (0.5 pkt)

## #define arraycpy
Napisz makro `arraycpy(source, target, length)`, które przepisze zawartość tablicy source do tablicy target. Załóż, że tablica target jest już zainicjalizowana.

Do kompilacji zamiast flagi `-ansi` użyj `-std=c99`, co pozwoli na zainicjowanie nowej zmiennej w "nagłówku" pętli `for`.
