#include "picture.h"

picture::picture(string _name, string _path):name(_name),path(_path){}

picture::picture()=default;

void picture::edit_data(string _name,string _path)
{
    name=_name;
    path=_path;
}

