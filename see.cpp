#include <cstring>
#include <fstream>
#include <cstdlib>
#include <vector>
#include "menu.h"

using namespace std;

int see(vector<Pilmat> &ob, char *name_file)//Функция показа
{
	system("clear");
        int i;
        for(i=0;i<ob.size();i++)
        {
                cout<<".....................\n";
                cout<<" Элемент в списке:"<< i<< "\n";
                cout<<"'''''''''''''''''''''\n";
                ob[i].show();
        };
	cout<<"(Enter)>>>";
	char act;
	cin.get(act);
	cin.get(act);
	system("clear");
	
};
