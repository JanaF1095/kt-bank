#pragma once
#include "Kartenkonto.h"
#include "Bankkunde.h"
#include <iostream>


class Bankautomat {
 private:
  double bargeld = 0.0;
  unsigned int automatCounter;
  unsigned int AUTOMAT_ID;  // erstmal nur deklariert, weil die ID von der Bank kommt

 public:
	Bankautomat(double startBetrag);
	//~Bankautomat();

	bool validierung(KartenKonto* kkonto);
	int auszahlung(KartenKonto* kkonto, int auszahlungsBetrag);
    int einzahlung(KartenKonto* kkonto, int einzahlungsBetrag);
    KartenKonto* kartenauswahl(Bankkunde* current_kunde);
    void menuAuswahl(Bankkunde* bankkunde);
       

	double getBargeld();
	void setBargeld(double betrag);
	unsigned int getAutomatID();
	void setAutomatID(unsigned int nummer);
};


