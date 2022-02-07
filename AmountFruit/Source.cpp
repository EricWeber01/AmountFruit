#define _CRT_SECURE_NO_WARNINGS
//#define _UNICODE
#include <iostream>
#include <tchar.h>
#include <windows.h>
#include <io.h>
#include <fcntl.h>
#include <stdio.h>
#include <fstream>
#include <cstdio>
#include <cctype>
#include <cstring>
#include <sstream>
#include<locale>
#include<codecvt>
#include<vector>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int choose;
    do
    {
        cout << "\t" << "Задание 1" << "\n";
        cout << "Посчитать количество названий фруктов в файле. Названия фруктов и путь к файлу пользователь вводит с клавиатуры. Названия фруктов и содержимое файла в формате Unicode. ==> 1" << "\n";
        cout << "Выход ==> 2" << "\n";
        cout << "Введите действие ==> ";
        cin >> choose;
        switch (choose)
        {
        case(1):
        {
            vector<wstring> vec;
            wifstream file("text.txt");
            wstring buffer;
            while (!file.eof())
            {
                file >> buffer;
                vec.push_back(buffer);
            }
            int count = 0;
            for (int i = 0; i < vec.size(); i++)
                    count++;
            wcout << "Кольчество фрукотов в файле ==> " << count << "\n";
            file.close();
            break;
        }
        case(2):
        {
            exit(0);
            break;
        }
        }
    } while (choose != 2);
}