#include "caesar.h"

namespace tp4
{
	Caesar::Caesar(int key)
		: _key(key)
	{

	}

	void Caesar::encode()
	{
		_cypher = "";
		for (char letter : _plain)
			if (_alphabet.find(letter) != std::string::npos)
				_cypher += _alphabet[(_alphabet.find(letter) + _key + _alphabetSize) % _alphabetSize];
			else
				_cypher += letter;
	}

	void Caesar::decode()
	{
		_plain = "";
		for (char letter : _cypher)
			if (_alphabet.find(letter) != std::string::npos)
				_plain += _alphabet[(_alphabet.find(letter) - _key + _alphabetSize) % _alphabetSize];
			else
				_plain += letter;
	}
}