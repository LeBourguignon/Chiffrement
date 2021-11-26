#include <iostream>
#include "vigenere.h"

int main()
{
	auto vig = tp4::Vigenere({ 3,1,5,2 });
	//vig.updatePlain("CETTE PHRASE NE VEUT RIEN DIRE");

	//vig.encode();

	vig.updateCypher("FFYVHUJUBXGOJYFZVSNGQIKUF");

	vig.decode();

	std::cout << vig.plain() << std::endl;

	return 0;
}

//FFYVHUJUBXGOJYFZVSNGQIKUF