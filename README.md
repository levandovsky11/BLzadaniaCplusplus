# BLzadaniaCplusplus

**BLzadaniaCplusplus** to repozytorium z rozwiązaniami zadań C++ powstającymi podczas wykładów i laboratoriów *Podstaw Programowania* (semestr letni 2024/2025).

## Struktura katalogów

Każdy folder odpowiada jednemu tematowi zajęć i zawiera **kilka plików źródłowych** `zadanie 1.cpp`, `zadanie 2.cpp`, … **każdy z nich ma własną funkcję `main()`**, więc można go uruchamiać niezależnie.

```
1 wyklad 1 1-03-2025/                    # pierwsze programy i konfiguracja środowiska
2 instrukcja warunkowa if/              # instrukcja "if"
3 instrukcja switch/                    # instrukcja "switch"
4 pętla while i do-while/               # pętle "while" i "do…while"
5 pętla for/                            # pętla "for"
6 zmienne tablicowe/                    # tablice statyczne
7 tablice znakowe i obiekty string/     # ciągi znaków i `std::string`
8 funkcje/                              # definicje i wywołania funkcji
9 rekurencja i przeciążenie funkcji/    # rekurencja, przeciążanie, inline
10 wskaźniki/                           # wskaźniki, arytmetyka adresów
11 struktury danych/                    # struct/class, typy złożone
12 operacje na plikach/                 # strumienie plikowe, `fstream`
```

## Wymagane oprogramowanie

- **Visual Studio 2022** z workloadem *Desktop development with C++* (MSVC + narzędzia).  
- **Git for Windows** (z terminalem **Git Bash**).

---

## Pobieranie repozytorium w Git Bash

```bash
# 1 / przejdź do wybranego katalogu
cd ~/Dokumenty/Studia

# 2 / sklonuj repo
git clone https://github.com/levandovsky11/BLzadaniaCplusplus.git

# 3 / wejdź do katalogu projektu
cd BLzadaniaCplusplus
```

---

## Tworzenie nowego projektu C++ w Visual Studio 2022

1. **File ► New ► Project…**  
2. Wyszukaj **Console App (C++)** i kliknij **Next**.  
3. Nadaj nazwę (np. *MojeZadanie*), wybierz lokalizację i kliknij **Create**.  
4. Pozostaw ustawienia domyślne (platforma *Windows*, standard *C++20*) i potwierdź **Create**.  
5. Visual Studio wygeneruje projekt z przykładowym plikiem `Source.cpp`.

---

## Wklejanie kodu z repozytorium

1. Otwórz wybrany plik, np. `8 funkcje/zadanie 3.cpp`, **skopiuj cały kod**.  
2. W projekcie Visual Studio otwórz `Source.cpp`, wklej zawartość i zapisz (**Ctrl + S**).  
3. Uruchom program skrótem **Ctrl + F5** (*Start without Debugging*).  

> **Tip:** Zamiast kopiować możesz dodać plik bezpośrednio: **Project ► Add Existing Item…**, wskazać `zadanie X.cpp`, a następnie **Set as Startup Project**.

---

## Automatyczne wysyłanie na GitHub – `gitbasz.sh`

```bash
./gitbasz.sh "Krótki opis zmiany"
```

* dodaje/aktualizuje wszystkie zmodyfikowane pliki,  
* tworzy commit z opisem **+ aktualną datą**,  
* wypycha zmiany na gałąź **main**.

Skrypt skraca cykl `git add` → `git commit` → `git push` do jednego polecenia. 🔄
