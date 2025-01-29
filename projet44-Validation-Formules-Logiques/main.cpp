#include <iostream>
#include "validation.h"
#include<string>
#include<vector>
int main(){
    //ensembles des variables a utiliser
    std::string varAND,varOR,varNOT,varXoR;
    std::string v1,v2,v3,v4;
    std::string vartotal="";
    std::string vartotal1="";
    std::string logique="";
    std::string portionlogAND,portionlogOR,portionlogNOT,portionlogXoR;
     int slog[4];
     int Tvar,Tvar1,Tvar2,Tvar3,Tvar4;

     std::cout<<"************** BIENVENUE A VOUS!**************\n";
    std::cout<<"entrez une formule logique a maximum 5 variabble\n";
    std::getline(std::cin,logique);
    std::cout<<logique<<"\n";
    tailleformule(logique);
  //appel de nos foction de verification de porte logique
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
    while(Tvar>5){ //si la limite de variable est depasser message derreur
        std::cout<<"ERREUR! VOUS AVEZ SAISIE TROP DE VARIABLE DANS VOTRE FORMULE\n";
    }
    if(Tvar==1&&Tvar3==4){//une porte une variable (NOt)
        non(slog);
    }
    if(Tvar==2&&Tvar1==5){//une  porte 2 variable(AND)
        et(slog);
   }else if(Tvar==2&&Tvar2==4){//une  porte 2 variable(OR)
       OU(slog);
    }else if(Tvar==2&&Tvar4==5){//une  porte 2 variable(xOR)
        OUEX(slog);
    }
    if(Tvar==3&&v1=="XoR"&&v2=="AND"){//si la premiere porte est XoR et la seconde AND
     XORAND(slog);
       // std::cout<<"oui continue\n";
    }else if(Tvar==3&&v1=="XoR"&&v2=="OR"){ //si la premiere porte est XoR et la seconde OR
     XOROR(slog);
       // std::cout<<"oui continue\n";
    }else if(Tvar==3&&v1=="XoR"&&v2=="XoR"){//si la premiere porte est XoR et la seconde OR
         XORXOR(slog);
    }else if(Tvar==3&&v1=="AND"&&v2=="OR"){//si la premiere porte est AND et la seconde OR
         ANDOR(slog);
    }else if(Tvar==3&&v1=="AND"&&v2=="XoR"){//si la premiere porte est AND et la seconde XOR
         ANDXOR(slog);
    }else if(Tvar==3&&v1=="OR"&&v2=="AND"){//si la premiere porte est OR et la seconde AND
         ORAND(slog);
    }else if(Tvar==3&&v1=="OR"&&v2=="XoR"){//si la premiere porte est OR et la seconde XOR
         ORXOR(slog);
    }else if(Tvar==3&&v1=="AND"&&v2=="AND"){//si la premiere porte est AND et la seconde AND
         ANDAND(slog);
         }else if(Tvar==3&&v1=="OR"&&v2=="OR"){//si la premiere porte est OR et la seconde OR
         OROR(slog);
         }
    
return 0;
}
