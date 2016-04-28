#include <iostream> 
#include <cstring>  
#include <cstdlib>  
#include <vector>   
#include "menu.h"
   
using namespace std;

int sort(vector<Pilmat> &ob)//Функция сортировки 
{
        Pilmat buf;
        int i;
        int flag=0;
        for(i=0;i<ob.size()-1;i++)
        {
                if(ob[i]>ob[i+1])
                        {
                        buf=ob[i];
                        ob[i]=ob[i+1];
                        ob[i+1]=buf;  
                        flag=1;
                        }
        if (flag==0) break;
        }
}
