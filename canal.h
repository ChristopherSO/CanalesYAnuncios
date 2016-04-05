/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   canal.h
 * Author: Christopher
 *
 * Created on 28 de marzo de 2016, 7:34 p.m.
 */

#ifndef CANAL_H
#define CANAL_H

#include "listaanuncioscontratados.h"

using namespace std;

class Canal {
private:
    string codigo;
    string nombre;
    int telefono;
    double montoMinimo;
    double tiempoMinimo;
    double tiempoMaximo;
    double costoPorMinuto;
    ListaAnunciosContratados * anunciosContratados;
public:
    Canal(); // Constructora
    Canal(string, string, int, double, double, double, double); // Constructora
    void setCodigo(string);
    void setNombre(string);
    void setTelefono(int);
    void setMontoMinimo(double);
    void setTiempoMinimo(double);
    void setTiempoMaximo(double);
    void insertarAnuncioContratadoAlInicio(NodoAnuncio *);
    void setCostoPorMinuto(double);
    string getCodigo();
    string getNombre();
    int getTelefono();
    double getMontoMinimo();
    double getTiempoMinimo();
    double getTiempoMaximo();
    double getCostoPorMinuto();
    ListaAnunciosContratados * getAnunciosContratados();
    void ActualizaCobros();
    void ImprimeCanal();
};

#endif // LISTAENTEROS_H