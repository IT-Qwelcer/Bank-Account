#include "int.h"
#include <iostream>
#include "windows.h"

#define ENDL std::cout << "\n";
#define CLEAR system("cls");
#define SLEEP Sleep(2000);

void Account::OpenAccount()
{
    std::cout << "\n\t Enter the account number -> "; std::cin >> number; // Введіть номер рахунку
    std::cout << "\n\t Choose a currency ($,E,R,G) -> "; std::cin >> currency; // Виберіть валюту ($,E,R,G)
    std::cout << "\n\t How much do you want to contribute -> "; std::cin >> size; CLEAR // Скільки бажаєте внести
        std::cout << "\n\t The account is open :D"; ENDL ENDL SLEEP CLEAR // Рахунок відкритий
}

void Account::Get()
{
    int z;
    do
    {
        std::cout << "\n\t How much do you want to withdraw -> "; std::cin >> z; CLEAR // Скільки бажаєте зняти
            if (z > size) std::cout << "\n\t Not enough money!"; ENDL // Недостатньо коштів
    } while (z > size);
        size = size - z;
}

void Account::Set()
{
    int z;
    std::cout << "\n\n\t How much do you want to contribute -> "; std::cin >> z; ENDL CLEAR // Скільки бажаєте внести
        size = size + z;
}

void Account::OutPut()
{
    std::cout << std::endl << "\n\t Account balance... "; ENDL // Стан рахунку
        std::cout << "\n\t Account number: " << number; ENDL // Номер рахунку
        std::cout << "\n\t Currency: " << currency; ENDL // Валюта
        std::cout << "\n\t The amount of funds in the account: " << size; ENDL ENDL SLEEP // Кількість коштів на рахунку
}

void Account::Transport(Account& obj)
{
    int z;
    char Z[20];
    do
    {
        std::cout << "\n\n\t To which account do you want to make a transaction -> "; std::cin >> Z; ENDL // На якій рахунок бажаєте здійснити транзакцію
            std::cout << "\n\t How much do you want to translate -> "; std::cin >> z; ENDL SLEEP CLEAR // Скільки бажаєте перевести
            if (z > size) std::cout << "\n\n\t Not enough money!"; ENDL ENDL // Недостатньо коштів
    } while (z > size);
        obj.SetSize(z);
        size = size - z;
}