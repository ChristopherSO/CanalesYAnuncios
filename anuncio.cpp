/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <cstdlib>
#include <iostream>
#include "anuncio.h"
using namespace std;

Anuncio::Anuncio(string pcodigoEmpresa, string pnombreEmpresa,
        string pcodigoAnuncio, int ptiempoDuracion) {
    
    codigoEmpresa = pcodigoEmpresa;
    nombreEmpresa = pnombreEmpresa;
    codigoAnuncio = pcodigoAnuncio;
    tiempoDuracion = ptiempoDuracion;

}

void Anuncio::setCodigoEmpresa(string pcodigoEmpresa){
    codigoEmpresa = pcodigoEmpresa;
}

void Anuncio::setNombreEmpresa(string pnombreEmpresa){
    nombreEmpresa = pnombreEmpresa;
}

void Anuncio::setCodigoAnuncio(string pcodigoAnuncio){
    codigoAnuncio = pcodigoAnuncio;
}

void Anuncio::setTiempoDuracion(int ptiempoDuracion){
    tiempoDuracion = ptiempoDuracion;
}

string Anuncio::getCodigoEmpresa(){
    return codigoEmpresa;
}

string Anuncio::getNombreEmpresa(){
    return nombreEmpresa;
}

string Anuncio::getCodigoAnuncio(){
    return codigoAnuncio;
}

int Anuncio::getTiempoDuracion(){
    return tiempoDuracion;
}