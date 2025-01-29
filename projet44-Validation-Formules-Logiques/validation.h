#ifndef _validation_h_
#define _validation_h_

void tailleformule(const std::string&logique);

std::string supprimedouble(const std::string& chaine);

bool sivide(const std::string& chaine);
//fonction du et logique et ou logique
void et(int s[4]  );
void OU(int s[4]  );
//fonction logique NOT
void non( int s[2]);
//fonction logique xOR
void OUEX(int s[4]);
//fonction de verification de si il exsiste une porte AND dans la formule saisie si oui affiche les variable qui se trouve avant et apres la prote
void veriflogAND(const std::string& logique,std::string& result,std::string& resultlog);
// //fonction de verification de si il exsiste une porte OR dans la formule saisie si oui affiche les variable qui se trouve avant et apres la prote
void veriflogOR(const std::string& logique, std::string& result,std::string& resultlog);
 //fonction de verification de si il exsiste une porte NOT dans la formule saisie si oui affiche les variable qui se trouve avant et apres la prote

void veriflogNOT(const std::string& logique, std::string& result,std::string& resultlog);
//fonction de verification de si il exsiste une porte AND dans la formule saisie si oui affiche les variable qui se trouve avant et apres la prote
void veriflogXoR(const std::string& logique,std::string& result,std::string& resultlog);
//fonction des portes trouver a des chaine de caractere distingte par ordre de saisie
void affect(std::string chaine,std::string & var1,std::string & var2,std::string & var3,std::string & var4);
//fonction dassociation de 2 porte logique a 3 variables
void XORAND(int sol[8]);
void XOROR(int sol[8]);
void XORXOR(int sol[8]);
void ANDOR(int sol[8]);
void ANDXOR(int sol[8]);
void ANDAND(int sol[8]);
void ORAND(int sol[8]);
void ORXOR(int sol[8]);
void OROR(int sol[8]);
//fontion a 4 variables 3 portes
void ORANDXOR(int sol[16]);
void ANDXOROR(int sol[16]);
void ANDORXOR(int sol[16]);
void XORORAND(int sol[16]);
void ORXORAND(int sol[16]);
void XORANDOR(int sol[16]);




#endif
