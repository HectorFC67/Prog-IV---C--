#ifndef COMENTARIO_H
#define COMENTARIO_H

class Comentario
{
    private:
        char* nombre_video;
        char* texto;
    public:
        Comentario();
        Comentario(const char* nombre_video, char* texto);
        Comentario(const Comentario &c);
        ~Comentario();
        char* getNombreVideo();
        void setNombreVideo(char* nombre_video);
        char* getTexto();
        void setTexto(char* texto);
        void imprimirInfo();
};

#endif