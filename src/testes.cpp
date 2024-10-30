#include <iostream>
#include <vector>
#include "Data.h"


typedef struct Solucao{
    std::vector<int> sequencia;
    double valorObj;
} Solucao;

Solucao s1 = {{1,6,3,2,5,4,1}, 0};

void exibirSolucao(Solucao *s)
{
    for(int i = 0; i < s->sequencia.size() - 1; i++)
        std::cout << s->sequencia[i] << " -> ";
    std::cout << s->sequencia.back() << std::endl;
}


int main(){
    exibirSolucao(&s1);
    return 0;
}