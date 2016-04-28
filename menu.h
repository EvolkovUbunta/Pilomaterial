#include "Pilmat.h"
#include <vector>

int menu(char *name_file);//Функция меню
int open_file(std::vector<Pilmat> &ob, char *name_file);//Функция открытия файла
int rewrite_file(std::vector<Pilmat> &ob, char *name_file);//Функция записи в файл
int Zagruz(std::vector<Pilmat> &ob);//Функция добавления 
int see(std::vector<Pilmat> &ob, char * name_file);//Функции показа
int Editing(std::vector<Pilmat> &ob);//Функция редактирования 
int kesh(std::vector<Pilmat> &ob);//Вспомогательная функция для open_file()
int sort(std::vector<Pilmat> &ob);//Функция сортировки 
bool Search(std::vector<Pilmat> &ob);//Функция поиска
int delet(std::vector<Pilmat> &ob);//Функция удаления
int Numer(std::vector<Pilmat> &ob,int numer);//Функция для add() 
		