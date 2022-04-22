#ifndef SUBJECT_H
#define SUBJECT_H

#include <vector>

#include "MyFile.h"


class Subject
{
    std::vector<MyFile*> files; //наблюдаемые файлы

  public:
    void Attach (MyFile *file_); //добавить в отслеживаемые
    void Detach (MyFile *file_); //убрать из отслеживаемых
    void NotifyExist (bool exist_); //изменить существование и уведомить об изменении
    void NotifySize (int size_); //изменить размер и уведомить об изменении
};

#endif // SUBJECT_H
