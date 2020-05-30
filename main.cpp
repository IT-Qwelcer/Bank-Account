#include "int.h"
#include <iostream>

#define ENDL std::cout << "\n";

int main(int argc, char** argv)
{
    system("color 0A");

    Account acX, acY;

    acX.OpenAccount();
    acX.Get();
    acX.OutPut();
    acX.Set();
    acX.OutPut();

    std::cout << "\n\n\t Create a new account..."; ENDL ENDL // Створіть новий рахунок

    acY.OpenAccount();
    acY.OutPut();
    acY.Transport(acX);
    acX.OutPut();
    acY.OutPut();

	return 0;
}