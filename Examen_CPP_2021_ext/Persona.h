#ifndef PERSONA_H_
#define PERSONA_H_

class Persona
{
protected:
	char* nickName;
	int edad;
public:
	Persona();
	Persona(const char* nickName, int edad);
	virtual ~Persona();
	void setNickName(const char* nickName);
	char* getNickName() const;
	void setEdad(int edad);
	int getEdad() const;
	virtual void imprimirInfo()=0;
};


#endif /* PERSONA_H_ */
