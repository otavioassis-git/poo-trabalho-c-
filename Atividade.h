#include <iostream>
#include <string>
#include <vector>
#include "Avaliacao.h"

using namespace std;

class Atividade {
    string nome;
    bool sincrona;
    vector<Avaliacao> avaliacoes;
    // protected Calendar data;

    public:
        Atividade (string nome, bool sincrona);
        ~Atividade();
        
        string obterNome();
        bool obterSincrona();
        int obterCargaHoraria();
        // Calendar obterData();

        void anexaAvaliacao(Avaliacao avaliacao);

        vector<Avaliacao> obterAvaliacoes();
        // double calculaNota();

        virtual bool ehAvaliativa();
};