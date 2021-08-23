#include <iostream>
#include "Releve2Notes.h"

Releve2Notes::Releve2Notes():Etudiant(){
    unitesEnseignees="";
    mention=Mention;
    notes(0.0);
    moyduSemestre(0.0);
    moyenneGen(0.0);
    coefficients(0);
    credits(0);
    creditTotsem(0);
    creditTot(0);
}

Releve2Notes::~Releve2Notes(){}
double Releve2Notes::calculMoyduSemestre(double nts[], int coefs[]){
}
void Releve2Notes::setMoyenneGen();
void Releve2Notes::setCreditTotal(double notes[], int credits[]);
void Releve2Notes::setMention(double moyenneGen);
void Releve2Notes::saise();
void Releve2Notes::affichage();