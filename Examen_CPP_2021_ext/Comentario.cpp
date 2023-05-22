#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>
#include "Comentario.h"

using namespace std;
Comentario::Comentario()
{
    this->nombre_video = NULL;
    this->texto = NULL;
}
Comentario::Comentario(const char* nombre_video, char* texto)
{
    this->nombre_video = new char[strlen(nombre_video)+1];
	strcpy(this->nombre_video, nombre_video);
    this->texto = new char[strlen(texto)+1];
	strcpy(this->texto, texto);
}
Comentario::Comentario(const Comentario &c)
{
    this->nombre_video = new char[strlen(c.nombre_video)+1];
	strcpy(this->nombre_video, c.nombre_video);
    this->texto = new char[strlen(c.texto)+1];
	strcpy(this->texto, c.texto);
}
Comentario::~Comentario()
{
    delete[] nombre_video, texto;
}
char* Comentario::getNombreVideo()
{
    return this->nombre_video;
}
void Comentario::setNombreVideo(char* nombre_video)
{
    this->nombre_video = new char[strlen(nombre_video)+1];
	strcpy(this->nombre_video, nombre_video);
}
char* Comentario::getTexto()
{
    return this->texto;
}
void Comentario::setTexto(char* texto)
{
    this->texto = new char[strlen(texto)+1];
	strcpy(this->texto, texto);
}
void Comentario::imprimirInfo()
{
    cout << getNombreVideo() << ", comentario: " << getTexto() << endl;
}