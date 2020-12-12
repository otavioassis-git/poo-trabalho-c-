#include <iostream>
#include <string>

using namespace std;

class Atividade {
    string nome;
    bool sincrona;
    // private ArrayList<Avaliacao> avaliacoes;
    // protected Calendar data;

    public:
        Atividade (string nome, bool sincrona);
        ~Atividade();
        
        string obterNome();
        bool obterSincrona();
        int obterCargaHoraria();
        // Calendar obterData();

        // void anexaAvaliacao(Avaliacao avaliacao);

        // ArrayList<Avaliacao> obterAvaliacoes();
        // double calculaNota();

        virtual bool ehAvaliativa();
};