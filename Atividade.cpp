#include "Atividade.h"

Atividade :: Atividade (string nome, bool sincrona){
    this->nome = nome;
    this->sincrona = sincrona;
}

string Atividade :: obterNome(){
    return nome;
}

bool Atividade :: obterSincrona(){
    return sincrona;
}

int Atividade :: obterCargaHoraria(){
    return 2;
}