# BST
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
