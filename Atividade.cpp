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

vector<Avaliacao> Atividade :: obterAvaliacoes(){
    return avaliacoes;
}

 void Atividade :: anexaAvaliacao(Avaliacao avaliacao){
    avaliacoes.push_back(avaliacao);
 }