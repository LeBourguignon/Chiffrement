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
		std::vector<int> key() const;
		void updateKey(std::vector<int> key);
		void encode();
		void decode();

	};
}





/* debug

	auto vig = tp4::Vigenere({ 3, 1, 5, 2 });

	vig.updatePlain(tp4::read("test.txt"));
	std::cout << vig.plain() << std::endl;
	vig.encode();
	std::cout << vig.cypher() << std::endl;
	vig.decode();
	std::cout << vig.plain() << std::endl;

*/