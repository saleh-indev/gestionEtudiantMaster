#include "Etudiant.h"
#include <vector>

class Releve2Notes:public Etudiant{
private:
    std::vector<std::string> unitesEnseignees;
    std::vector<double> notes;
    double moyduSemestre,moyenneGen;
    std::vector<int> coefficients;
    std::vector<int> credits;
    int creditTotSem,creditTot;
    std::string mention;
    int nombreModule; //supplementaire 
    

public:
    Releve2Notes();
    ~Releve2Notes();

    double calculMoyduSemestre(double nts[], int coefs[]);
    void saise();
    void affichage();
    void setMoyenneGen();
    void setCreditTotal(double notes[], int credits[]);
    void setMention(double moyenneGen);
    
    //Setters 
    void setUnitesEnseignees(std::vector<std::string> unitesEnseignees);
    void setNotes(std::vector<double> notes);
    void setMoySemestre(double moyduSemestre);
    void setMoyenneGen(double moyenneGen);
    void setCoefficients(std::vector<int> coefficients);
    void setCredits(std::vector<int> credits);
    void setCreditTot(int creditTot);
    void setCreditTotSem(int creditTotSem);
    void setMention(std::string mention);
    //getters
    std::vector<std::string> getUnitesEnseignees();
    std::string getMention();
    std::vector<double> getNotes();
    double getMoyduSemestre();
    double getMoyenneGen();
    std::vector<int> getCoefficients();
    std::vector<int> getCredits();
    int getCreditTotsem();
    int getCreditTot();

};


