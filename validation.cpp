#include <iostream>
#include<string>
#include<vector>
//fonction pour connaitre la taille dune chaine de caractere
void tailleformule(const std::string&logique){
     int nombredecaractere=logique.length();
     std::cout<<"la taille de la formule logique est  "<<nombredecaractere<<"  caractere\n";
};

//fonction de suppression de doublon
std::string supprimedouble(const std::string& chaine){
    std::string nouvellechaine="";
    for(char c:chaine){
        if(nouvellechaine.find(c)==std::string::npos){
            nouvellechaine+=c;
        }
    }
    return nouvellechaine;
}
//fonction de verrification si une chaine est vide
bool sivide(const std::string& chaine){
    return chaine.empty();
}
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
        
        if(pos>0){
            //stockage de la variable avant and
            char varavants=logique[pos-1];
            if(varavants!='('&& varavants!=' '&& varavants!=')'){
         resultlog +=varavants;
           varavant.push_back(varavants);
        //   std::cout<<" la variable avant AND est  "<<logique[pos-1]<<"\n";
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
            
          //  std::cout<<"la varible apres AND est  "<<varapress<<"\n";
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
       // std::cout<<"mot trouver a la position "<<pos+1<<"\n";
        if(pos>0){
            //stockage de la variable avant and
            char varavants=logique[pos-1];
            if(varavants!='('&& varavants!=' '&& varavants!=')'){
            resultlog +=varavants;
           varavant.push_back(varavants);
         //  std::cout<<"et la variable avant OR est  "<<logique[pos-1]<<"\n";
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
            
           // std::cout<<"la varible apres OR est  "<<varapress<<"\n";
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
      //  std::cout<<"mot trouver a la position "<<pos+1<<"\n";
        if(pos>0){
            //stockage de la variable avant NOT
            char varavants=logique[pos-1];
            if(varavants!='('&& varavants!=' '&& varavants!=')'){
                resultlog +=varavants;

           varavant.push_back(varavants);
         //  std::cout<<"et la variable avant NOT est  "<<logique[pos-1]<<"\n";
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
            
          //  std::cout<<"la varible apres OR est  "<<varapress<<"\n";
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
      //  std::cout<<"mot trouver a la position "<<pos+1<<"\n";
        if(pos>0){
            //stockage de la variable avant and
            char varavants=logique[pos-1];
            if(varavants!='('&& varavants!=' '&& varavants!=')'){
                resultlog +=varavants;

           varavant.push_back(varavants);
         //  std::cout<<"et la variable avant XOR est  "<<logique[pos-1]<<"\n";
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
            
         //   std::cout<<"la varible apres XOR est  "<<varapress<<"\n";
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
};//fonction
void affect(std::string chaine,std::string & var1,std::string & var2,std::string & var3,std::string & var4){
    int trouve=0;
    size_t pos =0;
    while(pos<chaine.size()){
        if(chaine.substr(pos,3)=="AND"){
            if(trouve==0) var1="AND";
            else if(trouve==1)var2="AND";
            else if(trouve==2)var3="AND";
            else if(trouve==3)var4="AND";
            trouve++;
            pos+=3;
        }else if(chaine.substr(pos,3)=="NOT"){
            if(trouve==0) var1="NOT";
            else if(trouve==1)var2="NOT";
            else if(trouve==2)var3="NOT";
            else if(trouve==3)var4="NOT";
            trouve++;
            pos+=3;
        }else if(chaine.substr(pos,2)=="OR"){
            if(trouve==0) var1="OR";
            else if(trouve==1)var2="OR";
            else if(trouve==2)var3="OR";
            else if(trouve==3)var4="OR";
            trouve++;
            pos+=2;
        }else if(chaine.substr(pos,3)=="XoR"){
           if(trouve==0) var1="XoR";
            else if(trouve==1)var2="XoR";
            else if(trouve==2)var3="XoR";
            else if(trouve==3)var4="XoR";
            trouve++;
            pos+=3;
        }else{
            pos++;
        }
    }
}
//fonction dassociation de 2 porte logique a 3variables
void XORAND(int sol[8]){
      int val1[8];
    int val2[8];
    int val3[8];

    val1[0]=0;
   val1[1]=0;
   val1[2]=0;
   val1[3]=0;
   val1[4]=1;
   val1[5]=1;
   val1[6]=1;
   val1[7]=1;

   val2[0]=0;
   val2[1]=0;
   val2[2]=1;
   val2[3]=1;
   val2[4]=0;
   val2[5]=0;
   val2[6]=1;
   val2[7]=1;


   val3[0]=0;
   val3[1]=1;
   val3[2]=0;
   val3[3]=1;
   val3[4]=0;
   val3[5]=1;
   val3[6]=0;
   val3[7]=1;

   int  inter1[8];
   //XOR
   for(int i=0;i<=7;i++){
    if(val1[i]!=val2[i]){
        inter1[i]=1;
      }else{
        inter1[i]=0;
      }
      //and
     if(inter1[i]==1&&val3[i]==1){
            sol[i]=1;
        }else{
            sol[i]=0;
        }
   }
    for(int j=0;j<=7;j++){
         std::cout<<val1[j]<<"|";
          std::cout<<val2[j]<<"|";
          std::cout<<val3[j]<<"|";
          std::cout<<inter1[j]<<"|";
        std::cout<<sol[j];
        std::cout<<"\n";
    }
}
//fonction dassociation de 2 porte logique a 3variables
void XOROR(int sol[8]){
      int val1[8];
    int val2[8];
    int val3[8];

    val1[0]=0;
   val1[1]=0;
   val1[2]=0;
   val1[3]=0;
   val1[4]=1;
   val1[5]=1;
   val1[6]=1;
   val1[7]=1;

   val2[0]=0;
   val2[1]=0;
   val2[2]=1;
   val2[3]=1;
   val2[4]=0;
   val2[5]=0;
   val2[6]=1;
   val2[7]=1;


   val3[0]=0;
   val3[1]=1;
   val3[2]=0;
   val3[3]=1;
   val3[4]=0;
   val3[5]=1;
   val3[6]=0;
   val3[7]=1;

   int  inter1[8];
   //XOR
   for(int i=0;i<=7;i++){
    if(val1[i]!=val2[i]){
        inter1[i]=1;
      }else{
        inter1[i]=0;
      }
      //OR
     if(inter1[i]==1||val3[i]==1){
            sol[i]=1;
        }else{
            sol[i]=0;
        }
   }
    for(int j=0;j<=7;j++){
         std::cout<<val1[j]<<"|";
          std::cout<<val2[j]<<"|";
          std::cout<<val3[j]<<"|";
          std::cout<<inter1[j]<<"|";
        std::cout<<sol[j];
        std::cout<<"\n";
    }
}

int main(){
    //ensembles des variables a utiliser
    std::string varAND,varOR,varNOT,varXoR;
    std::string v1,v2,v3,v4;
    //std::string varOR="";
    //std::string varNOT="";
    //std::string varXoR="";
    std::string vartotal="";
    std::string vartotal1="";
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
    //variable total sans controle de doublons
    vartotal1= varAND+varOR+varNOT+varXoR;
    //avec controle de doublons
    vartotal=supprimedouble(vartotal1);
    std::cout<<"  le total de variable:\n"<<vartotal;
    std::cout<<"\n";
  ///verification de si la taille est respecter a fin de pouvoir commencer les operation logique
     Tvar=vartotal.length();
     Tvar1=portionlogAND.length();
     Tvar2=portionlogOR.length();
      Tvar3=portionlogNOT.length();
      Tvar4=portionlogXoR.length();
      affect(logique,v1,v2,v3,v4);
       std::cout<<v1<<"\n\n"<<v2<<"\n\n"<<v3<<"\n \n"<<v4;
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
    if(Tvar==3&&v1=="XoR"&&v2=="AND"){//si la premiere porte est XoR et la seconde AND
     XORAND(slog);
        std::cout<<"oui continue\n";
    }else if(Tvar==3&&v1=="XoR"&&v2=="OR"){ //si la premiere porte est XoR et la seconde OR
     XOROR(slog);
        std::cout<<"oui continue\n";
    }
return 0;
}