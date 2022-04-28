#include "Subject.h"

#include <algorithm>

void Subject::Attach(MyFile *file_)
{
    files.push_back(file_);
}

void Subject::Detach(MyFile *file_)
{
   files.erase(remove(files.begin(),files.end(), file_), files.end());
}

void Subject::NotifyExist(bool exist_)
{
    //ищем нужный файл, меняем существование методом MyFile::UpdateExist
    for (vector<MyFile*>::const_iterator iter = files.begin(); iter != files.end(); ++iter) {
        if (*iter != 0) {
            (*iter)->UpdateExist(exist_);
        }
    }
}

void Subject::NotifySize(int size_)
{
    //ищем нужный файл, меняем размер методом MyFile::UpdateSize
    for (vector<MyFile*>::const_iterator iter = files.begin(); iter != files.end(); ++iter) {
        if (*iter != 0) {
            (*iter)->UpdateSize(size_);
        }
    }
}
