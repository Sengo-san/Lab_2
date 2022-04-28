#ifndef MYFILE_H
#define MYFILE_H

#include "Observer.h"


class MyFile : Observer //класс, за объектом которого ведем наблюдение
{
private:
    string path; //путь к файлу (имя файла)
    int size; //размер файла
    bool exist; //0 - не существует, 1 - существует
public:
    MyFile (string path_);
    void UpdateExist (bool exist_); //установить существование
    void UpdateSize (int size_); //установить размер
};


#endif // MYFILE_H
