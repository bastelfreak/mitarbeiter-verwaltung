// created by Tim Meusel

# pragma once

#include "mitarbeiter.h"
#include <iostream>

tMitarbeiter mitarbeiterEinlesen(void)
{
  tMitarbeiter neuerMitarbeiter;
  std::cout << "Nachname: ";
  std::cin >> neuerMitarbeiter.nachname;
  std::cout << "Vorname: ";
  std::cin >> neuerMitarbeiter.vorname;
  std::cout << "ID: ";
  std::cin >> neuerMitarbeiter.id;
  return neuerMitarbeiter;
}

int mitarbeiterHinzufuegen(int mitarbeiterAnzahl, tMitarbeiter neuerMitarbeiter, tMitarbeiter mitarbeiterListe[])
{
  mitarbeiterListe[mitarbeiterAnzahl] = neuerMitarbeiter;
  return mitarbeiterAnzahl + 1;
}

int mitarbeiterNachIDSuchen(int mitarbeiterAnzahl, tMitarbeiter mitarbeiterListe[], int suchID)
{
  int mitarbeiterID = -1;
  for(int i = 0; i <= mitarbeiterAnzahl; i++)
  {
    if (mitarbeiterListe[i].id = suchID)
    {
      mitarbeiterID = suchID;
    }
  }
  return mitarbeiterID;
}

float summeGehalt(int mitarbeiterAnzahl, tMitarbeiter mitarbeiterListe[])
{

}

int maxMitarbeiterID(int mitarbeiterAnzahl, tMitarbeiter mitarbeiterListe[])
{

}

int splitString(char zeichenkette[], int index, char trennzeichen)
{

}

void sortiereMitarbeiterNachGehalt(int mitarbeiterAnzahl, tMitarbeiter mitarbeiterListe[])
{

}