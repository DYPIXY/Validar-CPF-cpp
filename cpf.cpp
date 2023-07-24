#include <iostream>
#include <string>
#include <algorithm>
#include <cstring>
#include "cpf.h"


bool cpfVerif(std::string cpf) 
{
	// Comentários em português, já que é sobre o Brasil.	
	// Essa primeira parte lida com Strings e transforma elas em um inteiro (para a matemática posterior)
	char paraRemover[] = ".-,";
	for (unsigned int i = 0; i < strlen(paraRemover); ++i)
	{
		cpf.erase(std::remove(cpf.begin(), cpf.end(), paraRemover[i]), cpf.end());
	}
	if(cpf.length() != 11)
	{
		std::cout << "Tamanho de cpf inválido" << std::endl;
		return false;
	}
	//inicia array de dígitos
	unsigned long cpfLong = std::stol(cpf);
	int digits[11];
	unsigned long j = 10;
	for (int i = 0; i < 11 ; i++)
	{
		digits[i] = cpfLong % j;
		cpfLong /= j;
	}
		
	//div 1
	int sum = 0;
	for ( int i = 2 ; i <= 10 ; i++ )
	{
		sum += digits[i] * i;
	}
	int dv1_i = (11 - (sum % 11));
	if(digits[1] != dv1_i)
	{
		return false;
	}
	//div 2
	sum = 0;
	int offset = 0;
	for ( int i = 1 ; i <= 10 ; i++ )
	{
		offset = i + 1;
		sum += digits[i] * offset;
	}
	int dv2_i = (11 - (sum % 11));
	if(digits[0] != dv2_i)
	{
		return false;
	}
	return true;
}
