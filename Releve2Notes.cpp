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
void Releve2Notes::setMention(double moyenneGen){
    //Ecriture de la  mention en fonction de la moyenneGen
}
void Releve2Notes::saise(){
    //Remplissage de notes
}
void Releve2Notes::affichage(){
    for(int i=0;i<unitesEnseignees.size();i++){
        cout << "Module : "unitesEnseignees[i]<<endl;
        cout<<"Note : "<<notes[i]<<endl;
        cout<<"Coefficient : "<<coefficients[i]<<endl;
    }
    cout<<"Credit semestre 1: "<<creditTotSem;
    cout<<"Credit semestre 2: "<<creditTot-creditTotSem<<endl;
}

//Setters 
    void setUnitesEnseignees(vector<string> unitesEnseignees){
        this.unitesEnseignees = unitesEnseignees;
    }
    void setNotes(vector<double> notes){
        this.notes = notes;
    }
    void setMoySemestre(double moyduSemestre){
        this.moyduSemestre = moyduSemestre;
    }
    void setMoyenneGen(double moyenneGen){
        this.moyenneGen = moyenneGen;
    }
    void setCoefficients(vector<int> coefficients){
        this.coefficients =coefficients;
    }
    void setCredits(vector<int> credits){
        this.credits = credits;
    }
    void setCreditTot(int creditTot){
        this.creditTot = creditTot;
    }
    void setCreditTotSem(int creditTotSem){
        this.creditTotSem = creditTotSem;
    }
    void setMention(string mention){
        this.mention = mention;
    }
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