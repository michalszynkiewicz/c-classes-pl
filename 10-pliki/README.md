# Kolokwium na następnych zajęciach

# Pliki: czytanie i pisanie
Do otwierania pliku używamy `fopen`: https://pl.wikibooks.org/wiki/C/fopen
Należy pamiętać żeby zamknąć plik (`fclose`).

Do czytania i pisania można używać `fscanf` i `fprintf` analogicznych do `scanf` i `printf` (https://pl.wikibooks.org/wiki/C/scanf i https://pl.wikibooks.org/wiki/C/printf).

Aby przeczytać/wypisać cały wiersz można użyć `fgets`/`fputs` (https://pl.wikibooks.org/wiki/C/fgets, https://pl.wikibooks.org/wiki/C/fputs)

Do odczytu/zapisu plików binarnych lepiej użyć `fread`/`fwrite` (https://pl.wikibooks.org/wiki/C/fread i https://pl.wikibooks.org/wiki/C/fwrite)


# Zadania
## tee
Napisz program, który wczyta linia po linii tekst ze standardowego wejścia, wypisze tekst na standardowe wejście i dodatkowo wypisze do pliku podanego jako argument wywołania programu.


Np dla wywołania:
```bash
./a.out /tmp/out
```
będzie pobierał ze stdin kolejne linie tekstu i wypisywał na ekran i do pliku `/tmp/out`

Zaś jeśli dany mamy plik `in.txt` o następującej treści:
```
pierwsza linia
druga linia
```
i wywołamy:
```bash
cat in.txt | ./a.out out.tx
```
program powinien wypisać na standardowe wyjście:
```
pierwsza linia
druga linia
```
a zawartość pliku in.txt powinna być identyczna z out.txt.

## simple cp
Napisz program kopiujący pliki.

Dla wywołania:
```
./a.out plik1 plik2
```
program ma utworzyć `plik2` i skopiować do niego zawartość `plik1`.

Program ma działać poprawnie również dla plików binarnych.

# Dodatkowe zadanie domowe

Punkty za nie **nie wliczają się** do maksymalnej ilości punktów do zdobycia

## cp (1 punkt)
Do w/w programu dodaj zachowywanie uprawnień do pliku.
