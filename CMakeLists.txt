cmake_minimum_required(VERSION 3.27)
project(Praktische_Übungen C)

set(CMAKE_C_STANDARD 11)

add_executable(Praktische_Übungen Vorlesung2/Funktionsdeklaration/main.c
        Vorlesung1/Ausdrücke/main.c
        "Praktikum5/SortierenVonStrings.c"
        "Vorlesung1/Formatiertem Output/main.c"
        Vorlesung1/Aufzählungstyp/main.c
        Vorlesung1/Strukturen/main.c
        Vorlesung2/Rückgabewert/main.c
        "Vorlesung2/Lokale Variablen/main.c"
        "Vorlesung2/Globale statische Variabeln/main.c"
        "Vorlesung3/Präprozessor define/main.c"
        zPrüfung2020/2d/inverse_2d.c
        zPrüfung2020/3a/modula_3a.c
        zPrüfung2020/3b/3b.c
        zPrüfung2020/4a/4a.c
        zPrüfung2020/6/6.c
        "Vorlesung4_Arrays_Pointers/Arrays_Konstante Elemente/main.c"
        Vorlesung4_Arrays_Pointers/String/char_arrays/main.c
        Vorlesung4_Arrays_Pointers/String/char_arrays/main2.c
        Vorlesung4_Arrays_Pointers/Pointers/main.c
        "Vorlesung5_Pointers_und_Arrays/Rechnen mit adressen/main.c"
        "Vorlesung5_Pointers_und_Arrays/Operation mit Pointern/main.c"
        Vorlesung5_Pointers_und_Arrays/Jagged_Array/main.c
        Vorlesung5_Speicher/Heap_Malloc/main.c
        zPrüfung2020/main.c
        "Vorlesung 6_Parameter by reference/Rückgabewert_Heap speicher/main.c"
        "Vorlesung 6_Parameter by reference/Array Pointers als Parameter/main.c"
        "Tutorials/Arrays/einfaches array/main.c"
        "Tutorials/Pointers/einfacher pointer/main.c"
        Test/main.c
        zPrüfung2012/2/main.c
        zPrüfung2012/4/main.c
        "Zusammenfassung/Array/Arrays char.c"
        "Zusammenfassung/Array/Array char ausgaben.c"
        "Zusammenfassung/Array und Pointer/int Array und Pointer Speicheradressen.c"
        "Zusammenfassung/Array und Pointer/char Array und Pointer Speicheradressen.c"
        Zusammenfassung/Ausgaben/ausgaben.c
        "Zusammenfassung/Array und Pointer/char Array und Pointer Arithmetik.c"
        "Zusammenfassung/Array und Pointer/funktionen/funktion Pointer parameter inverse berechen.c"
        "Zusammenfassung/Array und Pointer/char Array und Pointer groessen berechnen.c"
        "Zusammenfassung/Array und Pointer/funktionen/funktion Pointer parameter primzahl berechnen.c"
        "Zusammenfassung/Array/Array int.c"
        "Zusammenfassung/Array/funktionen/funktion array primzahl berechnen.c"
        "Zusammenfassung/Pointer/Int Pointer Arithmetik.c"
        "Zusammenfassung/Modulo/modulo zwei letzten zahlen herausfinden.c"
        "Zusammenfassung/Modulo/modulo schaltjahre berechnen.c"
        "Zusammenfassung/Modulo/modulo primzahlrechner.c"
        "Zusammenfassung/Modulo/modulo Wochentagrechner.c"
)
