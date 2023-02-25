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
    cout << "��������! �������� ������ ��������� �������� �� ������� ASCII, ������� ���� ������� ����� ��������� � �������, ��� ������������ ������ ���� �� ���. ��� �� ������!\n";
    while (true)
    {
        cout << "�������� ��������:\n 1 - ���������\n 2 - �����������\n 3 - ��� ����� ���� ������?\n 4 - �����\n";
        cin >> answer;
        cin.ignore(1, '\n');
        switch (answer)
        {
        case 1:
        {
            int chois;
            cout << "�������� ��������:\n 1 - ���� � ����������\n 2 - ���� � �����\n";
            cin >> chois;
            cin.ignore(1, '\n');
            switch (chois)
            {
            case 1:
            {
                cout << "������� �����:" << endl;
                getline(cin, text);
                cout << "������� ����:" << endl;
                cin >> key;
                encrypt(text, key);
                int nomer;
                cout << "������ ������� ���������� ��������� � ����?\n 1 - ��\n 2 - ���\n";
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
                cout << "������� ����:" << endl;
                cin >> key;
                encrypt(text, key);
                int nomer;
                cout << "������ ������� ���������� ��������� � ����?\n 1 - ��\n 2 - ���\n";
                cin >> nomer;
                switch (nomer)
                {
                case(1): File_Output(text);
                default: cout << "\n"; break;
                }
                break;
            }
            default:
                cout << "������ �������� ���" << endl; break;
            }; break;
        }
        case 2:
        {
            int chois;
            cout << "�������� ��������:\n 1 - ���� � ����������\n 2 - ���� � �����\n";
            cin >> chois;
            cin.ignore(1, '\n');
            switch (chois)
            {
            case 1:
            {
                cout << "������� �����:" << endl;
                getline(cin, text);
                cout << "������� ����:" << endl;
                cin >> key;
                decrypt(text, key);
                int nomer;
                cout << "������ ������� ���������� ��������� � ����?\n 1 - ��\n 2 - ���\n";
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
                cout << "������� ����:" << endl;
                cin >> key;
                decrypt(text, key);
                int nomer;
                cout << "������ ������� ���������� ��������� � ����?\n 1 - ��\n 2 - ���\n";
                cin >> nomer;
                switch (nomer)
                {
                case(1): File_Output(text);
                default: cout << "\n"; break;
                }
                break;
            }
            default:
                cout << "������ �������� ���" << endl; break;
            }; break;
        }
        case 3:
            cout << "���� ������ - ��� ��� ����� �����������, "
                "� ������� ������ ������ � �������� ������ ���������� ��������, "
                "����������� �� ��������� ���������� ����� ������� ����� ��� ������ ���� � ��������." << endl;
            break;
        case 4:
            return 0;
        default:
            cout << "������ �������� ���" << endl; break;
        }
    }
}