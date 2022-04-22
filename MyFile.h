#ifndef MYFILE_H
#define MYFILE_H

#include "Observer.h"

class MyFile : Observer
{
private:
    fstream &fstr; //поток связанный с файлом
    int size; //размер файла
    bool exist;
public:
    MyFile (string path_);
    void UpdateExist (bool exist_);
    void UpdateSize (int size_);
    ~MyFile();
};


#endif // MYFILE_H
