# Zadania

## Nawiasowanie
Napisz program, który sprawdzi czy dane nawiasowanie jest poprawne (nawiasy otwierające odpowiadają zamykającym) i wypisze TAK lub NIE.
Do nawiasowania będą używane 3 rodzaje nawiasów: '(', ')'; '[', ']'; '{', '}'

Np:

Wejście:

```
(([]){}()[])
```

Wyjście:
```
TAK
```


Wejście:

```
([]){}()[])
```

Wyjście:
```
NIE
```

Wejście:

```
)({[]}())
```

Wyjście:
```
NIE
```


Wejście:

```
(])()(){}{}[([])]
```

Wyjście:
```
NIE
```

## Wyjście z labiryntu

Dana jest definicja labiryntu w postaci dwuwymiarowej tablicy zawierającej zera i jedynki (1 - ścieżka, 0 - ściana) oraz punkt startowy (a, b) i punkt końcowy (x, y).

Z jednego pola ze ścieżką można przechodzić tylko na inne pole ze ścieżką, które znajduje się na górze, na dole lub na bok od danego pola.

Napisz program, który sprawdzi, czy możliwe jest osiągnięcie punktu końcowego z punktu startowego i wypisze TAK lub NIE.

Np:

Wejście:
```
5
5
00000
01000
01100
00110
00011
1 1
5 5
```

Wyjście:
```
TAK
```


Wejście:
```
5
5
10000
01000
01100
00110
00011
1 1
0 0
```

Wyjście:
```
NIE
```
