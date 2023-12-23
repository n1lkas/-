#include <iostream>
#include "lb1.cpp"
#include "lb2.cpp"
#include "lb3.cpp"
#include "lb4.cpp"


using namespace std;

int main()
{
    setlocale(0, "");
   
    int lab;
    while (true)
    {
        system("cls");
        cout << "Выберите номер лабораторной работы:";
        cin >> lab;
        cin.ignore();
        switch (lab)
        {
        case 1:
            main1();
            break;
        case 2:
            main2();
            break;
        case 3:
            main3();
            break;
        case 4:
            main4();
            break;
        case 0:
            exit(0);
        default:
            cout << "Некоректный выбор";
            break;
        }
    }
    return 0;
}