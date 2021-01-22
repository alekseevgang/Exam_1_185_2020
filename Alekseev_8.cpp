#include <iostream>
#include <string>
using namespace std;

class Animal //инициализируем класс
{
protected:
	string location;
	string boundaries;

public:
	Animal(string location, string boundaries)
	{
		this->location = location;
		this->boundaries = boundaries;
	}

	virtual void display() // создаем метод вывода текста в классе
	{
		cout << "Животное" << location << " " << boundaries << endl;
	}

	void sleep() //метод sleep 
	{
		cout << "Животное спит" << endl;
	}
};

class Lion : public Animal //Класс Лев
{
public:
	Lion(string location, string boundaries) : Animal(location, boundaries) //Наследуем из абстрактного класса
	{

	};

	void display() override
	{
		cout << "Лев находится в " << location << ", " << boundaries << endl;
	}
};

class Cat : public Animal //Класс Кот
{
public:
	Cat(string location, string boundaries) : Animal(location, boundaries) //Наследуем из абстрактного класса
	{

	};

	void display() override
	{
		cout << "Кот находится в " << location << ", регион " << boundaries << endl;
	}
};

int main()
{
	setlocale(LC_ALL, "ru");
	Lion Lev("Азии", "пустынная местность");
	Cat Pushok("России", "Иваново");
	Pushok.display();
	Lev.display();
	return 0;
}
