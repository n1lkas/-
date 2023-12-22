#include <iostream>
#include "1.cpp"
#include "2.cpp"
#include "3.cpp"
#include "4.cpp"

using namespace std;

int main()
{
    setlocale(0, "");
    system("cls");
    int lab;
    cout << "Выберите номер лабораторной работы:";
   
    cin >> lab;
    system("cls");
    switch (lab)
    {
    case 1:
        main1();
        main();
        break;
    case 2:
        main2();
        main();
        break;
    case 3:
        main3();
        main();
        break;
    case 4:
    main4();
    main();
        break;
    case 0:
        exit(1);
    default:
        main();
        break;
    }
    return 0;
}