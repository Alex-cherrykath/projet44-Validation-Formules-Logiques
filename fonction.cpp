#include <iostream>
#include<string>
#include<vector>
//fontion AND et OR

void ANDOR(int s[8]){

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
    
//formule Qui pemet de determiner la valeur de verite de AND et OR
    for(int i=0; i<=8; i++){

        if(val1[i]==1 && val2[i]==1) {
            s[i]=1;
        }else if(val3[i]==1){
            s[i]=1;
        }else{
            s[i]=0;
        }
    }

    for(int j=0; j<=8; j++){
    
    std::cout<<val1[j]<<"|";
    std::cout<<val2[j]<<"|";
    std::cout<<val3[j]<<"|";
    std::cout<<s[j];
    std::cout<<"\n";
}
}

//fontion pour AND Et AND

void ANDAND(int s[8]){

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

    //formule aui permet de determiner la valeur de veriter de AND et AND
    for(int i=0; i<=8; i++){
        if(val1[i]==1 && val2[i]==1){
            if(val3[i]==1){
                s[i]=1;
            }else{
                s[i]=0;
            }
        }else{
            s[i]=0;
        }
    }

for(int j=0; j<=8; j++){
    
    std::cout<<val1[j]<<"|";
    std::cout<<val2[j]<<"|";
    std::cout<<val3[j]<<"|";
    std::cout<<s[j];
    std::cout<<"\n";
}
}

//fontion pour AND et XoR
void ANDXoR(int s[8]){

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

    //formule aui permet de determiner la valeur de veriter de AND et XoR
    for(int i=0; i<=8; i++){
        if(val1[i]==1 && val2[i]==1){
            if(val3[i]==1){
                s[i]=0;
            }else{
                s[i]=1;
            }
        }else{
            s[i]=0;
        }
    }

for(int j=0; j<=8; j++){
    
    std::cout<<val1[j]<<"|";
    std::cout<<val2[j]<<"|";
    std::cout<<val3[j]<<"|";
    std::cout<<s[j];
    std::cout<<"\n";
}
}

//fontion pour AND,OR,NOT


void ANDORNOT(int s[8]){

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

    val3[0]=1;
    val3[1]=0;
    val3[2]=1;
    val3[3]=0;
    val3[4]=1;
    val3[5]=0;
    val3[6]=1;
    val3[7]=0;
    
//formule Qui pemet de determiner la valeur de verite de AND,OR,NOT
    for(int i=0; i<=8; i++){

        if(val1[i]==1 && val2[i]==1) {
            s[i]=1;
        }else if(val3[i]==1){
            s[i]=1;
        }else{
            s[i]=0;
        }
    }

    for(int j=0; j<=8; j++){
    
    std::cout<<val1[j]<<"|";
    std::cout<<val2[j]<<"|";
    std::cout<<val3[j]<<"|";
    std::cout<<s[j];
    std::cout<<"\n";
}
}

//fontion pour AND,AND,NOT

void ANDANDNOT(int s[8]){

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

    
    val3[0]=1;
    val3[1]=0;
    val3[2]=1;
    val3[3]=0;
    val3[4]=1;
    val3[5]=0;
    val3[6]=1;
    val3[7]=0;

    //formule aui permet de determiner la valeur de veriter de AND,AND,NOT
    for(int i=0; i<=8; i++){
        if(val1[i]==1 && val2[i]==1){
            if(val3[i]==1){
                s[i]=1;
            }else{
                s[i]=0;
            }
        }else{
            s[i]=0;
        }
    }

for(int j=0; j<=8; j++){
    
    std::cout<<val1[j]<<"|";
    std::cout<<val2[j]<<"|";
    std::cout<<val3[j]<<"|";
    std::cout<<s[j];
    std::cout<<"\n";
}
}

//fontion pour AND,XoR,NOT
void ANDXoRNOT(int s[8]){

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

   
    val3[0]=1;
    val3[1]=0;
    val3[2]=1;
    val3[3]=0;
    val3[4]=1;
    val3[5]=0;
    val3[6]=1;
    val3[7]=0;

    //formule aui permet de determiner la valeur de veriter de AND,XoR,NOT
    for(int i=0; i<=8; i++){
        if(val1[i]==1 && val2[i]==1){
            if(val3[i]==1){
                s[i]=0;
            }else{
                s[i]=1;
            }
        }else{
            s[i]=0;
        }
    }

for(int j=0; j<=8; j++){
    
    std::cout<<val1[j]<<"|";
    std::cout<<val2[j]<<"|";
    std::cout<<val3[j]<<"|";
    std::cout<<s[j];
    std::cout<<"\n";
}
}

//formule pour OR,AND

