#include <iostream>

using namespace std;

class Pilmat{

	      //Закрытые переменные класса

		int numer;//Номер
		char *name;//Порода 
		char *type;//Тип
		char *vol1;//Обьем
		char *cost;//Цена
		char *time;//Время
		char *vol2;//Обьем
		char *vol3;//Обьем

	public://Открытые переменные класса

		Pilmat();//Конструктор
		Pilmat(int a,char *k2, char *k3,char *z,char *v,char *n,char *l,char *y);//Конструктор с параметрами
		Pilmat(const Pilmat &o);//Конструктор копий
		~Pilmat();//Деструктор 
		void show();//Функция показа
		friend ostream &operator << (ostream &potok,Pilmat ob);//Перегрузка оператора
		friend istream &operator >> (istream &potok,Pilmat &ob);//Перегрузка оператора
		int operator > (Pilmat ob);//Перегрузка оператора
		Pilmat &operator = (Pilmat ob);//Перегрузка оператора
		int terror();//Проверка
		friend int tick(istream &potok,Pilmat &ob);//Функция для open_file()
		int gif_numer();//Функция возвращающая numer
		/*Вспогательные функции для Search()*/
		void help(int x);
		void help1(char *p);
		void help2(char *m);
		void help3(char *z);
		void help6(char *v);
		void help4(char *n);
		void help5(char *l);
		void help7(char *y);
		int  numerr();
		/*Вспомогательные функции для Editing*/       
		string typee();
		string namee();
		string vol11();
		string vol22();
		string costt();
		string timee();
		string vol33();
};
