# Zadania

## DFS
Wczytaj definicję grafu ze standardowego wejścia i wypisz wierzchołki grafu w kolejności odwiedzania przez algorytm DFS (depth-first search, przeszukiwanie w głąb).

https://pl.wikipedia.org/wiki/Przeszukiwanie_w_g%C5%82%C4%85b


Struktura reprezentująca wierzchołek grafu może mieć postać:
```c
typedef struct Vertex {
  struct Vertex* neighbors;
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

## BFS
Dla tej samej reprezentacji grafu napisz wypisywanie wierzchołków w kolejności odwiedzania przez algorytm BFS

https://pl.wikipedia.org/wiki/Przeszukiwanie_wszerz

# Zadanie: punkty współliniowe
Napisz program, który wczyta ze standardowego wejścia współrzędne 3 punktów i zwróci `TAK` jeśli leżą one na tej samej proste i `NIE` w przeciwnym przypadku.

Przykładowe wejście:
```
1 3
2 6
3 9
```

Wyjście dla w/w wejścia:
```
TAK
```

*Wskazówka*
Możesz np obliczyć współczynniki kierunkowe prostych przebiegających przez punkty A i B oraz A i C i je porównać

**Pamiętaj**, jeśli masz problem z rozwiązaniem zadania, pisz!
