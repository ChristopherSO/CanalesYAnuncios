/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <cstdlib>
#include <iostream>
#include "nodocanal.h"
using namespace std;

NodoCanal::NodoCanal() {

}

NodoCanal::NodoCanal(Canal* pcanal) {
    canal = pcanal;
}

Canal* NodoCanal::getCanal() {
    return canal;
}

NodoCanal* NodoCanal::getAnterior() {
    return anterior;
}

NodoCanal* NodoCanal::getSiguiente() {
    return siguiente;
}

void NodoCanal::setCanal(Canal* pcanal) {
    canal = pcanal;
}

void NodoCanal::setAnterior(NodoCanal* panterior) {
    anterior = panterior;
}

void NodoCanal::setSiguiente(NodoCanal* psiguiente) {
    siguiente = psiguiente;
}








