#include <iostream>
#include <string>
#include "cpf.h"

int main()
{
	std::string cpf = "";
	std::cout << "Digite o CPF para checkar" << std::endl;
	std::cin >> cpf;
	if(cpfVerif(cpf))
	{
		std::cout << "Cpf Válido";	
	}
	else 
	{
		std::cout << "Cpf Inválido";
	}

}
