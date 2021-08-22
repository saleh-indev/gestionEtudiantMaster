#include <iostream>
#include <string>
using namespace std;

class Etudiant
{
private:
    string nom,prenoms,specialite;
public:
    Etudiant();
    ~Etudiant();
    Etudiant(const Etudiant& other);
    string getNom();
    string getPrenoms();
    string getSpecialite();
    void setSpecialite(string spe);
    void setNom(string nom);
    void setPrenoms(string prenoms);
    void saise();
    void affichage();
};

