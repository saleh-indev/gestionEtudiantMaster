#include <iostream>
#include "Etudiant.h"
using namespace std;

Etudiant::Etudiant(): nom(""),prenoms(""),specialite(""){}
Etudiant::~Etudiant(){}
Etudiant::Etudiant(const Etudiant& other){
    nom=other.nom;
    prenoms=other.prenoms;
    specialite=other.specialite;
}
string Etudiant::getNom(){
    return this->nom;
}
string Etudiant::getPrenoms(){
    return this->prenoms;
}
string Etudiant::getSpecialite(){
    return this->specialite;
}
void Etudiant::setSpecialite(string spe){
    this->specialite=spe;
}
void Etudiant::setNom(string nom){
    this->nom=nom;
}
void Etudiant::setPrenoms(string prenoms){
    this->prenoms=prenom;
}
void Etudiant::saise(){
    cout<<"Nom : "<<this->nom<<endl;
    cout<<"Prenoms: "<<this->prenoms<<endl;
    cout<<"Specialite :"<<this->specialite<<endl;
}
void Etudiant::affichage(){
//affichage d'informations 
}