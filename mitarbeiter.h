// created by Tim Meusel

# pragma once

#include "tmitarbeiter.h"

/* Name: mitarbeiterEinlesen
Zweck: Mitarbeiterdaten von Tastatur einlesen und zurückgeben
IN: -
OUT: -
IN/OUT -
RETURN: eingelesenes Mitarbeiter-Objekt */
tMitarbeiter mitarbeiterEinlesen(void);

/* Name: mitarbeiterHinzufuegen
Zweck: fügt einen neuen Mitarbeiter in die Liste ein
IN: Anzahl der bisher gespeicherten Mitarbeiter
neuer Mitarbeiter
OUT: -
IN/OUT Mitarbeiterliste
RETURN: neue Mitarbeiter-Anzahl */
int mitarbeiterHinzufuegen(int mitarbeiterAnzahl, tMitarbeiter neuerMitarbeiter, tMitarbeiter mitarbeiterListe[]);

/* Name: mitarbeiterNachIDSuchen
Zweck: sucht einen Mitarbeiter in der Liste nach ID
IN: Mitarbeiterliste
Anzahl Mitarbeiter
Such-ID
OUT: -
IN/OUT -
RETURN: Index des gefundenen Elements. Wenn nicht gefunden: -1*/
int mitarbeiterNachIDSuchen(int mitarbeiterAnzahl, tMitarbeiter mitarbeiterListe[], int suchID);

/* Name:summeGehalt
Zweck: Berechnet die Summe der Mitarbeitergehälter
IN: Mitarbeiterliste
Anzahl der Mitarbeiter
OUT: -
IN/OUT -
RETURN: Summe der Gehälter */
float summeGehalt(int mitarbeiterAnzahl, tMitarbeiter mitarbeiterListe[]);

/* Name: maxMitarbeiterID
Zweck: Bestimmt die größte bisher vergebene Mitarbeiter ID
IN: Mitarbeiterliste
Anzahl der MItarbeiter
OUT: -
IN/OUT -
RETURN: Max. ID */
int maxMitarbeiterID(int mitarbeiterAnzahl, tMitarbeiter mitarbeiterListe[]);

/* Name: splitString
Zweck: Liefert den Teil einer Zeichenkette von einem Startindex aus bis zu 
einem Trennzeichen
IN: Quellzeichenkette
Startindex
Trennzeichen
OUT: Teilzeichenkette
IN/OUT -
RETURN: Index des Zeichens nach dem Trennzeichen */
int splitString(char zeichenkette[], int index, char trennzeichen);

/* Name: sortiereMitarbeiterNachGehalt
Zweck: Aufsteigend sortieren
IN: Anzahl MItarbeiter
OUT: -
IN/OUT Mitarbeiterliste
RETURN: - */
void sortiereMitarbeiterNachGehalt(int mitarbeiterAnzahl, tMitarbeiter mitarbeiterListe[]);

/* Name: mitarbeiterListeAusgeben
Zweck: ueber Liste iterieren und ausgeben
IN: Anzahl Mitarbeiter
OUT: -
IN/OUT: Mitarbeiterliste
RETURN: - */
void mitarbeiterlisteAusgeben (tMitarbeiter mitarbeiterListe[], int anzahl);

/* Name: bubbelSort
Zweck: structs umsortieren
IN: mitarbeiterAnzahl
OUT:
IN/OUT: mitarbeiterListe
RETURN: - */
void bubbleSort(int mitarbeiterAnzahl, tMitarbeiter mitarbeiterListe[]);

/* Name: quickSort
Zweck: structs umsortieren
IN:mitarbeiterAnzahl
OUT:
IN/OUT: mitarbeiterListe
RETURN: - */
void quickSort(int mitarbeiterAnzahl, tMitarbeiter mitarbeiterListe[]);
