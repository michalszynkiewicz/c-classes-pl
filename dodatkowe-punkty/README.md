# ~~BST~~
Zaimplementuj drzewo wyszukiwań binarnych dla tekstów.

Węzeł drzewa może mieć postać:
```c
typedef struct Node {
  struct Node* left;
  struct Node* right;
  char* value;
} node;
```

Zaimplementuj metody (1 pkt za każdą):

 - `void add(const char* text)` - dodającą węzeł o zadanej wartości do drzewa
 - `void delete(const char* text)` - usuwającą węzeł o zadanej wartości z drzewa
 - `void print()` - wypisującą wszystkie wartości dodane do drzewa w porządku leksykograficznym
 - `int contains(const char* text)` - zwracającą `1` jeśli wartość jest w drzewie, `0` w p.p.
 - `char* min()` - zwracającą *najmniejszy* leksykograficznie element drzewa

Wyważanie drzewa: 2 pkt (AVL lub czerwono-czarne).

# Miejsce zerowe  (3 punkty)
Napisz program, który wczyta funkcję zmiennej `x` i znajdzie jej miejsce zerowe metodą bisekcji.

W wyrażeniu dozwolone `+`, `-`, `*`, `/`

Pierwsza linia wejścia zawierać będzie funkcję, np:
`x*x + 1/x`

Druga linia będzie zawierała 3 liczby zmiennoprzecinkowe: *a*, *b*, *epsilon*.

Program ma znaleźć miejsce zerowe funkcji w przedziale *<a, b>* z dokładnością do *epsilon*.

To jest znaleźć *x<sub>0</sub> &isin; [a, b]* takie, że

*|f(x<sub>0</sub>)| < epsilon*

## Rozwinięcie (dodatkowe 2 pkt)
Dodaj obsługę `^` - potęgowanie oraz jednoargumentowe: `sin`, `cos` (działające na radianach), np

```2^x + sin(x)```
