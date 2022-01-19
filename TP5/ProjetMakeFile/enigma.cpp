#include "enigma.h"

namespace tp5
{
	Enigma::Enigma(std::string key1, std::string key2, std::string key3, std::string key4, std::string key5)
	{
		if (key1.size() == keySize)
			_keys.push_back(key1);
		else
			_keys.push_back(alphabet);
		if (key2.size() == keySize)
			_keys.push_back(key2);
		if (key3.size() == keySize)
			_keys.push_back(key3);
		if (key4.size() == keySize)
			_keys.push_back(key4);
		if (key5.size() == keySize)
			_keys.push_back(key5);
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
				int counterN = counter1;
				char c = letter;
				for (std::string key : _keys)
				{
					c = rotorEncode(key, counterN, c);
					counterN /= keySize;
				}
				_cypher += c;
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
			if (_keys.back().find(letter) != std::string::npos)
			{
				int counterN = counter1;
				char c = letter;
				for (int i = _keys.size() - 1; i >= 0; i--)
				{
					for (int j = 0; j < i; j++)
						counterN /= keySize;
					c = rotorDecode(_keys[i], counterN, c);
					counterN = counter1;
				}
				_plain += c;
				counter1 += 1;
			}
			else
				_plain += letter;
	}
}