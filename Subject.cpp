#include "Subject.h"

#include <algorithm>

void Subject::Attach(Observer *observer_)
{
    observers.push_back(observer_);
}

void Subject::Detach(Observer *observer_)
{
   observers.erase(remove(observers.begin(),observers.end(), observer_), observers.end());
}

void Subject::NotifyExist(bool exist_)
{
    for (vector<Observer*>::const_iterator iter = observers.begin(); iter != observers.end(); ++iter) {
        if (*iter != 0) {
            (*iter)->UpdateExist(exist_);
        }
    }
}

void Subject::NotifySize(int size_)
{
    //ищем нужный файл, меняем размер методом MyFile::UpdateSize
    for (vector<Observer*>::const_iterator iter = observers.begin(); iter != observers.end(); ++iter) {
        if (*iter != 0) {
            (*iter)->UpdateSize(size_);
        }
    }
}
