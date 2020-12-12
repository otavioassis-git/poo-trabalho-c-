#include "Periodo.h"

Periodo :: Periodo(int ano, char semestre, string codigo){
    this->ano = ano;
    this->semestre = semestre;
    this->codigo = codigo;
}

int Periodo :: obeterAno() const{
    return ano;
}

char Periodo :: obterSemestre() const{
    return semestre;
}

string Periodo :: obterCodigo() const{
    return codigo;
}

