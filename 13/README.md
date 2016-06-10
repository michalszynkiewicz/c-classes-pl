# Zadania

## 1 Stos
Zaimplementuj stos.

Na jego podstawie napisz program, który będzie wczytywał polecenia postaci:

- `push ` *liczba* - wstawia liczbę na czubek stosu
- `pop` - wypisuje liczbę z czubka stosu i usuwa ją ze stosu (przesuwa czubek na poprzednią liczbę)
- `quit` - kończy działanie programu

### A Stała (maksymalna) wielkość stosu
Oprzyj implementację na tablicy o stałej wielkości.
### B Zmienna wielkość stosu
Dynamicznie przydziel pamięć dla stosu.


## 2 Pochodna
Napisz program, który obliczy wartość pochodnej wielomianu w danym punkcie.

Pierwszy wiersz zawiera liczbę zmiennoprzecinkową *x* - zmienną, dla której liczymy wartośc pochodnej,

Drugi wiersz wejścia zawiera liczbę *n* - stopień wielomianu.

Dalej wejście zawiera *n+1* (zmiennoprzecinkowych) współczynników wielomianu w kolejności od najwyższej potęgi do najniższej.

Np.

Wejście (dla wielomianu: *5x<sup>2</sup> + 8x + 3*):
```
1.0
3
5 8 3
```

Wyjście:
```
18
```


## 3 Wypukłe wielokąty
Napisz program sprawdzający czy dany wielokąt jest wypukły.

Pierwsza linia będzie zawierać liczbę *n ≥ 3* - liczbę kątów wielokąta.
Druga linia będzie zawierać *n* par liczb *x<sub>i</sub> y<sub>i</sub>* - współrzędnych wierzchołków, w kolejności występowania w wielokącie.
