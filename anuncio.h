/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   anuncio.h
 * Author: Christopher
 *
 * Created on 28 de marzo de 2016, 9:01 p.m.
 */

#ifndef ANUNCIO_H
#define ANUNCIO_H

using namespace std;

class Anuncio
{
private:
	string codigoEmpresa;
	string nombreEmpresa;
        string codigoAnuncio;
        double tiempoDuracion;
public:
	Anuncio(); // Constructora
        Anuncio(string, string, string, double); // Constructora
        void setCodigoEmpresa(string);
        void setNombreEmpresa(string);
        void setCodigoAnuncio(string);
        void setTiempoDuracion(double);
        string getCodigoEmpresa();
        string getNombreEmpresa();
        string getCodigoAnuncio();
        double getTiempoDuracion();
};

#endif /* ANUNCIO_H */

