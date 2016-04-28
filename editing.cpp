#include <iostream>
#include <cstring>
#include <cstdlib>
#include <vector>
#include "menu.h"

using namespace std;

int Editing(vector<Pilmat> &ob)//Функция редактирования
{
	system("clear");
        int o,i,a;
        char* b;
        int m=10;
        string str;
        cout<<"\t\tРедактирование\n";
        cout<<"\t\t^^^^^^^^^^^^^^\n";
	while(1)
	{
        cout<<"Введите номер элемента в списке,который вы хотите редактировать >>";
        cin >>o;
	if(o>-1 && o<ob.size())
	break;
	}
	system("clear");
        cout<<"\nВыбранный элемент списка:\n";
        ob[o].show();
	
 
                cout<<"\n\nЧто Вы хотите редактировать?\n";
                cout<<"1. Редактировать номер в списке \n";
                cout<<"2. Редактировать породу древесины \n";
                cout<<"3. Редактировать тип древесины \n";   
                cout<<"4. Редактировать обьём древесины, имеющийся на складе(м^3)\n";
                cout<<"5. Редактировать обьём древесины, который необходимо обработать(м^3)\n";
                cout<<"6. Редактировать себестоимость производства 1 м^3 древесины \n"; 
                cout<<"7. Редактировать время необходимое на производство древесины \n";
                cout<<"8. Редактировать обьем древесины,полученный в результате обработки(м^3)\n";
                cout<<"0. Ничего больше не редактировать.\n\n";
 
        while(m!=0)
        {
         
                cout<<"Выберите пункт, который Вы хотите редактировать: ";
                cin>> m;

		switch(m)
                        {
                        case 1:
                        cout<< "Введите новый номер в списке >> ";
                        cin>>a;
                        ob[o].help(a);
                                break;
                        case 2:
                        cout<< "Введите новую породу древесины >> ";
                        getline(cin,str);
                        getline(cin,str);
                        b=new char[str.length()+1];
                        strcpy(b,str.c_str());
                        ob[o].help1(b);
                        delete b;
                                break;
                        case 3:
                        cout<<"Введите новый тип древесины >> ";
                        getline(cin,str);
                        getline(cin,str);
                        b=new char[str.length()+1];
                        strcpy(b,str.c_str());
                        ob[o].help2(b);
                        delete b;
                                break;
                        case 4:
                        cout<<"Введите новый обьём древесины, имеющийся на складе(м^3) >> ";
			getline(cin,str);
                        getline(cin,str);
                        b=new char[str.length()+1];
                        strcpy(b,str.c_str());
                        ob[o].help3(b);
                        delete b;

                                break; 
                        case 5:
                        cout<<"Введите новый обьём древесины, который необходимо обработать(м^3) >> ";
			getline(cin,str);
                        getline(cin,str);
                        b=new char[str.length()+1];
                        strcpy(b,str.c_str());
                        ob[o].help6(b);
                        delete b;

                                break; 
			case 6:
                        cout<<"Введите новую себестоимость производства 1 м^3 древесины >> ";
			getline(cin,str);
                        getline(cin,str);
                        b=new char[str.length()+1];
                        strcpy(b,str.c_str());
                        ob[o].help4(b);
                        delete b;

                                break; 
                        case 7:
                        cout<<"Введите новое время необходимое на производство древесины(час) >> ";
			getline(cin,str);
                        getline(cin,str);
                        b=new char[str.length()+1];
                        strcpy(b,str.c_str());
                        ob[o].help5(b);
                        delete b;

                                break; 
                        case 8:
                        cout<<"Введите новый обьем древесины,полученный в результате обработки(м^3) >> ";
			getline(cin,str);
                        getline(cin,str);
                        b=new char[str.length()+1];
                        strcpy(b,str.c_str());
                        ob[o].help7(b);
                        delete b;

                                break; 
                        case 0:
			system("clear");
                        cout<<"Редактирование завершено.\n(Enter)>>>";
			char act;
			cin.get(act);
			cin.get(act);
			system("clear");
                                break;
                        };
        }
                return 1;
}