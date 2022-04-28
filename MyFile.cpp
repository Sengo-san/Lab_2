#include <iostream>
#include <fstream>

#include "MyFile.h"


MyFile::MyFile (string path_)
{
    fstream fstr_ (path_, ios::ate);
  if (fstr_) { //если открылся, устанавливаем член-данные
      exist = 1;
      size = fstr_.tellg();
      path = path_;
  }
}


void MyFile::UpdateExist(bool exist_)
{
    exist = exist_;
    if (exist) //если существует
        cout << "File now exists" << endl;
    else    //если не существует
        cout << "File now doesn`t exists"<< endl;
}

void MyFile::UpdateSize(int size_)
{
    if (exist) //если существует
    {
        //присваиваем и выводим размер
        size = size_;
        cout << "File size is " << size << " KB now" << endl;
    }
}
