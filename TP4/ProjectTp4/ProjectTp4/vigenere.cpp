#include "vigenere.h"


namespace tp4 {
	Vigenere::Vigenere(std::array<int, 4> key) : _key(key)
	{
		 
	}

	/*
		Setter
	*/

	void Vigenere::updateKey(std::array<int, 4> key) {
		_key = key;
	}

	/*
		Getter
	*/
	
	std::array<int, 4> Vigenere::key() {
		
		return _key;
	}

	/*
		Methods
	*/

	void Vigenere::encode() {
		std::string text = "";

		int k = _key.size();
		int i = 0;
		for (char letter : _plain) {
			int nomb = int(letter) - 65;
			int nomb_code = (nomb + _key[i]) % 26;
			char lettre_code = nomb_code + 65;
			i = (i + 1) % k;
			text += lettre_code;
		}

		_cypher = text;
	}

	void Vigenere::decode() {
		std::string text = "";

		int k = _key.size();
		int i = 0;
		for (char letter : _plain) {
			int nomb = int(letter) - 65;
			int nomb_code = (nomb - _key[i]) % 26;
			char lettre_code = nomb_code + 65;
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