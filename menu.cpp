#include <iostream>
#include <cstring>
#include <fstream>
#include <cstdlib>
#include <vector>
#include "menu.h"
using namespace std;

int menu(char *name_file)//Функция меню
{
	vector<Pilmat> ob;
	char ch;
	Pilmat *beg;
	Pilmat buf;
	system("clear");
	ifstream f(name_file,ios_base::in | ios_base::binary);
	if(f)
	{
	open_file(ob,name_file);
	if(ob.size()>0)
	cout <<">>>Информация файла |"<< name_file <<"| была считана.\n";
        else 
	 {
             cout<<"\t    ....................................\n";
	     cout<<"\t    ФАЙЛ ПУСТОЙ. ИНФОРМАЦИЯ ОТСУТСТВУЕТ.\n";
             cout<<"\t    ''''''''''''''''''''''''''''''''''''\n";
         }
	}
  	else{
             cout<<"............................................................";
	     cout<<"\nФайла не существует и будет создан по завершению программы!\n";
             cout<<"               Вы можете приступить к работе.\n";
             cout<<"'''''''''''''''''''''''''''''''''''''''''''''''''''''''''''\n";}
	int nomer=10;
	while(1){
		cout<< "Меню:\n\n"; 
                cout<< "1. Добавить cортимент продукции\n";
                cout<< "2. Редактировать сортимент продукции\n";
                cout<< "3. Удалить продукцию\n";
                cout<< "4. Искать продукцию по заданному критерию\n";
                cout<< "5. Вывести сортимент продукции на экран\n";
                cout<< "0. Выход из программы\n";
		cout<< "\nВыберите интересующий вас пункт меню:";
		cin >> nomer;
		cout <<"\n";
		if(nomer==0) break;
		switch (nomer)
		{
			case 1:
			Zagruz(ob);//Добавление
			sort(ob);
				break;
			case 2:
			Editing(ob);//Редактирование
			sort(ob);
				break;
			case 3:
			system("clear");
			delet(ob);//Удаление
				break;
			case 4:
			Search(ob);//Поиск
				break;
			case 5:
			see(ob,name_file);//Показ
				break;
            
			default: 
				cout <<">>>Указанный вами пункт меню отсутствует.Попробуйте еще раз."<< endl;
				break;
		};
	}
	system("clear");
	rewrite_file(ob,name_file);//Запись
	return 0;
}

