#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>
#include "Video.h"

using namespace std;

Video::Video()
{
    this->nombre = NULL;
    this->duracion = 0;
    this->likes = 0;
}

Video::Video(const char* nombre, int duracion, int likes)
{
    this->nombre = new char[strlen(nombre)+1];
	strcpy(this->nombre, nombre);
    this->duracion = duracion;
    this->likes = likes;
}

Video::Video(const Video &v)
{
    this->nombre = new char[strlen(v.nombre)+1];
	strcpy(this->nombre, v.nombre);
    this->duracion = v.duracion;
    this->likes = v.likes;
}

Video::~Video()
{
    delete[] nombre;
}

char* Video::getNombre()
{
    return this->nombre;
}
void Video::setNombre(const char* nombre)
{
    this->nombre = new char[strlen(nombre)+1];
	strcpy(this->nombre, nombre);
}
int Video::getDuracion()
{
    return this->duracion;
}
void Video::setDuracion(int duracion)
{
    this->duracion = duracion;
}
int Video::getLikes()
{
    return this->likes;
}
void Video::setLikes(int likes)
{
    this->likes = likes;
}
void Video::meGusta()
{
    this->likes++;
}
void Video::imprimirInfo()
{
    cout << "El video " << getNombre()
    << " dura " << getDuracion() 
    << " y tiene " << getLikes() << " likes" << endl;
}