#include <iostream>
#include <string>


class Etudian{
private:
    std::string nom,prenoms,specialite;
public:
    Etudiant();
    ~Etudiant();
    Etudiant(const Etudiant& other);
    std::string getNom();
    std::string getPrenoms();
    std::string getSpecialite();
    void setSpecialite(std::string spe);
    void setNom(std::string nom);
    void setPrenoms(std::string prenoms);
    void saise();
    void affichage();
};

