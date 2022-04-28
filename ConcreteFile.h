#ifndef CONCRETEFILE_H
#define CONCRETEFILE_H

#include "Subject.h"



class ConcreteFile : Subject //реальный класс, реализующий Subject - класс, отслеживающий наблюдателей
{
public:
    void ChangeExist (bool exist_); //изменить существование
    void ChangeSize (int size_); //изменить размер
};

void ConcreteFile::ChangeExist(bool exist_)
{
    NotifyExist(exist_);
}

void ConcreteFile::ChangeSize(int size_)
{
    NotifySize (size_);
}


#endif // CONCRETEFILE_H
