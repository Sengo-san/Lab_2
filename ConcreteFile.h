#ifndef CONCRETEFILE_H
#define CONCRETEFILE_H

#include "Subject.h"

class ConcreteFile : Subject
{
public:
    void ChangeExist (bool exist_);
    void ChangeSize (int size_);
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
