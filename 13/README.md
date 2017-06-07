# Zadania
## 1 Rezerwacja sal
Napisz program, który obliczy jaka jest minimalna liczba sal potrzebnych do przeprowadzania zadanych zajęć.

Wejście będzie zawierało liczbę *n* - liczbę zajęć, a następnie *n* par *(start<sub>i</sub>, end<sub>i</sub>)*, oznaczających czas początku i końca zajęć.

Wyjście powinno zawierać jedną liczbę - minimalną ilość sal potrzebnych do przeprowadzenia zajęć tak, by żadne dwa odbywające się w tej samej sali nie nachodziły na siebie.

Np. dla wejścia:
```
5
4 5
5 6
0 1
0 2
1 3
```
Wyjście to:
```
2
```
bo w przedziale czasu (0, 1) oraz (1, 2) dwa zajęcia odbywają się równocześnie.

## 2 Wypukłe wielokąty
Napisz program sprawdzający czy dany wielokąt jest wypukły.

Pierwsza linia będzie zawierać liczbę *n ≥ 3* - liczbę kątów wielokąta.
Druga linia będzie zawierać *n* par liczb *x<sub>i</sub> y<sub>i</sub>* - współrzędnych wierzchołków, w kolejności występowania w wielokącie.
