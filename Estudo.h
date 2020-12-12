#include <iostream>
#include <string>
#include "Atividade.h"

using namespace std;

class Estudo : public Atividade{
    // ArrayList<Material> materiais;

    public:
        Estudo (string nome, bool sincrona) : Atividade(nome, sincrona){}
        ~Estudo();

        // ArrayList<Material> getMateriais()
        bool ehAvaliativa();
};