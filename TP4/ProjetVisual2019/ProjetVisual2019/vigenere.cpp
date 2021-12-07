#include "vigenere.h"

namespace tp4 
{
	Vigenere::Vigenere(std::vector<int> key) : _key(key) {}

	/*
		Setter
	*/

	void Vigenere::updateKey(std::vector<int> key)
	{
		_key = key;
	}

	/*
		Getter
	*/

	std::vector<int> Vigenere::key() const
	{
		return _key;
	}

	/*
		Methods
	*/

	void Vigenere::encode() 
	{
		std::string text = "";

		int k = _key.size();
		int i = 0;
		for (char letter : _plain) {
			char lettre_code = (int(letter) + _key[i]) % 128;
			i = (i + 1) % k;
			text += lettre_code;
		}

		_cypher = text;
	}

	void Vigenere::decode() 
	{
		std::string text = "";

		int k = _key.size();
		int i = 0;
		for (char letter : _cypher) {
			char lettre_code = (int(letter) - _key[i]) % 128;
			i = (i + 1) % k;
			text += lettre_code;
		}

		_plain = text;
	}
}

/*
std::string out = "";

		for (auto i = 0; i < _key.size(); i++) {
			if (i != 0) {
				out += "-";
			}
			out += _key[i];
		}



*/

/*

	TEST ENCODE DECODE

	auto vig = tp4::Vigenere({ 3,1,5,2 });
	//vig.updatePlain("CETTE PHRASE NE VEUT RIEN DIRE");

	//vig.encode();

	//std::cout << vig.cypher() << std::endl;

	vig.updateCypher("FFYVHUJUBXGOJYFZVSNGQIKUF");

	vig.decode();

	std::cout << vig.plain() << std::endl;

*/