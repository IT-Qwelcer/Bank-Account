#ifndef __INT_H
#define __INT_H

class Account
{
    char number[20]; // номер рахунку
    int size; // розмір рахунку
    char currency; // вілюта

public:
    void OpenAccount(); // відкрити рахунок
    void Get(); // зняття коштів
    void Set(); // заповнення
    void OutPut(); // стан рахунку
    void SetSize(int s) { size = size + s; }
    void Transport(Account& obj);
};

#endif