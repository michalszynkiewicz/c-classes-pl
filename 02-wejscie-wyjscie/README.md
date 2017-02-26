# 1. Wspólne zadanie

Napisać program, który wczyta ze standardowego wejścia liczbę całkowitą `a` i liczbę zmiennoprzecinkową `b` i wypisze iloczyn tych liczb w trzech formach:
* część całowitą iloczynu
* dokładny iloczyn w notacji naukowej
* dokładny iloczyn w notacji standardowej

# 2. Przeanalizuj przykłady w tym katalogu

# 3. Zadania

## A Konwersja

Napisz program, który wczyta liczbę zapisaną ósemkowo i wypisze ją w zapisie dziesiętnym

## B Liczba bitów

Napisz program, który wczyta ze standardowego wejścia liczbę całkowitą i wypisze liczbę jedynek w jej rozwinięciu bitowym.

Do rozwiązania tego zadania należy użyć operatorów bitowych (np `<<`, `>>`, `|`, `&`)

Np dla wejścia `5` wypisze: `2`, bo (5 = (101)<sub>2</sub>)


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

# Zadanie domowe
Napisz program, który wczyta ze standardowego wejścia liczbę `n`, a następnie narysuje choinkę o `n` poziomach (patrz przykład poniżej).

    Wejście: 4

    Wyjście:

       *
      ***
     *****
    *******
       #
