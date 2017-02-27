# 1. Wspólne zadanie

Napisać program, który wczyta ze standardowego wejścia liczbę całkowitą `a` i liczbę zmiennoprzecinkową `b` i wypisze iloczyn tych liczb w trzech formach:
* część całowitą iloczynu
* dokładny iloczyn w notacji naukowej
* dokładny iloczyn w notacji standardowej

# 2. Przeanalizuj przykłady w tym katalogu

# 3. Zadania

## A Konwersja

Napisz program, który wczyta liczbę zapisaną ósemkowo i wypisze ją w zapisie dziesiętnym.

## B Choinka

Napisz program, który wczyta ze standardowego wejścia liczbę `n`, a następnie narysuje choinkę o `n` poziomach (patrz przykład poniżej).

    Wejście: 4

    Wyjście:

       *
      ***
     *****
    *******
       #


## C XML

Napisz program, który w XLM-owym dokumencie wczytanym ze standardowego wejścia znajdzie wszystkie wystąpienia elementu `<height>` i wypisze jego wartość.

**UWAGA** W tym zadaniu zakładamy, że:
* tag otwierający, wartość elementu i tag zamykający są w jednej linii
* tag zawiera tylko nazwę elementu (nie zawiera atrybutów i białych znaków)

Do wyszukiwania możesz użyć metody `strstr` ze `string.h`: http://www.cplusplus.com/reference/cstring/strstr/

Dokumenty XML mają następującą postać:

```xml
<root>
  <element atrybut="wartoscAtrybutu">wartość elementu</element>
  <element2>
    <innyElement atrybutA="1"/>
  </element2>
</root>
```

Np.

Dla wejścia:
```xml
<animals>
  <elephant>
    <width>5</width>
    <height>12</height>
  </elephant>
  <dog>
    <width>1</width>
    <height>2</height>
  </dog>
</animals>
```
Wypisze:

```bash
12
1
```

## D

Zmień powyższy program tak, aby:
1. działał również dla elementów, które oprócz wartości mają jakieś atrybuty
2. przyjmował jako parametr wywołania nazwę elementu do odnalezienia.

Np.

Dla wywołania:
`./a.out name`
i wejścia:
```xml
<animals>
  <elephant>
    <name type="first">Benjamin</name>
    <width>5</width>
    <height>12</height>
  </elephant>
  <dog>
    <name type="last">Droopy</name>
    <width>1</width>
    <height>2</height>
  </dog>
</animals>
```

Wypisze:
```
Benjamin
Droopy
```

# Zadanie domowe - k-ty element
Napisz program, który wczyta ze standardowego wejścia:
 - liczby naturalne `n` &le; 100000 i `k`
 - ciąg `n` liczb całkowitych, które mogą być podane szestnastkowo, dziesiątkowo, ósemkowo.

i wypisze na ekran:
 - `k`-ty co do wielkości element ciągu, jeśli `k` &le; `n`
 - "BŁĄD: ciąg liczy tylko <wartość liczby `n`> elementów", w przeciwnym przypadku

Długość ciągu nie będzie przekraczała 100000 elementów.

**Wskazówka:** możesz użyć funkcji `qsort`: https://en.wikipedia.org/wiki/Qsort

Np.
Dla wejścia:
```
5 3
12 0x43 84 9 020
```
Wyjście:
```
16
```


Dla wejścia:
```
10 1
100 200 132 4234 45 234 45 23 345 1000
```
Wyjście:
```
23
```


Dla wejścia:
```
10 11
100 200 132 4234 45 234 45 23 345 1000
```
Wyjście:
```
BŁĄD: ciąg liczy tylko 10 elementów
```
