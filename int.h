#ifndef __INT_H
#define __INT_H

class Account
{
    char number[20]; // ����� �������
    int size; // ����� �������
    char currency; // �����

public:
    void OpenAccount(); // ������� �������
    void Get(); // ������ �����
    void Set(); // ����������
    void OutPut(); // ���� �������
    void SetSize(int s) { size = size + s; }
    void Transport(Account& obj);
};

#endif