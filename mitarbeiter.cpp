// created by Tim Meusel

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
  std::cout << "Gehalt: ";
  std::cin >> neuerMitarbeiter.gehalt;
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
  float gehalt = 0;
  for(int i = 0; i <= mitarbeiterAnzahl; i++)
  {
    gehalt += mitarbeiterListe[i].gehalt;
  }
  return gehalt;
}

int maxMitarbeiterID(int mitarbeiterAnzahl, tMitarbeiter mitarbeiterListe[])
{
  int mitarbeiterID = 0;
  for(int i = 0; i <= mitarbeiterAnzahl; i++)
  {
    if(mitarbeiterListe[i].id > mitarbeiterID)
    {
      mitarbeiterID = mitarbeiterListe[i].id;
    }
  }
  return mitarbeiterID;
}

int splitString(char zeichenkette[], int index, char trennzeichen)
{

}

void sortiereMitarbeiterNachGehalt(int mitarbeiterAnzahl, tMitarbeiter mitarbeiterListe[])
{

}
