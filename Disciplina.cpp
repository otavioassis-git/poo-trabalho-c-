#include "Disciplina.h"

Disciplina :: Disciplina(string codigo, string nome, Periodo periodo, Docente professor) {
    this->codigo = codigo;
    this->nome = nome;
    this->periodo = periodo;
    this->professor = professor;

    // atividades = new ArrayList<>();
}

string Disciplina :: obterCodigo() const{
    return codigo;
}

string Disciplina :: obterNome() const{
    return nome;
}

Periodo Disciplina :: obterPeriodo() const{
    return periodo;
}

Docente Disciplina :: obterDocente() const{
    return professor;
}

