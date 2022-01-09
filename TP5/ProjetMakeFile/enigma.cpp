#include "enigma.h"

namespace tp5
{
	Enigma::Enigma(std::string key1, std::string key2)
	{
		if (key1.size() == keySize)
			_key1 = key1;
		else
			_key1 = alphabet;

		if (key2.size() == keySize)
			_key2 = key2;
		else
			_key2 = alphabet;
	}

	char Enigma::rotorEncode(std::string key, int counter, char letter)
	{
		return key[(alphabet.find(letter) + counter) % keySize];
	}

	void Enigma::encode()
	{
		_cypher = "";
		int counter1 = 0;

		for (char letter : _plain)
			if (alphabet.find(letter) != std::string::npos)
			{
				int counter2 = counter1 / keySize;
				_cypher += rotorEncode(_key2, counter2, rotorEncode(_key1, counter1, letter));
				counter1 += 1;
			}
			else
				_cypher += letter;
	}

	char Enigma::rotorDecode(std::string key, int counter, char letter)
	{
		return alphabet[(key.find(letter) + (keySize - counter % keySize)) % keySize];
	}

	void Enigma::decode()
	{
		_plain = "";
		int counter1 = 0;

		for (char letter : _cypher)
			if (_key2.find(letter) != std::string::npos)
			{
				int counter2 = counter1 / keySize;
				_plain += rotorDecode(_key1, counter1, rotorDecode(_key2, counter2, letter));
				counter1 += 1;
			}
			else
				_plain += letter;
	}
}