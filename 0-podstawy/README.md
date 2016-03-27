**1**. Napisz program, który
  - będzie miał zadeklarowaną zmienną zmiennoprzecinkową (typu double) zainicjalizowaną na wartość 3.14
  - wypisze wartość tej zmiennej na ekran

**2**. Uzupełnij poniższy kod programu tak, by obliczał sumę liczb od *1* do *n*:

```c
#include <stdio.h>

int main(){
  /* tu zadeklaruj zmienne */

  scanf("%d", &n);
  for (i = 1; i<=n; i++) {
    suma = /* tu wstaw odpowiednie wyrażenie */;
  }
  printf("suma liczb to: %d.\n", /* tu wstaw odpowiednią zmienną */);

  return 0;
}

```

**3**. Zmień powyższy program tak, żeby obliczał *n!* (iloczyn elemtnów od *1* do *n*)

**4**. Napisz program, który wczyta dwie liczby *a* i *b* i wypisze ich sumę (*a+b*).

**5**. Zadania na pętle: http://www.cs.put.poznan.pl/arybarczyk/7.pdf

**6** Napisz program, który wczyta liczbę od użytkownika i wpisze TAK jeśli jest pierwszą,  nie w p.p.

**7** Napisz program, który w pętli wczyta liczbę `n` i:
- jeśli jest pierwszą - zakończy się 
- jeśli jest złożoną - wczytać nastepna liczbę i sprawdzi czy jest pierwszą. 
Program powinien działać dopóki użytkownik nie wprowadzi liczby pierwszej.

*wskazówka 1* utwórz funkcję sprawdzająca czy liczba jest pierwsza korzystając z rozwiązania zad. 6.

*wskazówka 2* wykorzystaj petle do-while
