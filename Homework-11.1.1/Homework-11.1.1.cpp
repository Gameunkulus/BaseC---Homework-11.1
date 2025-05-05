// Homework-11.1.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//﻿

#include <iostream>;
#include <string>;
#include <Windows.h>;
#include "../GreetFolder/HelloPers.h";

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "rus");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    string name;
    cout << "Введите имя: ";
    cin >> name;
    Greeter user;
    user.greet(name);
    system("pause");
}
