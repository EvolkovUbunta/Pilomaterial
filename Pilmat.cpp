#include "Pilmat.h"
#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;//Пространство имён

Pilmat::Pilmat()//Конструктор
{
	numer=0;//Номер 
        name = new char[100];//Породы
        type = new char[30];//Тип
        vol1 = new char[50];//Обьём
        cost = new char[50];//Обьём
        time = new char[50];//Время
        vol2 = new char[50];//Обьём
        vol3 = new char[50];//Обьём
};

Pilmat::Pilmat(int a,char *k2, char *k3,char *z,char *v,char *n, char *l,char *y)//Конструктор с параметрами 
{
	numer=a;//Номер в списке 
        name = new char[100];//Породы
	strcpy(name,k2);
        type = new char[30];//Тип
	strcpy(type,k3);
	vol1 = new char[50];
        strcpy(vol1,z);//Обьём
	vol2 = new char[50];
	strcpy(vol2,v);//Обьём
	cost = new char[50];
        strcpy(cost,n);//Обьём
	time = new char[50];
        strcpy(time,l);//Время
	vol3 = new char[50];
        strcpy(vol3,y);//Обьём
};

Pilmat::~Pilmat()//Деструктор
{
	delete [] name;
	delete [] type;
	delete [] vol1;
	delete [] vol2;
	delete [] cost;
	delete [] time;
	delete [] vol3;
}

Pilmat::Pilmat(const Pilmat &o)//Конструктор копий
{
	numer=o.numer;
	name=new char[100];
	strcpy(name,o.name);
	type=new char[100];
	strcpy(type,o.type);
	vol1 = new char[50];
	strcpy(vol1,o.vol1);
	vol2 = new char[50];
	strcpy(vol2,o.vol2);
	cost = new char[50];
	strcpy(cost,o.cost);
	time = new char[50];
	strcpy(time,o.time);
	vol3 = new char[50];
	strcpy(vol3,o.vol3);
}

int tick(istream &potok,Pilmat &ob)//Функция для open_file()
{
	char *buf;
	buf=new char[15];
	potok.getline(buf,15);
	ob.numer=atoi(buf);
	
	potok.getline(ob.name,100);
	potok.getline(ob.type,100);
	potok.getline(ob.vol1,50);
	potok.getline(ob.vol2,50);
	potok.getline(ob.cost,50);
	potok.getline(ob.time,50);
	potok.getline(ob.vol3,50);


}

/*Вспомогательные функции для Search()*/

int Pilmat::numerr()
{
        return numer;
}

string Pilmat::namee()
{
	return name;
}

string Pilmat::typee()
{
	return type;
}

string Pilmat::vol11()
{
	return vol1;
}

string Pilmat::vol22()
{
	return vol2;
}

string Pilmat::costt()
{
	return cost;
}

string Pilmat::timee()
{
	return time;
}

string Pilmat::vol33()
{
	return vol3;
}

/*Вспомогательные функции для Editing()*/

void Pilmat::help(int x)
{	
	numer=x;
}

void Pilmat::help1(char* p)
{
	name = new char[sizeof(p)];
        strcpy(name,p);
}

void Pilmat::help2(char *m)
{
	type = new char[sizeof(m)];
	strcpy(type,m);
}

void Pilmat::help3(char *z)
{
	vol1 = new char[sizeof(z)];	
	strcpy(vol1,z);
}

void Pilmat::help6(char *v)
{
	vol2 = new char[sizeof(v)];	
	strcpy(vol2,v);
}
void Pilmat::help4(char *n)
{	
	cost = new char[sizeof(n)];
	strcpy(cost,n);
}

void Pilmat::help5(char *l)
{
	time = new char[sizeof(l)];	
	strcpy(time,l);
}

void Pilmat::help7(char *y)
{
	vol3 = new char[sizeof(y)];	
	strcpy(vol3,y);
}

/*Вспомогательная функция*/

int Pilmat::gif_numer()
{
	return numer;
}

void Pilmat::show()//Функция показа
{
	cout<< "1.Номер в списке >>" <<numer<<"\n";
	cout<< "2.Порода древесины >>" << name <<"\n";
	cout<< "3.Тип древесины >>" <<type<<"\n";
	cout<< "4.Обьём древесины, имеющийся на складе(м^3) >>" <<vol1<<"\n";
	cout<< "5.Обьём древесины, который неоходимо обработать(м^3) >>" <<vol2<<"\n";
	cout<< "6.Производственные затраты на обработку 1 м^3 древесины(руб) >>" <<cost<<"\n";
	cout<< "7.Время, которе необходимо для производства 1 м^3 древесины(час) >>" <<time<<"\n";
	cout<< "8.Обьём древесины, полученный в результате обработки(м^3) >>" <<vol3<<"\n";
	cout<< "\n";
}

int Pilmat::operator > (Pilmat ob)//Перегрузка оператора
{
	return (numer>ob.numer);
}

Pilmat &Pilmat::operator = (Pilmat ob)//Перегрузка оператора присваивания 
{
	numer=ob.numer;
	strcpy(name,ob.name);
	strcpy(type,ob.type);
	strcpy(vol1,ob.vol1);
	strcpy(vol2,ob.vol2);
	strcpy(cost,ob.cost);
	strcpy(time,ob.time);
	strcpy(vol3,ob.vol3);
	return *this;	
}

istream &operator >>(istream & potok, Pilmat &ob)//Перегрузка оператор 
{
	potok>>ob.numer;
	potok>>ob.name;
	potok>>ob.type;
	potok>>ob.vol1;
	potok>>ob.vol2;
	potok>>ob.cost;
	potok>>ob.time;
	potok>>ob.vol3;
	return potok;
};

ostream &operator <<(ostream & potok, Pilmat ob)//Перегрузка оператор
{
	potok<<ob.numer<<"\n";
	potok<<ob.name<<"\n";
	potok<<ob.type<<"\n";
	potok<<ob.vol1<<"\n";
	potok<<ob.vol2<<"\n";
	potok<<ob.cost<<"\n";
	potok<<ob.time<<"\n";
	potok<<ob.vol3;
	return potok;
};

int Pilmat::terror()//Функция проверки
{
	if ((numer>0)&&(strlen(name)>1)&&(strlen(type)>1)&&(strlen(vol1)>1)&&(strlen(vol2)>1)&&(strlen(cost)>1)&&(strlen(time)>1)&&(strlen(vol3)>1))
	return 1;
	else
		return 0;
};