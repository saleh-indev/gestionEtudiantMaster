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
double notes,moyduSemestre;
int coefficients, credits,creditTotsem,creditTot;
double moyduSemestre, moyenneGen; 
public:
    Releve2Notes();
    ~Releve2Notes();
    double calculMoyduSemestre(double nts[], int coefs[]);
    void setMoyenneGen();
    void setCreditTotal(double notes[], int credits[]);
    void setMention(double moyenneGen);
    void saise();
    void affichage();
};


