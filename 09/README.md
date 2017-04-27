# Kolokwium za 2 tygodnie

# Zadania

## DFS
Wczytaj definicję grafu ze standardowego wejścia i wypisz wierzchołki grafu w kolejności odwiedzania przez algorytm DFS (depth-first search, przeszukiwanie w głąb).

https://pl.wikipedia.org/wiki/Przeszukiwanie_w_g%C5%82%C4%85b


Struktura reprezentująca wierzchołek grafu może mieć postać:
```c
typedef struct Vertex {
  struct Vertex** neighbors;
  int neighborsSize;
  int num;
  int visited;
} vertex;
```

Wejście programu:
```
liczba_węzłów
liczba_sąsiadów_węzła_0
sąsiad_0
sąsiad_1
sąsiad_2
...
liczba_sąsiadów_węzła_1
sąsiad_0
sąsiad_1
sąsiad_2
...

```

Np dla wejścia:
```
3
1
2
0
0
```

Wyjście to:
```
2 0
```

A dla wejścia:
```
4
1 1
1 2
1 3
1 0
```
Wyjście:
```
3
2
1
0
```

## BFS
Dla tej samej reprezentacji grafu napisz wypisywanie wierzchołków w kolejności odwiedzania przez algorytm BFS

https://pl.wikipedia.org/wiki/Przeszukiwanie_wszerz

# Zadanie domowe: BST
Zaimplementuj drzewo wyszukiwań binarnych dla tekstu. Powtarzające się wartości powinny być ignorowane (przechowujemy tylko jeden egzemplarz).
Węzeł drzewa może mieć postać:
```c
typedef struct Node {
  struct Node* left;
  struct Node* right;
  char* value;
} node;
```

Drzewo może być reprezentowane jako korzeń (węzeł "włożony" do niego jako pierwszy).
Do inicjalizacji węzła z zadaną wartością (a zatem i drzewa jednelementowego), możesz napisać metodę `Node* newNode(const char* value)`

Zaimplementuj metody (0.5 pkt za każdą):

 - `void add(node *tree, const char* text)` - dodającą węzeł o zadanej wartości do drzewa
 - `void print(node *tree)` - wypisującą wszystkie wartości dodane do drzewa w porządku leksykograficznym
 - `int contains(node *tree, const char* text)` - zwracającą `1` jeśli wartość jest w drzewie, `0` w p.p.

Np dla main:
```
Node *tree = newNode("aaa");
add(tree, "adfg");
add(tree, "gf");
print(tree);
add(tree, "xvc");
add(tree, "sdfv");
printf(contains(tree, "asdf") ? "TAK\n": "NIE\n");
printf(contains(tree, "adfg") ? "TAK\n": "NIE\n");
printf(contains(tree, "xvc") ? "TAK\n": "NIE\n");
print(tree);

```
Wyjście:
```
aaa adfg gf
NIE
TAK
TAK
aaa adfg gf sdfv xvc 
```
