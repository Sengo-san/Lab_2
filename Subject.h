#ifndef SUBJECT_H
#define SUBJECT_H

#include <vector>

#include "MyFile.h"

class Subject   //класс, отслеживающий наблюдателей
{
private:
    std::vector <Observer*> observers; //список наблюдаемых файлов
public:
    void Attach (Observer *observer_); //добавить в отслеживаемые
    void Detach (Observer *observer_); //убрать из отслеживаемых
    void NotifyExist (bool exist_); //изменить существование и уведомить об изменении
    void NotifySize (int size_); //изменить размер и уведомить об изменении
};

#endif // SUBJECT_H
