#include <QCoreApplication>
#include <thread>
#include <iostream>
#include <fstream>

#include "ConcreteFile.h"


int main(int argc, char *argv[])
{

    MyFile file1 ("TestFile1.txt");//Источник

    Subject subj; //объект-наблюдатель

    subj.Attach(&file1);  //связываем наблюдателя с источником


bool oldex = 0, newex;//отметки существования
int oldsize = 0, newsize;//отметки размера

  while (true)
  {
      std::this_thread::sleep_for( std::chrono::milliseconds( 100 ) );
      ifstream str ("Testfile1", ios::ate);
      if (str) {
         newex = 1;
         newsize = str.tellg();
      }
      if (newex != oldex) file1.UpdateExist(newex);
      if (newex && newsize != oldsize) file1.UpdateSize(newsize);
      oldsize=newsize;
      oldex=newex;
      str.close();
  }

}
