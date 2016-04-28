#include <iostream>
#include <cstring>
#include <fstream>
#include <cstdlib>
#include <vector>
#include "menu.h"

using namespace std;

int open_file(vector<Pilmat> &ob, char *name_file)//Функция открытия файла
{
        ifstream f(name_file,ios_base::binary);//Открываем файл на чтение
        int i=0;
        if(!f)  
                {
                return 0;
                };
 
        while(1)
                {
                if(f.eof()==1)
                        break;
                ob.push_back(Pilmat());
                tick(f,ob[i]);
                i++;
                };  
        f.close();  
        kesh(ob);   
        return 1;   
};
  
int kesh(vector<Pilmat> &ob)//Вспомогательная функция для open_file()
{
        if(ob.size()==1 && ob[0].gif_numer()==0)
        ob.pop_back();
}

int rewrite_file(vector<Pilmat> &ob, char *name_file)//Функция записи
{
        int i;
        ofstream f(name_file,ios_base::binary);
        if(ob.size()==0) return 0;
        for(i=0;i<ob.size()-1;i++)
        if(ob[i].terror()==1)
        f<<ob[i]<<"\n";
        if( ob.size()>0)
        f<<ob[ob.size()-1];
        f.close();
        cout<<"Информация была сохранена в файле:"<<name_file<<"\n";
};

