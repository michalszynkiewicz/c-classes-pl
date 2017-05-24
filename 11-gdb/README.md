# Debugowanie

Moje notatki n/t gdb:
https://programmingnotepad.wordpress.com/2015/05/17/221/

Wikibooks o gdb:
https://pl.wikibooks.org/wiki/Programowanie_w_systemie_UNIX/gdb

Wikibooks o gprof:
https://pl.wikibooks.org/wiki/Programowanie_w_systemie_UNIX/gprof

# Zadania
## 01
Skompiluj przykład `01-...` z opdowiednią flagą i uruchom go w `gdb`.
Ustaw pułapkę (breakpoint) na linii 11 i przejdź przez program sprawdzając w każdej linii jaka jest wartość zmiennej `result`.

## 02
Korzystając z `gdb` znajdź błędy w programach `02-...` i `03-...`. Popraw programy.

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
