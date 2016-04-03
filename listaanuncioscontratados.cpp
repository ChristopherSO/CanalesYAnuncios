/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <cstdlib>
#include <iostream>
#include "anuncio.h"
#include "listaanuncioscontratados.h"
using namespace std;

ListaAnunciosContratados::ListaAnunciosContratados() {
    costoTotalPorCobrar = 0;
}

void ListaAnunciosContratados::setCabeza(NodoAnuncioContratado* panunciocontrado) {

    costoTotalPorCobrar = 0;
}

void ListaAnunciosContratados::setCostoTotalPorCobrar(int pmonto) {
    costoTotalPorCobrar = pmonto;
}

int ListaAnunciosContratados::getLongitud() {
    return longitud;
}

int ListaAnunciosContratados::getCostoTotalPorCobrar() {
    return costoTotalPorCobrar;
}

NodoAnuncioContratado* ListaAnunciosContratados::getCabeza() {
    return cabeza;
}

void ListaAnunciosContratados::insertarAlInicio(NodoAnuncioContratado * panuncio) {

    if (panuncio == NULL) {

    } else {
        if (this->cabeza == NULL) {
            cabeza = panuncio;
        } else {
            panuncio->setSiguiente(this->cabeza);
            this->cabeza = panuncio;
        }
        this->longitud++;

    }


}

bool ListaAnunciosContratados::estaVacia() {
    return true;
}

void ListaAnunciosContratados::mostrarLista() {

    NodoAnuncioContratado * aux;

    if (this->cabeza != NULL) {

        aux = this->cabeza;

        while (aux != NULL) {
            cout << "Código Anuncio Contratado: " << aux->getCodigoAnuncio() << endl;
            aux = aux->getSiguiente();

        }
        
    }

}

