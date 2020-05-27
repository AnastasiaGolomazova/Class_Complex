#include <iostream>
#include "Complex.h"
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	Complex a = Complex(10, 2); // создаем объект "a" класса комплекс
	cout << "a = " << a << endl; // выводим объект класса комплекс
	Complex b = Complex(8); // создаем объект "b" класса комплекс
	cout << "b = " << b << endl; // выводим "b"
	cout << "Re(b) = " << b.getRe() << endl; // выводим по отдельности действительную часть "b"
	cout << "Im(b) = " << b.getIm() << endl; // выводим по отдельности мнимую часть "b"
	double x, y; // добавлемя переменные 
	b.getComplex(x, y); // присваиваем значение объекта "b" переменным х и y соответственно
	cout << "x = " << x << endl; // выводим х действительную часть
	cout << "y = " << y << endl; // выводим у мнимую часть
	Complex c = Complex(); // создаем объект "c" с 0
	cout << "c = " << c << endl; // выводим "c"
	Complex flag = a + b;
	cout << "a + b = " << flag << endl; // выводим сложение объектов
	flag = a - b; 
	cout << "a - b = " << flag << endl; // выводим вычитание объектов
	flag = a * b; 
	cout << "a * b = " << flag << endl; //  выводим умножение объектов
	try { // проверяем на исключение деление "a" на "c"
		flag = a / c;
		cout << "a / c = " << flag << endl; 
	}
	catch (int i) { 
		if (i == 0)
			cout << "Ошибка - деление на 0!" << endl;
	}
	try { // проверяем на исключение деление "a" на "b"
		flag = a / b; 
		cout << "a / b = " << flag << endl; 
	}
	catch (int i) {
		if (i == 0)
			cout << "Ошибка - деление на 0!" << endl;
	}

	cout << "Введите значение объекта <с>" << endl;
	cin >> c; //присваиваем введенные значения "c"
	cout << "1) c = " << c << endl; // выводим
	c.setComplex(20, 5); // переприсваиваем значения
	cout << "2) c = " << c << endl; // выводим
	c.setRe(10); // переприсваиваем действительную часть
	cout << "3) c = " << c << endl; // выводим
	c.setIm(6); // переприсваиваем мнимую часть
	cout << "4) c = " << c << endl; // выводим
	system("pause");
	return 0;
}
