#include "Persona.h"
#include <string.h>

Persona::Persona()
{
	this->nickName=NULL;
	this->edad=-1;
}
Persona::Persona(const char* nickName, int edad)
{
	this->nickName = new char[strlen(nickName)+1];
	strcpy(this->nickName, nickName);
	this->edad=edad;
}
Persona::~Persona()
{
	delete []this->nickName;
}
void Persona::setNickName(const char* nickName)
{
	this->nickName = new char[strlen(nickName)+1];
	strcpy(this->nickName, nickName);
}

char* Persona::getNickName() const
{
	return this->nickName;
}

void Persona::setEdad(int edad)
{
	this->edad=edad;
}

int Persona::getEdad() const
{
	return this->edad;
}



