#include "Etudiant.h"
namespace Mention{
    typedef enum {
        admis,
        ajourne,
        admis_avec_dettes
    }Mention;
}
class Releve2Notes:public Etudiant
{
private:
string unitesEnseignees;
Mention mention;
double notes,moyduSemestre,moyenneGen;
int coefficients, credits,creditTotsem,creditTot;
public:
    Releve2Notes();
    ~Releve2Notes();
    double calculMoyduSemestre(double nts[], int coefs[]);
    void setMoyenneGen();
    void setCreditTotal(double notes[], int credits[]);
    void setMention(double moyenneGen);
    void saise();
    void affichage();
    string getUnitesEnseignees();
    Mention getMention();
    double getNotes();
    double getMoyduSemestre();
    double getMoyenneGen();
    int getCoefficients();
    int getCredits();
    int getCreditTotsem();
    int getCreditTot();

};


