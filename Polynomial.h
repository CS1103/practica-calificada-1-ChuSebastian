//
// Created by ruben on 9/12/2019.
//

#ifndef POLINOMIO_POLINOMIO_H
#define POLINOMIO_POLINOMIO_H

#include <vector>
using namespace std;

class Polynomial {
private:
    int coeficiente;
    int exponente;
    int *lista;
    
public:
    Polynomial ();
    void add(int, int);
};

#endif //POLINOMIO_POLINOMIO_H
