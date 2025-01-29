#include <iostream>
#include<string>
#include<vector>


//fonction pour connaitre la taille dune chaine de caractere
void tailleformule(const std::string&logique){
     int nombredecaractere=logique.length();
     std::cout<<"la taille de la formule logique est  "<<nombredecaractere<<"\n";
};
//fonction du et logique
void et(int s[4]  ){
    int val1[4];
    int val2[4];
   val1[0]=0;
   val1[1]=0;
   val1[2]=1;
   val1[3]=1;
   val2[0]=0;
   val2[1]=1;
   val2[2]=0;
   val2[3]=1;
 for(int i=0;i<4;i++){
    
        if(val1[i]==1&&val2[i]==1){
            s[i]=1;
        }else{
            s[i]=0;
        }
    }
    for(int j=0;j<4;j++){
         std::cout<<val1[j]<<"|";
          std::cout<<val2[j]<<"|";
        std::cout<<s[j];
        std::cout<<"\n";
    }
    std::cout<<"la formule est vrai uniquement pour la var1=1 et la var2=1\n";

};
//fonction du ou logique
void OU(int s[4]  ){
    int val1[4];
    int val2[4];
   val1[0]=0;
   val1[1]=0;
   val1[2]=1;
   val1[3]=1;
   val2[0]=0;
   val2[1]=1;
   val2[2]=0;
   val2[3]=1;
 for(int i=0;i<4;i++){
    
        if(val1[i]==1||val2[i]==1){
            s[i]=1;
        }else{
            s[i]=0;
        }
    }
    for(int j=0;j<4;j++){
         std::cout<<val1[j]<<"|";
          std::cout<<val2[j]<<"|";
        std::cout<<s[j];
        std::cout<<"\n";
    }
    std::cout<<"la formule est vrai tantque lune des 2 variable est vrai\n";

};
//fonction logique NOT
void non( int s[2]){
    int val[2];
    val[0]=0;
    val[1]=1;
    for(int i=0;i<2;i++){
        if(val[i]==0){
            s[i]=1;
        }else{
            s[i]=0;
        }
    }
        for(int j=0;j<2;j++){
            std::cout<<val[j];
        std::cout<<" "<<s[j]<<"\n";
        }
    
}
//fonction logique xOR
void OUEX(int s[4]){
     int val1[4];
    int val2[4];
   val1[0]=0;
   val1[1]=0;
   val1[2]=1;
   val1[3]=1;
   val2[0]=0;
   val2[1]=1;
   val2[2]=0;
   val2[3]=1;
 for(int i=0;i<4;i++){
    
        if(val1[i]!=val2[i]){
            s[i]=1;
        }else{
            s[i]=0;
        }
    }
    for(int j=0;j<4;j++){
         std::cout<<val1[j]<<"|";
          std::cout<<val2[j]<<"|";
        std::cout<<s[j];
        std::cout<<"\n";
    }
    std::cout<<"la formule est vrai pour var1 differente de var2\n";

}
//fonction de verification de si il exsiste une porte AND dans la formule saisie si oui affiche les variable qui se trouve avant et apres la prote
void veriflogAND(const std::string& logique,std::string& result,std::string& resultlog){
    std::string mot="AND";
    size_t pos=0;
    std::vector<char>varavant;
     std::vector<char>varapres;

    while(pos< logique.size()&&(pos=logique.find(mot,pos))!=std::string::npos){
        std::cout<<"mot trouver a la position "<<pos+1<<"\n";
        if(pos>0){
            //stockage de la variable avant and
            char varavants=logique[pos-1];
            if(varavants!='('&& varavants!=' '&& varavants!=')'){
         resultlog +=varavants;
           varavant.push_back(varavants);
           std::cout<<"et la variable avant AND est  "<<logique[pos-1]<<"\n";
           }
       
        }else{
            std::cout<<"pas de variable avant AND \n";
        }
         resultlog+=mot;
        if(pos + mot.size()<logique.size()){
            //stokage apres
            char varapress=logique[pos+mot.size()];
            if(varapress!=' '&& varapress!='('&& varapress!=')'){
                resultlog+=varapress;
               varapres.push_back(varapress); 
              
            }
            
            std::cout<<"la varible apres AND est  "<<varapress<<"\n";
        }
        
        else{
            std::cout<<"pas de variable apres\n";
        }
        pos+=mot.size();
    }
    
     for(char var:varavant){
        result+=var;
    }
     for(char var:varapres){
        result+=var;
    }
};
// //fonction de verification de si il exsiste une porte OR dans la formule saisie si oui affiche les variable qui se trouve avant et apres la prote
void veriflogOR(const std::string& logique, std::string& result,std::string& resultlog){
    std::string mot="OR";
    size_t pos=0;
    std::vector<char>varavant;
     std::vector<char>varapres;

    while(pos< logique.size()&&(pos=logique.find(mot,pos))!=std::string::npos){
        std::cout<<"mot trouver a la position "<<pos+1<<"\n";
        if(pos>0){
            //stockage de la variable avant and
            char varavants=logique[pos-1];
            if(varavants!='('&& varavants!=' '&& varavants!=')'){
            resultlog +=varavants;
           varavant.push_back(varavants);
           std::cout<<"et la variable avant OR est  "<<logique[pos-1]<<"\n";
           }
       
        }else{
            std::cout<<"pas de variable avant OR \n";
        }
         resultlog+=mot;
        if(pos + mot.size()<logique.size()){
            //stokage apres
            char varapress=logique[pos+mot.size()];
            char varavants=logique[pos-1];
            if(varapress!=' '&& varapress!='('&& varapress!=')'){
                 resultlog+=varapress;
               varapres.push_back(varapress); 
                
            }
            
            std::cout<<"la varible apres OR est  "<<varapress<<"\n";
        }
        
        else{
            std::cout<<"pas de variable apres\n";
        }
        pos+=mot.size();
        pos++;
    }
    for(char var:varavant){
        result+=var;
    }
     for(char var:varapres){
        result+=var;
    }

    
 
     
};
 
 //fonction de verification de si il exsiste une porte NOT dans la formule saisie si oui affiche les variable qui se trouve avant et apres la prote

