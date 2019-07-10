#ifndef PICTURE_H
#define PICTURE_H

#include<iostream>
#include<vector>

using namespace std;
class picture
{

public:

    string name;
    string path;
    //vector<string>descriptions;

    picture();
    picture(string _name, string _path);
    void add_description();

    ~picture()=default;

};

#endif // PICTURE_H
