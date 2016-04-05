/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <cstdlib>
#include <iostream>
#include "listacanales.h"
#include "listaanuncios.h"
using namespace std;

ListaCanales::ListaCanales() {
    this->longitud = 0;
    this->cabeza = NULL;
    this->cola = NULL;
}

int ListaCanales::getLongitud() {
    return longitud;
}

NodoCanal* ListaCanales::getCabeza() {
    return cabeza;
}

NodoCanal* ListaCanales::getCola() {
    return cola;
}

void ListaCanales::setCabeza(NodoCanal* pcanal) {
    cabeza = pcanal;
}

void ListaCanales::setCola(NodoCanal* pcanal) {
    cola = pcanal;
}

void ListaCanales::insertarAlInicio(NodoCanal * pcanal) {

    if (pcanal == NULL) {

    } else {
        if (this->cabeza == NULL) {
            cabeza = pcanal;
            this->cola = pcanal;
        } else {
            pcanal->setSiguiente(this->cabeza);
            this->cabeza = pcanal;
            this->cabeza->getSiguiente()-> setAnterior(this->cabeza);
        }
        this->longitud++;

    }

}

void ListaCanales::insertarAlFinal(NodoCanal * pcanal) {

    if (pcanal == NULL) {

    } else {
        if (this->cola == NULL) {
            cola = pcanal;
            this->cabeza = pcanal;
        } else {
            pcanal->setAnterior(this->cola);
            this->cola = pcanal;
            this->cola->getAnterior()-> setSiguiente(this->cola);
        }
    }
    this->longitud++;

}

bool ListaCanales::estaVacia() {
    return true;

}

void ListaCanales::mostrarLista() {

    NodoCanal * aux;

    if (this->cabeza != NULL) {

        aux = this->cabeza;

        cout << "Longitud " << this->longitud << endl;
        cout << "*******" << endl;

        cout << "Cabeza " << this->cabeza->getCanal()->getNombre() << endl;
        cout << "*******" << endl;


        cout << "Cola " << this->cola->getCanal()->getNombre() << endl;
        cout << "*******" << endl;

        while (aux != NULL) {
            cout << "Nombre Canal: " << aux->getCanal()->getNombre() << endl;

            if (aux->getAnterior() != NULL) {
                cout << "Nombre Canal Anterior: " << aux->getAnterior()->getCanal()->getNombre() << endl;
            }

            if (aux->getSiguiente() != NULL) {
                cout << "Nombre Canal Siguiente: " << aux->getSiguiente()->getCanal()->getNombre() << endl;
            }

            cout << "--------------------------------------------" << endl;
            aux = aux->getSiguiente();

        }
    }
}

Canal * ListaCanales::getCanalPorCodigo(string pcodigo) {

    NodoCanal * aux;

    if (this->cabeza != NULL) {

        aux = this->cabeza;

        while (aux != NULL) {
            if (aux->getCanal()->getCodigo() == pcodigo) {
                return aux->getCanal();
            }
            aux = aux->getSiguiente();
        }
    }
    
    return NULL;
}

void ListaCanales::IncluirAnuncio(string pcodigoCanal, ListaAnuncios * plistaAnuncios, string pcodigoAnuncio) {
    
    Canal * canal = this->getCanalPorCodigo(pcodigoCanal);
    
    if(canal == NULL) {
        cout << "No se encontro ningun canal con ese codigo" << endl;
    } else {
        Anuncio * anuncioAIncuir = plistaAnuncios->getAnuncioPorCodigo(pcodigoAnuncio);
    
        if(anuncioAIncuir == NULL) {
            cout << "No se encontro ningun anuncio con ese codigo" << endl;
        } else {
            if (canal->getAnunciosContratados()->elAnuncioYaExiste(pcodigoAnuncio)) {
                cout << "El anuncio ya se encuentra incluido para el canal" << endl;
            } else {
                NodoAnuncio * nodoAnuncio = new NodoAnuncio(anuncioAIncuir);
                
                NodoAnuncioContratado * nodoAnuncioContratado = new NodoAnuncioContratado(nodoAnuncio);
                
                canal->getAnunciosContratados()->insertarAlInicio(nodoAnuncioContratado);
                
                cout << "Anuncio incluido exitosamente" << endl;
            }
        }
    }
    

}
