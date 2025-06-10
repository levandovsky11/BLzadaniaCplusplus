# Bartłomiej Lewandowski zadania w C plus plus

**w skrócie BLzadaniaCplusplus** to repozytorium z rozwiązanymi zadaniami z C++, które powstały podczas wykładów i laboratoriów *Podstawy programowania C++* (semestr letni 2024/2025).

## Struktura katalogów

Każdy folder odpowiada jednemu tematowi zajęć i zawiera **kilka plików źródłowych** 
np. `zadanie 1.cpp`, `zadanie 2.cpp`, … **każdy z nich ma własną funkcję `main()`**, więc można je uruchamiać niezależnie.

```
1 wyklad 1 1-03-2025/                   # pierwsze programy z zajęć i konfiguracja środowiska
2 instrukcja warunkowa if/              # Instrukcja warunkowa if
3 instrukcja switch/                    # instrukcja switch
4 pętla while i do-while/               # pętle while i do-while
5 pętla for/                            # pętla for
6 zmienne tablicowe/                    # tablice statyczne
7 tablice znakowe i obiekty string/     # tablice znakowe i obiekty string
8 funkcje/                              # definicje i wywołania funkcji
9 rekurencja i przeciążenie funkcji/    # rekurencja, przeciążanie, inline
10 wskaźniki/                           # wskaźniki, arytmetyka adresów
11 struktury danych/                    # struct/class, typy złożone
12 operacje na plikach/                 # strumienie plikowe, `fstream`
```

## Wymagane oprogramowanie

- **Visual Studio 2022** z zainstalowaną możliwością tworzenia projektów w konsolii (*Console App (C++) [https://visualstudio.microsoft.com/pl/downloads/]
- **Git Bash for Windows** [https://git-scm.com/downloads]

---

## Pobieranie repozytorium w Git Bash

```bash
# 1 / przejdź do wybranego katalogu
cd ~/Dokumenty/NaszWybranyFolderNaNpStudia

# 2 / sklonuj repo
git clone https://github.com/levandovsky11/BLzadaniaCplusplus.git

# 3 / wejdź do katalogu projektu żeby się upewnić, że zadziałało :)
cd BLzadaniaCplusplus
```

---

## Tworzenie nowego projektu C++ w Visual Studio 2022

1. **File ► New ► Project…**  
2. Wyszukaj **Console App (C++)** i kliknij **Next**.  
3. Nadaj nazwę (np. *MojeSciagiOdBartka*), wybierz lokalizację i kliknij **Create**.  
4. Pozostaw ustawienia domyślne (platforma *Windows*, standard *C++20*) i potwierdź **Create**.  
5. Visual Studio wygeneruje projekt z przykładowym plikiem `.cpp`.

---

## Wklejanie kodu z repozytorium

1. Otwórz wybrany plik, np. `8 funkcje/zadanie 3.cpp`, **i skopiuj cały kod**.  
2. W projekcie Visual Studio otwórz `nazwaTwojegoProjektu.cpp`, wklej zawartość i zapisz (**Ctrl + S**).  
3. Uruchom program skrótem **Ctrl + F5** (czyli *Start without Debugging*).  

> **Tip:** Zamiast kopiować możesz również dodać plik bezpośrednio: **Project ► Add Existing Item…**, wskazać `zadanie X.cpp`, a następnie **Set as Startup Project**.

---

## 🌵 BONUS: Automatyczne wysyłanie na GitHub – `gitbasz.sh` 🌵

```w bash'u:
./gitbasz.sh
```

* dodaje/aktualizuje wszystkie zmodyfikowane pliki,  
* tworzy commit z opisem jako **aktualną datę**,  
* wypycha zmiany na gałąź **main**.

Dzięki temu zamiast wpisywać osobno `git add` → `git commit` → `git push` wystarczy użyć jedno polecenie w konsoli.
