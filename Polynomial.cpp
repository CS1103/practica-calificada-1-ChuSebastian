//
// Created by rudri on 9/12/2019.
//

#include <stdexcept>
#include <iostream>
#include "Polynomial.h"

Polynomial::Polynomial() {
}


void Polynomial::add(int coef, int grado) {
    int *lista = new int [2];
    int auxgrado;
    cin >> coef;
    cin >> grado;
    
}

Polynomial Polynomial::operator*(const int) {
    return Polynomial();
}

Polynomial Polynomial::operator*(const Polynomial &) {
    return Polynomial();
}

Polynomial &Polynomial::operator=(const Polynomial &) {
    return <#initializer#>;
}

Polynomial Polynomial::operator+(const Polynomial &) {
    return Polynomial();
}

Polynomial Polynomial::operator+=(const Polynomial &) {
    return Polynomial();
}



