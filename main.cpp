// created by Tim Meusel

#include "tmitarbeiter.h"
#include "mitarbeiter.h"
#include <iostream>

int main()
{
  tMitarbeiter mitarbeiterListe[100];
  int anzahl = 0;
  tMitarbeiter neuerMitarbeiter = mitarbeiterEinlesen();
  mitarbeiterHinzufuegen(anzahl, neuerMitarbeiter, mitarbeiterListe);
}
