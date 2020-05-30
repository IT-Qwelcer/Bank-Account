#include "int.h"
#include <iostream>
#include "windows.h"

#define ENDL std::cout << "\n";
#define CLEAR system("cls");
#define SLEEP Sleep(2000);

void Account::OpenAccount()
{
    std::cout << "\n\t Enter the account number -> "; std::cin >> number; // ������ ����� �������
    std::cout << "\n\t Choose a currency ($,E,R,G) -> "; std::cin >> currency; // ������� ������ ($,E,R,G)
    std::cout << "\n\t How much do you want to contribute -> "; std::cin >> size; CLEAR // ������ ������ ������
        std::cout << "\n\t The account is open :D"; ENDL ENDL SLEEP CLEAR // ������� ��������
}

void Account::Get()
{
    int z;
    do
    {
        std::cout << "\n\t How much do you want to withdraw -> "; std::cin >> z; CLEAR // ������ ������ �����
            if (z > size) std::cout << "\n\t Not enough money!"; ENDL // ����������� �����
    } while (z > size);
        size = size - z;
}

void Account::Set()
{
    int z;
    std::cout << "\n\n\t How much do you want to contribute -> "; std::cin >> z; ENDL CLEAR // ������ ������ ������
        size = size + z;
}

void Account::OutPut()
{
    std::cout << std::endl << "\n\t Account balance... "; ENDL // ���� �������
        std::cout << "\n\t Account number: " << number; ENDL // ����� �������
        std::cout << "\n\t Currency: " << currency; ENDL // ������
        std::cout << "\n\t The amount of funds in the account: " << size; ENDL ENDL SLEEP // ʳ������ ����� �� �������
}

void Account::Transport(Account& obj)
{
    int z;
    char Z[20];
    do
    {
        std::cout << "\n\n\t To which account do you want to make a transaction -> "; std::cin >> Z; ENDL // �� ��� ������� ������ �������� ����������
            std::cout << "\n\t How much do you want to translate -> "; std::cin >> z; ENDL SLEEP CLEAR // ������ ������ ���������
            if (z > size) std::cout << "\n\n\t Not enough money!"; ENDL ENDL // ����������� �����
    } while (z > size);
        obj.SetSize(z);
        size = size - z;
}