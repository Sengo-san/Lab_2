#ifndef MYFILE_H
#define MYFILE_H

#include "Observer.h"

class MyFile : Observer
{
private:
    string path;//путь к файлу (имя файла)
    int size; //размер файла
    bool exist;
public:
    MyFile (string path_);
    void UpdateExist (bool exist_);
    void UpdateSize (int size_);
};


#endif // MYFILE_H
