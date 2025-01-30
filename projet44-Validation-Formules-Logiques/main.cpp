#include <iostream>
#include "validation.h"
#include<string>
#include<vector>
int main(){
    while(true){
    //ensembles des variables a utiliser
    std::string varAND,varOR,varNOT,varXoR;
    std::string v1,v2,v3,v4;
    std::string vartotal="";
    std::string vartotal1="";
    std::string logique="";
    std::string portionlogAND,portionlogOR,portionlogNOT,portionlogXoR;
     int slog[4];
    int slog1[8];
     int slog2[16];
     int Tvar,Tvar1,Tvar2,Tvar3,Tvar4;

    std::cout<<"************** BIENVENUE A VOUS!**************\n\n";
    std::cout<<"Entrez une formule logique à maximum 5 variables;
    std::cout<<" Entrez 'quit' si vous voulez quitter\n";
    std::cout<<"Pour des soucis de code XOR sera considerer ssi il est ecris avec o minuscule merci:)\n";

    std::getline(std::cin,logique);
     if (logique == "quit") {

            break; // Sortir de la boucle si l'utilisateur tape 'quit'
        }
    std::cout<<"la formule logique a ete saisie dans cet orde\n"<<logique<<"\n";
    tailleformule(logique);
    
  //appel de nos fonctions de verification de porte logique
    veriflogAND(logique,varAND,portionlogAND);
    veriflogOR(logique, varOR,portionlogOR);
    veriflogNOT(logique, varNOT,portionlogNOT);
    veriflogXoR(logique, varXoR,portionlogXoR);
    std::cout<<"les var a utiliser pour AND sont:\n"<<varAND<<"\n et pour OR sont:\n"<<varOR<<"\n et pour XOR sont:\n"<<varXoR<<"\n et pour NOT sont:\n"<<varNOT;
    //variable total sans controle de doublons
    vartotal1= varAND+varOR+varNOT+varXoR;
    //avec controle de doublons
    vartotal=supprimedouble(vartotal1);
    std::cout<<"  le total de variable:\n"<<vartotal;
    std::cout<<"\n";
     Tvar=vartotal.length();//connaitre le nombre total de porte entrer
     Tvar1=portionlogAND.length();
     Tvar2=portionlogOR.length();
      Tvar3=portionlogNOT.length();
      Tvar4=portionlogXoR.length();
      affect(logique,v1,v2,v3,v4); //on affecte a chaque chaine une porte logique se trouvant dans la chaine saisie
      std::cout<<"\n";
       std::cout<<v1<<" "<<v2<<" "<<v3<<" "<<v4<<"S\n";
        
    while(Tvar>5){ b//si la limite de variable est depasser message derreur
                  
        std::cout<<"ERREUR! VOUS AVEZ SAISIE TROP DE VARIABLE DANS VOTRE FORMULE\n";
    }
    if(Tvar==1&&Tvar3==4){ //une porte une variable (NOt)
        non(slog);
    }
    if(Tvar==2&&Tvar1==5){ //une  porte 2 variable(AND)
        et(slog);
   }else if(Tvar==2&&Tvar2==4){ //une  porte 2 variable(OR)
       OU(slog);
    }else if(Tvar==2&&Tvar4==5){ //une  porte 2 variable(xOR)
        OUEX(slog);
    }
    if(Tvar==3&&v1=="XoR"&&v2=="AND"){ //si la premiere porte est XoR et la seconde AND
     XORAND(slog);
       // std::cout<<"oui continue\n";
    }else if(Tvar==3&&v1=="XoR"&&v2=="OR"){ //si la premiere porte est XoR et la seconde OR
     XOROR(slog);
       // std::cout<<"oui continue\n";
    }else if(Tvar==3&&v1=="XoR"&&v2=="XoR"){ //si la premiere porte est XoR et la seconde OR
         XORXOR(slog);
    }else if(Tvar==3&&v1=="AND"&&v2=="OR"){ //si la premiere porte est AND et la seconde OR
         ANDOR(slog);
    }else if(Tvar==3&&v1=="AND"&&v2=="XoR"){ //si la premiere porte est AND et la seconde XOR
         ANDXOR(slog);
    }else if(Tvar==3&&v1=="OR"&&v2=="AND"){ //si la premiere porte est OR et la seconde AND
         ORAND(slog);
    }else if(Tvar==3&&v1=="OR"&&v2=="XoR"){ //si la premiere porte est OR et la seconde XOR
         ORXOR(slog);
    }else if(Tvar==3&&v1=="AND"&&v2=="AND"){ //si la premiere porte est AND et la seconde AND
         ANDAND(slog);
         }else if(Tvar==3&&v1=="OR"&&v2=="OR"){ //si la premiere porte est OR et la seconde OR
         OROR(slog);
         }else if(Tvar==4&&v1=="AND"&&v2=="OR"&&v3=="XoR"){ //la premiere porte est AND 2emOR 3eme XOR
          ANDORXOR(slog);
         }else if(Tvar==4&&v1=="AND"&&v2=="XoR"&&v3=="OR"){ //porte 1 AND 2eme XOR 3emeOR
          ANDXOROR(slog2);
         }else if(Tvar==4&&v1=="OR"&&v2=="AND"&&v3=="XoR"){ //la premiere porte OR 2eme AND 3eme XOR
          ORANDXOR(slog2);
         }else if(Tvar==4&&v1=="XoR"&&v2=="OR"&&v3=="AND"){ //la premiere porte XOR 2emeOR 3eme AND
          XORORAND(slog2);
         }else if(Tvar==4&&v1=="OR"&&v2=="XoR"&&v3=="AND"){ //la premiere porte XOR 2eme OR 3eme AND
          ORXORAND(slog2);
         }else if(Tvar==4&&v1=="XoR"&&v2=="AND"&&v3=="OR"){ //fait
          XORANDOR(slog2);
         }

       /*  else if(Tvar==4&&v1=="NOT"&&v2=="AND"&&v3=="OR"&&v4=="XoR"){
          NOTANDORXOR(slog);
         }else if(Tvar==4&&v1=="NOT"&&v2=="AND"&&v3=="XoR"&&v4=="OR"){
          NOTANDXOROR(slog);
         }else if(Tvar==4&&v1=="NOT"&&v2=="OR"&&v3=="AND"&&v4=="XoR"){
          NOTORANDXOR(slog);
         }else if(Tvar==4&&v1=="NOT"&&v2=="XoR"&&v3=="OR"&&v4=="AND"){
          NOTXORORAND(slog);
         }else if(Tvar==4&&v1=="NOT"&&v2=="OR"&&v3=="XoR"&&v4=="AND"){
          NOTORXORAND(slog);
         }else if(Tvar==4&&v1=="NOT"&&v2=="XoR"&&v3=="AND"&&v4=="OR"){
          NOTXORANDOR(slog);
         }
      

      else if(Tvar==4&&v1=="AND"&&v2=="OR"&&v3=="NOT"&&v4=="XoR"){
          ANDORNOTXOR(slog);
         }else if(Tvar==4&&v1=="AND"&&v2=="XoR"&&v3=="NOT"&&v4=="OR"){
          ANDXORNOTOR(slog);
         }else if(Tvar==4&&v1=="OR"&&v2=="AND"&&v3=="NOT"&&v4=="XoR"){
          ORANDNOTXOR(slog);
         }else if(Tvar==4&&v1=="XoR"&&v2=="OR"&&v3=="NOT"&&v4=="AND"){
          XORORNOTAND(slog);
         }else if(Tvar==4&&v1=="OR"&&v2=="XoR"&&v3=="NOT"&&v4=="AND"){
          ORXORNOTAND(slog);
         }else if(Tvar==4&&v1=="XoR"&&v2=="AND"&&v3=="NOT"&&v4=="OR"){
          XORANDNOTOR(slog);
         }*/
    }
return 0;
}
