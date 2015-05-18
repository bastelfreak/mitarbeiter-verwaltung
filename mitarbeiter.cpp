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
  for(int i = 0; i < mitarbeiterAnzahl; i++)
  {
    if(mitarbeiterListe[i].id == suchID)
    {
      mitarbeiterID = i;
    }
  }
  return mitarbeiterID;
}

float summeGehalt(int mitarbeiterAnzahl, tMitarbeiter mitarbeiterListe[])
{
  float gehalt = 0;
  for(int i = 0; i < mitarbeiterAnzahl; i++)
  {
    gehalt += mitarbeiterListe[i].gehalt;
  }
  return gehalt;
}

int maxMitarbeiterID(int mitarbeiterAnzahl, tMitarbeiter mitarbeiterListe[])
{
  int mitarbeiterID = 0;
  for(int i = 0; i < mitarbeiterAnzahl; i++)
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
  bool exit = false;
  while(!exit)
  {
    if(zeichenkette[index] != trennzeichen)
    {
      std::cout << zeichenkette[index];
      index++;
      exit = true;
    }
  }
  std:: cout << "\n";
  index += 2; // move index to the character after the delimiter
  return index;
}

void sortiereMitarbeiterNachGehalt(int mitarbeiterAnzahl, tMitarbeiter mitarbeiterListe[])
{
  std::cout << "Welchen Sortieralgorithmus wollen Sie benutzen?" << "\n";
  std::cout << "(1) Quicksort" << "\n";
  std::cout << "(2) Bubblesort" << "\n";
}

void mitarbeiterlisteAusgeben (tMitarbeiter mitarbeiterListe[], int anzahl)
{
  for (int i=0; i<anzahl; i++)
  {
    std::cout << mitarbeiterListe[i].nachname << " " << mitarbeiterListe[i].id << std::endl;
  }
}

void bubbleSort(int mitarbeiterAnzahl, tMitarbeiter mitarbeiterListe[])
{

}

void quickSort(int mitarbeiterAnzahl, tMitarbeiter mitarbeiterListe[])
{
  tMitarbeiter tempMitarbeiter;
  for(int counter = mitarbeiterAnzahl; counter > 1; counter -= 1)
  {
    for(int i = 0; i < counter - 1; i++)
    {
      if(mitarbeiterListe[i].gehalt > mitarbeiterListe[i+1].gehalt)
      {
        tempMitarbeiter = mitarbeiterListe[i+1];
        mitarbeiterListe[i+1] = mitarbeiterListe[i];
        mitarbeiterListe[i] = tempMitarbeiter;
      }
    }
  }
}


