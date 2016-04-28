#include <iostream> 
#include <cstring>  
#include <cstdlib>  
#include <vector>   
#include "menu.h"
   
using namespace std;

int delet(vector<Pilmat> &ob)//Функция удаления
{
	vector<Pilmat>::iterator min=ob.begin();
        string tmp;
	char act;
        int i,num;
	while(1)
	{
        cout<<"Введите номер удаляемой продукции >>";
        cin>>num;

                if(cin.fail())
                {
                cin.clear();
                getline(cin,tmp);
                cout<<"\nНомер задается числом! Введите число!";
                }
	break;
	}
        
	while(min<ob.end())
	{
		if(min->numerr()==num)
		{
		system("clear");
		min->show();
		ob.erase(min);
		cout<<"Элемент удалён.\n(Enter)>>>";
		cin.get(act);
		cin.get(act);
		system("clear");
		return 0;
		}
	min++; 
	}
	system("clear");
	cout << "Нет продукции с таким номером.\n(Enter)>>>";
	cin.get(act);
	cin.get(act);
	system("clear");
}
