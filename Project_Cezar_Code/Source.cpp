#include <iostream>
#include <fstream>
#include <string>
#include <locale.h>
#include <windows.h>
#include "Cezar_Code_Lib.h"

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int answer, key;
    string text;
    setlocale(LC_ALL, "Russian");
    cout << "Внимание! Действие данной программы основано на таблице ASCII, поэтому спец символы также вовлечены в алфавит, что способствует замене букв на них. Это не ошибка!\n";
    while (true)
    {
        cout << "Выберите действие:\n 1 - Шифровать\n 2 - Дешифровать\n 3 - Что такое шифр Цезаря?\n 4 - Выход\n";
        cin >> answer;
        cin.ignore(1, '\n');
        switch (answer)
        {
        case 1:
        {
            int chois;
            cout << "Выберите действие:\n 1 - Ввод с клавиатуры\n 2 - Ввод с файла\n";
            cin >> chois;
            cin.ignore(1, '\n');
            switch (chois)
            {
            case 1:
            {
                cout << "Введите текст:" << endl;
                getline(cin, text);
                cout << "Введите ключ:" << endl;
                cin >> key;
                encrypt(text, key);
                int nomer;
                cout << "Хотите вывести полученный результат в файл?\n 1 - да\n 2 - нет\n";
                cin >> nomer;
                switch (nomer)
                {
                case(1): File_Output(text);
                default: cout << "\n"; break;
                }
                break;
            }
            case 2:
            {
                ifstream f("text.txt");
                getline(f, text);
                cout << "Введите ключ:" << endl;
                cin >> key;
                encrypt(text, key);
                int nomer;
                cout << "Хотите вывести полученный результат в файл?\n 1 - да\n 2 - нет\n";
                cin >> nomer;
                switch (nomer)
                {
                case(1): File_Output(text);
                default: cout << "\n"; break;
                }
                break;
            }
            default:
                cout << "Такого действия нет" << endl; break;
            }; break;
        }
        case 2:
        {
            int chois;
            cout << "Выберите действие:\n 1 - Ввод с клавиатуры\n 2 - Ввод с файла\n";
            cin >> chois;
            cin.ignore(1, '\n');
            switch (chois)
            {
            case 1:
            {
                cout << "Введите текст:" << endl;
                getline(cin, text);
                cout << "Введите ключ:" << endl;
                cin >> key;
                decrypt(text, key);
                int nomer;
                cout << "Хотите вывести полученный результат в файл?\n 1 - да\n 2 - нет\n";
                cin >> nomer;
                switch (nomer)
                {
                case(1): File_Output(text);
                default: cout << "\n"; break;
                }
                break;
            }
            case 2:
            {
                ifstream f("text.txt");
                getline(f, text);
                cout << "Введите ключ:" << endl;
                cin >> key;
                decrypt(text, key);
                int nomer;
                cout << "Хотите вывести полученный результат в файл?\n 1 - да\n 2 - нет\n";
                cin >> nomer;
                switch (nomer)
                {
                case(1): File_Output(text);
                default: cout << "\n"; break;
                }
                break;
            }
            default:
                cout << "Такого действия нет" << endl; break;
            }; break;
        }
        case 3:
            cout << "Шифр Цезаря - это вид шифра подстановки, "
                "в котором каждый символ в открытом тексте заменяется символом, "
                "находящимся на некотором постоянном числе позиций левее или правее него в алфавите." << endl;
            break;
        case 4:
            return 0;
        default:
            cout << "Такого действия нет" << endl; break;
        }
    }
}