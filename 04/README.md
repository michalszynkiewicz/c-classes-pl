# Zadania

## 1. Min i max
Napisz program, który wczyta ciąg liczb (`int`ów) ze standardowego wejścia i wypisze największą i najmniejszą z nich.
Wejście będzie składało się z dwóch wierszy. W pierwszym będzie *t* - liczba elementów ciągu, w drugim - *t* elementów ciągu.

Np.

Wejście:
```
5
1 24 5345 2 -10
```

Wyjście:
```
Min: -10  Max: 5345
```


## 2. Dwa składniki o zadanej sumie
Napisz program, który dla zadanej liczby *n* i ciągu liczb *a<sub>0</sub>, a<sub>1</sub> ,... ,a<sub>t</sub>* znajdzie dwa elementy *a<sub>i</sub>, a<sub>j</sub>* takie, że *a<sub>i</sub> + a<sub>j</sub> = n*.

Wejście programu będzie miało dwie linie, w pierwszej będzie podana liczba *n* i liczba wyrazów ciągu *t*.
W drugiej linii będzie podanych *t* elementów ciągu.

Np.

Wejście:
```
10 4
1 7 8 2
```
Wyjście:
```
8 2
```
Kolejność liczb na wyjściu jest dowolna.

## 3 Dwa składniki o zadanej sumie
Napisz program, który dla zadanej liczby *n* i **rosnącego** ciągu liczb *a<sub>0</sub>, a<sub>1</sub> ,... ,a<sub>t</sub>* znajdzie dwa elementy *a<sub>i</sub>, a<sub>j</sub>* takie, że *a<sub>i</sub> + a<sub>j</sub> = n*.

Wejście programu ma być takie jak w *2*, z tą różnicą, że ciąg jest posortowany. 

Program powinien działac szybciej niż dla ogólnego przypadku.

## 4 Hanoi
Napisz program rozwiązujący problem wież Hanoi:

>Dane są 3 słupki: 0, 1 i 2, na których możemy układać krążki.
Krążki mają różną wielkość. Krążek można położyć na pusty słupek lub na większy krążek.
>
>Początkowo wszystkie krążki są ułożone na słupku 0. Celem jest przełożenie wszytkich krążków na słupek 2</quote>

Program powinien wczytać liczbę krążków i wypisać sekwencję *ruchów* ("przełożeń") potrzebną do przełożenia wszystkich krążków ze słupka 0 na słupek 2.

Np dla wejście:
```
2
```
Wyjście:
```
0 -> 1
0 -> 2
1 -> 2
```

Wejście:
```
4
```
Wyjście:
```
0 -> 1
0 -> 2
1 -> 2
0 -> 1
2 -> 0
2 -> 1
0 -> 1
0 -> 2
1 -> 2
1 -> 0
2 -> 0
1 -> 2
0 -> 1
0 -> 2
1 -> 2

```

# Zadanie domowe
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
