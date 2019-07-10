#ifndef PICTURE_H
#define PICTURE_H
#include<iostream>
#include<QVector>

//visulaizador lista enlazada
//añadir
using namespace std;

class picture
{
public:
    string name;
    string path;
    picture(string _name="none", string _path="none")
    {
        name=_name;
        path=_path;
    }
    QVector <string> description; //vector de strings para varias etiquetas
    //void add_description(const string &d);
   // void remove_description(const string &d);
   // void change_name(const string &d);

};

#endif // PICTURE_H