void veriflogNOT(const std::string& logique, std::string& result,std::string& resultlog){
    std::string mot="NOT";
    size_t pos=0;
    std::vector<char>varavant;
     std::vector<char>varapres;

    while(pos< logique.size()&&(pos=logique.find(mot,pos))!=std::string::npos){
        std::cout<<"mot trouver a la position "<<pos+1<<"\n";
        if(pos>0){
            //stockage de la variable avant NOT
            char varavants=logique[pos-1];
            if(varavants!='('&& varavants!=' '&& varavants!=')'){
                resultlog +=varavants;

           varavant.push_back(varavants);
           std::cout<<"et la variable avant NOT est  "<<logique[pos-1]<<"\n";
           }
       
        }else{
            std::cout<<"pas de variable avant NOT \n";
        }
         resultlog+=mot;
        if(pos + mot.size()<logique.size()){
            //stokage apres
            char varapress=logique[pos+mot.size()];
            if(varapress!=' '&& varapress!='('&& varapress!=')'){
                 resultlog+=varapress;
               varapres.push_back(varapress); 
                
            }
            
            std::cout<<"la varible apres OR est  "<<varapress<<"\n";
        }
        
        else{
            std::cout<<"pas de variable apres\n";
        }
        pos+=mot.size();
        pos++;
    }
    for(char var:varavant){
        result+=var;
    }
     for(char var:varapres){
        result+=var;
    }

    

     
};



//fonction de verification de si il exsiste une porte AND dans la formule saisie si oui affiche les variable qui se trouve avant et apres la prote
void veriflogXoR(const std::string& logique,std::string& result,std::string& resultlog){
    std::string mot="XoR";
    size_t pos=0;
    std::vector<char>varavant;
     std::vector<char>varapres;

    while(pos< logique.size()&&(pos=logique.find(mot,pos))!=std::string::npos){
        std::cout<<"mot trouver a la position "<<pos+1<<"\n";
        if(pos>0){
            //stockage de la variable avant and
            char varavants=logique[pos-1];
            if(varavants!='('&& varavants!=' '&& varavants!=')'){
                resultlog +=varavants;

           varavant.push_back(varavants);
           std::cout<<"et la variable avant XOR est  "<<logique[pos-1]<<"\n";
           }
       
        }else{
            std::cout<<"pas de variable avant XOR \n";
        }
         resultlog+=mot;
        if(pos + mot.size()<logique.size()){
            //stokage apres
            char varapress=logique[pos+mot.size()];
            if(varapress!=' '&& varapress!='('&& varapress!=')'){
                 resultlog+=varapress;
               varapres.push_back(varapress); 
              
            }
            
            std::cout<<"la varible apres XOR est  "<<varapress<<"\n";
        }
        
        else{
            std::cout<<"pas de variable apres\n";
        }
        pos+=mot.size();
    }
    
     for(char var:varavant){
        result+=var;
    }
     for(char var:varapres){
        result+=var;
    }
};

int main(){
    //ensembles des variables a utiliser
    std::string varAND="";
    std::string varOR="";
    std::string varNOT="";
    std::string varXoR="";
    std::string vartotal="";
    std::string logique="";
    std::string portionlogAND="";
    std::string portionlogOR="";
    std::string portionlogNOT="";
    std::string portionlogXoR="";
    int slog[4];
    int Tvar;
    int Tvar1;
    int Tvar2;
    int Tvar3;
    int Tvar4;


    std::cout<<"entrez une formule logique a maximum 5 variabble\n";
    std::getline(std::cin,logique);
   // int nombredecaractere=logique.length();
    std::cout<<logique<<"\n";
    //std::cout<<nombredecaractere<<"\n";
    tailleformule(logique);
  //appel de nos foction de verification de porte logique
    veriflogAND(logique,varAND,portionlogAND);
    veriflogOR(logique, varOR,portionlogOR);
    veriflogNOT(logique, varNOT,portionlogNOT);
    veriflogXoR(logique, varXoR,portionlogXoR);
    std::cout<<"les var a utiliser pour AND sont:\n"<<varAND<<"\n et pour OR sont:\n"<<varOR<<"\n et pour XOR sont:\n"<<varXoR<<"\n et pour NOT sont:\n"<<varNOT;
    vartotal= varAND+varOR+varNOT+varXoR;
    std::cout<<"  le total de variable:\n"<<vartotal;
    std::cout<<"\n";
  ///verification de si la taille est respecter a fin de pouvoir commencer les operation logique
     Tvar=vartotal.length();
     Tvar1=portionlogAND.length();
     Tvar2=portionlogOR.length();
      Tvar3=portionlogNOT.length();
      Tvar4=portionlogXoR.length();
    while(Tvar>5){
        std::cout<<"ERREUR! VOUS AVEZ SAISIE TROP DE VARIABLE DANS VOTRE FORMULE\n";
    }
    if(Tvar==1&&Tvar3==4){
        non(slog);
    }
    if(Tvar==2&&Tvar1==5){
        et(slog);
   }else if(Tvar==2&&Tvar2==4){
       OU(slog);
    }else if(Tvar==2&&Tvar4==5){
        OUEX(slog);
    }
    
return 0;
}