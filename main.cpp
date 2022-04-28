#include <QCoreApplication>
#include <thread>
#include <iostream>
#include <fstream>

#include "ConcreteFile.h"


int main(int argc, char *argv[])
{

    MyFile file1 ("C:\\Users/tikho/Documents/Lab_2/Testfile1.txt"); //Источник

    Subject subj; //объект-наблюдатель

    subj.Attach(&file1);  //связываем наблюдателя с источником

bool oldex = 0, newex = 0;  //отметки существования
int oldsize = 0, newsize = 0;   //отметки размера

  while (true)
  {
      std::this_thread::sleep_for( std::chrono::milliseconds( 500 ) );
      ifstream str ("C:\\Users/tikho/Documents/Lab_2/Testfile1.txt", ios::ate);

      if (str) { //если открылся (существует)
         newex = 1;
         newsize = str.tellg();//размер измеряем по позиции последнего символа
      }
      else {//если не открылся (не существует)
           newex = 0;
           newsize = 0;
      }
      if (newex != oldex) file1.UpdateExist(newex);//если существование изменилось - обновляем
      if (newex && newsize != oldsize) file1.UpdateSize(newsize);//если существует И размер изменился - обновляем
      oldsize = newsize;
      oldex = newex;
      str.close();
  }

}
