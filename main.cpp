// created by Tim Meusel

#include "tmitarbeiter.h"

int main()
{
  tMitarbeiter mitarbeiterListe[100];
  int anzahl = 0;
  tMitarbeiter neuerMitarbeiter = mitarbeiterEinlesen();
  mitarbeiterHinzufuegen(anzahl, neuerMitarbeiter, mitarbeiterListe[]);
}
