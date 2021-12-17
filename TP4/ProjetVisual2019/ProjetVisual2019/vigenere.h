#pragma once
#include <vector>
#include "encrypt.h"

namespace tp4 {
	class Vigenere :
		public Encrypt
	{
	protected:
		std::vector<int> _key;

	public:
		Vigenere(std::vector<int> key);
		Vigenere(std::string key);
		std::vector<int> key() const;
		void updateKey(std::vector<int> key);
		void updateKey(std::string key);
		void encode();
		void decode();

	};
}





/* debug
	# test avec une chaîne de caractères

	auto vig = tp4::Vigenere("gkse");

	vig.updatePlain(tp4::read("test.txt"));
	std::cout << vig.plain() << std::endl;
	vig.encode();
	std::cout << vig.cypher() << std::endl;
	vig.decode();
	std::cout << vig.plain() << std::endl;


	# test avec un vector (il est nécessaire de forcer le type, rentrer directement {3,1,5,2} en paramètre de la fonction provoque une erreur)

	auto test_vect = std::vector<int> {3,1,5,2};
	auto vig = tp4::Vigenere("bdes");

	vig.updatePlain(tp4::read("test.txt"));
	std::cout << vig.plain() << std::endl;
	vig.encode();
	std::cout << vig.cypher() << std::endl;
	vig.decode();
	std::cout << vig.plain() << std::endl;


*/