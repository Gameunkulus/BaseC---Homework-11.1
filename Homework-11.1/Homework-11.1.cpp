

#include <iostream>;
#include <string>;
#include <Windows.h>;
#include "/Users/bugr2/source/repos/Homework-11.1/GreetFolder/HelloPers.h";

using namespace std;

int main()
{
    string name;
    cout << "Введите имя: ";
    cin >> name;
    Greeter user;
    user.greet(name);
    system("pause");
}
