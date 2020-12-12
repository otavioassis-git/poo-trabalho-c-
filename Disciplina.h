#include <iostream>
#include <string>
#include "Periodo.h"
#include "Docente.h"

using namespace std;

class Disciplina{
    string codigo;
    string nome;
    Periodo periodo;
    Docente professor;
    // private ArrayList<Atividade> atividades;

    public:
        Disciplina(string codigo, string nome, Periodo periodo, Docente professor);
        ~Disciplina();

        string obterCodigo() const;
        string obterNome() const;
        Periodo obterPeriodo() const;
        Docente obterDocente() const;

        // void anexaAtividade();
        // ArrayList<Atividade> obterAtividades();
        // double obterNotaTotal();
        // int obterAvaliacoesTotal();

        // int obterSincronas();
        // int obterAvalitiva();
        // int obterCargaHoraria();
};