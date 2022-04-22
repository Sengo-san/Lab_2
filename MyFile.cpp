#include <iostream>
#include <fstream>

#include "MyFile.h"

/*
MyFile::MyFile (string path_)
{
    fstr.open(path_, ios::ate);
    size = fstr.tellg();
    exist = 1;
}
*/


void MyFile::UpdateExist(bool exist_)
{
    exist = exist_;
    if (exist)
        cout << "File now exists"<< endl;
    else
        cout << "File now doesn`t exists"<< endl;
}

void MyFile::UpdateSize(int size_)
{
    if (exist)
    {
        size = size_;
        cout << "File size is " << size << " KB now" << endl;
    }

}


MyFile::~MyFile()
{
   fstr.close();
}