void ORAND(int s[8]){

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

    //formule aui permet de determiner la valeur de veriter de OR, AND
    for(int i=0; i<=8; i++){
        if(val1[i]==1 && val2[i]==1){
            if(val3[i]==1){
                s[i]=1;
            }else{
                s[i]=0;
            }
        }else{
            s[i]=0;
        }
    }

for(int j=0; j<=8; j++){
    
    std::cout<<val1[j]<<"|";
    std::cout<<val2[j]<<"|";
    std::cout<<val3[j]<<"|";
    std::cout<<s[j];
    std::cout<<"\n";
}
}

//FORMULE POUR OR,OR,NOT

void OROR(int s[8]){

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

    //formule aui permet de determiner la valeur de veriter de OR,OR
    for(int i=0; i<=8; i++){
        if(val1[i]==1 ){
            s[i]=1;
            }else if(val2[i]==1){
                s[i]=1;
            }else if(val3[i]=1){
                s[i]=1;
            }
        else{
            s[i]=0;
        }
    }

for(int j=0; j<=8; j++){
    
    std::cout<<val1[j]<<"|";
    std::cout<<val2[j]<<"|";
    std::cout<<val3[j]<<"|";
    std::cout<<s[j];
    std::cout<<"\n";
}
}

//fonction pour OR,XoR,NOT

void ORXoR(int s[8]){

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

    int inter[8];
    //formule aui permet de determiner la valeur de veriter de OR,XoR,
    for(int i=0; i<=8; i++){

        //on evalue d4abord le OR
        if(val1[i]==1 || val2[i]==1){
             inter[i]=1;
        }else{
            inter[i]=0;
        }

        //on combine avec le xor
        for(int i=0; i<=8; i++){
            if(inter[i]=1){
                if(val3[i]=0){
                    s[i]=1;
                }else{
                    s[i]=0;
                }
            }else if(val3[i]=1){
                s[i]=1;
            }else{
                s[i]=0;
            }
        }

for(int j=0; j<=8; j++){
    
    std::cout<<val1[j]<<"|";
    std::cout<<val2[j]<<"|";
    std::cout<<val3[j]<<"|";
    std::cout<<inter[j]<<"|";
    std::cout<<s[j];
    std::cout<<"\n";
}
}
}

//formule pour OR,AND,NOT

void ORANDNOT(int s[8]){

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

    val3[0]=1;
    val3[1]=0;
    val3[2]=1;
    val3[3]=0;
    val3[4]=1;
    val3[5]=0;
    val3[6]=1;
    val3[7]=0;

    //formule aui permet de determiner la valeur de veriter de OR, AND,NOT
    for(int i=0; i<=8; i++){
        if(val1[i]==1 && val2[i]==1){
            if(val3[i]==1){
                s[i]=1;
            }else{
                s[i]=0;
            }
        }else{
            s[i]=0;
        }
    }

for(int j=0; j<=8; j++){
    
    std::cout<<val1[j]<<"|";
    std::cout<<val2[j]<<"|";
    std::cout<<val3[j]<<"|";
    std::cout<<s[j];
    std::cout<<"\n";
}
}

//FORMULE POUR OR,OR,NOT

void ORORNOT(int s[8]){

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

    val3[0]=1;
    val3[1]=0;
    val3[2]=1;
    val3[3]=0;
    val3[4]=1;
    val3[5]=0;
    val3[6]=1;
    val3[7]=0;

    //formule aui permet de determiner la valeur de veriter de OR,OR,NOT
    for(int i=0; i<=8; i++){
        if(val1[i]==1 ){
            s[i]=1;
            }else if(val2[i]==1){
                s[i]=1;
            }else if(val3[i]=1){
                s[i]=1;
            }
        else{
            s[i]=0;
        }
    }

for(int j=0; j<=8; j++){
    
    std::cout<<val1[j]<<"|";
    std::cout<<val2[j]<<"|";
    std::cout<<val3[j]<<"|";
    std::cout<<s[j];
    std::cout<<"\n";
}
}

//formule pour OR,XoR,NOT

void ORXoRNOT(int s[8]){
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

    int inter[8];
    //formule aui permet de determiner la valeur de veriter de OR,XoR,
    for(int i=0; i<=8; i++){

        //on evalue d4abord le OR
        if(val1[i]==1 || val2[i]==1){
             inter[i]=1;
        }else{
            inter[i]=0;
        }

        //on combine avec le xor
        for(int i=0; i<=8; i++){
            if(inter[i]=1){
                if(val3[i]=0){
                    s[i]=1;
                }else{
                    s[i]=0;
                }
            }else if(val3[i]=1){
                s[i]=1;
            }else{
                s[i]=0;
            }
        }

for(int j=0; j<=8; j++){
    
    std::cout<<val1[j]<<"|";
    std::cout<<val2[j]<<"|";
    std::cout<<val3[j]<<"|";
    std::cout<<inter[j]<<"|";
    std::cout<<s[j];
    std::cout<<"\n";
}
}
}