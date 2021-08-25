#include <iostream>
#include "Releve2Notes.h"
using namespace std;
Releve2Notes::Releve2Notes():Etudiant(){
    mention("");
    moyduSemestre(0.0);
    moyenneGen(0.0);
    creditTotSem(0);
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

//Setters 
    void setUnitesEnseignees(vector<string> unitesEnseignees){
        this.unitesEnseignees = unitesEnseignees;
    }
    void setNotes(vector<double> notes){
        this.notes = notes;
    }
    void setMoySemestre(double moyduSemestre);
    void setMoyenneGen(double moyenneGen);
    void setCoefficients(vector<int> coefficients);
    void setCredits(vector<int> credits);
    void setCreditTot(int creditTot);
    void setCreditTotSem(int creditTotSem);
    void setMention(string mention);
    //getters
    vector<string> getUnitesEnseignees(){
        return this.unitesEnseignees;
    }
    string getMention(){
        return this.mention;
    }
    vector<double> getNotes(){
        return this.notes;
    }
    double getMoyduSemestre(){
        return this.moyduSemestre;
    }
    double getMoyenneGen(){
        return this.moyenneGen;
    }
    vector<int> getCoefficients(){
        return this.coefficients;
    }
    vector<int> getCredits(){
        return credits;
    }
    int getCreditTotsem(){
        return this.creditTotSem;
    }
    int getCreditTot(){
        return this->creditTot;
    }