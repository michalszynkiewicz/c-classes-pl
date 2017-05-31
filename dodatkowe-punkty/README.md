# Miejsce zerowe  (3 punkty)
Napisz program, który wczyta funkcję zmiennej `x` i znajdzie jej miejsce zerowe metodą bisekcji.

W wyrażeniu dozwolone `+`, `-`, `*`, `/`

Pierwsza linia wejścia zawierać będzie funkcję, np:
`x*x + 1/x`

Druga linia będzie zawierała 3 liczby zmiennoprzecinkowe: *a*, *b*, *epsilon*.

Program ma znaleźć miejsce zerowe funkcji w przedziale *<a, b>* z dokładnością do *epsilon*.

To jest znaleźć *x<sub>0</sub> &isin; [a, b]* takie, że

*|f(x<sub>0</sub>)| < epsilon*

## Rozwinięcie (dodatkowe 2 pkt)
Dodaj obsługę `^` - potęgowanie oraz jednoargumentowe: `sin`, `cos` (działające na radianach), np

```2^x + sin(x)```

# Labirynt (3 punkty)
Napisz program, który wczyta ze standardowego wejścia labirynt i wypisze sekwencje ruchów potrzebną do wyjścia z niego.

Na wejściu program dostanie:
 - liczby *m* i *n* - wymiary labiryntu
 - *m* linii po *n* znaków - mapę labiryntu. Jednym z pól mapy będzie znak `0` - aktualna pozycja w labiryncie,
 jednym będzie znak `X` - wyjście z labiryntu (może być w środku mapy!). Pozostałe znaki to albo spacje - pola przez
 które można przejść, albo `#` - ściany.

 Wyjście powinno zawierać ciąg znaków `N`, `E`, `W`, `S` oznaczających odpowiednio przejście w górę, w prawo, w lewo lub w dół.
 **UWAGA** w niektórych przypadkach może być wiele poprawnych rozwiązań tego problemu.
 Program może zwracać jakiekolwiek poprawne rozwiązanie. Jedynym warunkiem jest by żadne pole nie zostało odwiedzone wielokrotnie.

 Np dla wejścia:

 ```
 #########
 ###0   ##
 ###### ##
 ######X##
 #########
 ```
 Wyjście powinno zawierać:
 ```
 EEESS
 ```
