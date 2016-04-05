/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <cstdlib>
#include <iostream>
#include "anuncio.h"
#include "canal.h"
#include "listaanuncios.h"
#include "listaanuncioscontratados.h"
using namespace std;

Canal::Canal(string pcodigo, string pnombre, int ptelefono, double pmontoMinimo,
        double ptiempoMinimo, double ptiempoMaximo, double pcostoPorMinuto) {

    codigo = pcodigo;
    nombre = pnombre;
    telefono = ptelefono;
    montoMinimo = pmontoMinimo;
    tiempoMinimo = ptiempoMinimo;
    tiempoMaximo = ptiempoMaximo;
    costoPorMinuto = pcostoPorMinuto;
    anunciosContratados = new ListaAnunciosContratados();

}

void Canal::setCodigo(string pcodigo) {
    codigo = pcodigo;
}

void Canal::setNombre(string pnombre) {
    nombre = pnombre;
}

void Canal::setTelefono(int ptelefono) {
    telefono = ptelefono;
}

void Canal::setMontoMinimo(double pmontoMinimo) {
    montoMinimo = pmontoMinimo;
}

void Canal::setTiempoMinimo(double ptiempoMinimo) {
    tiempoMinimo = ptiempoMinimo;
}

void Canal::setTiempoMaximo(double ptiempoMaximo) {
    tiempoMaximo = ptiempoMaximo;
}

void Canal::setCostoPorMinuto(double pcostoPorMinuto) {
    costoPorMinuto = pcostoPorMinuto;
}

void Canal::insertarAnuncioContratadoAlInicio(NodoAnuncio * panuncio) {

    NodoAnuncioContratado * nodoAnuncioContratado;
    nodoAnuncioContratado = new NodoAnuncioContratado(panuncio);
    
    this->anunciosContratados->insertarAlInicio(nodoAnuncioContratado);
}

string Canal::getCodigo() {
    return codigo;
}

string Canal::getNombre() {
    return nombre;
}

int Canal::getTelefono() {
    return telefono;
}

double Canal::getMontoMinimo() {
    return montoMinimo;
}

double Canal::getTiempoMinimo() {
    return tiempoMinimo;
}

double Canal::getTiempoMaximo() {
    return tiempoMaximo;
}

double Canal::getCostoPorMinuto() {
    return costoPorMinuto;
}

ListaAnunciosContratados * Canal::getAnunciosContratados() {
    return anunciosContratados;
}

void Canal::ActualizaCobros() {
    
    if (anunciosContratados->getCabeza()!= NULL) {

        this->anunciosContratados->setCostoTotalPorCobrar(0);
        NodoAnuncioContratado * aux = this->anunciosContratados->getCabeza();

        while (aux != NULL) {
            double submonto = 0;
            double duracion = aux->getNodoAnuncio()->getAnuncio()->getTiempoDuracion();
            /*
             * Si un anuncio tiene menos tiempo en transmisión se le cobrará el
             * monto mínimo a Cobrar por el canal
             */
            if (duracion < tiempoMinimo) {
                submonto += montoMinimo;
            } else {
                /*
                 * Si un anuncio tiene mayor tiempo al máximo a trasmitir, se le 
                 * cobrará el doble del Costo por minuto al doble, solo a los minutos extras.
                 */                
                if (duracion > tiempoMaximo) {
                    // Monto exedido
                    submonto += this->getCostoPorMinuto() * (duracion - tiempoMaximo);
                    duracion = tiempoMaximo;
                }
                // Monto regular
                submonto += this->getCostoPorMinuto() * duracion;
                
                aux->setCosto(submonto);
                
                this->anunciosContratados->setCostoTotalPorCobrar(
                        this->anunciosContratados->getCostoTotalPorCobrar()
                        + submonto
                );
            }            
            
            aux = aux->getSiguiente();
        }
    }
}

void Canal::ImprimeCanal() {
    this->getAnunciosContratados()->mostrarLista();
}
