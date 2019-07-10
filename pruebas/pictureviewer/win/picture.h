#ifndef PICTURE_H
#define PICTURE_H
#include<iostream>

//visulaizador lista enlazada
//añadir
using namespace std;

class picture
{
public:
    picture(string _name=nullptr, string _description=nullptr, string path=nullptr);
    string name;
    string description; //vector de strings para varias etiquetas
    string path;


};

#endif // PICTURE_H
