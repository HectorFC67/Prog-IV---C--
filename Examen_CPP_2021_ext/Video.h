#ifndef VIDEO_H
#define VIDEO_H

class Video
{
    private:
        char* nombre;
        int duracion;
        int likes;
    public:
        Video();
        Video(const char* nombre, int duracion, int likes);
        Video(const Video &v);
        ~Video();
        char* getNombre();
        void setNombre(const char* nombre);
        int getDuracion();
        void setDuracion(int duracion);
        int getLikes();
        void setLikes(int likes);
        void meGusta();
        void imprimirInfo();
};

#endif