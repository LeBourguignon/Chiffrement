#include "caesar.h"

namespace tp4
{
	Caesar::Caesar()
	{

	}

	void Caesar::encode()
	{
		_cypher = _plain;
		for (int i = 0; i < _plain.size(); i++)
			_cypher.at(i) = _alphabet.at(_alphabet.find(_plain.at(i)) + 3 % 26);
	}

	void Caesar::decode()
	{
		_plain = _cypher;
		for (int i = 0; i < _cypher.size(); i++)
			_plain.at(i) = _alphabet.at(_alphabet.find(_cypher.at(i)) - 3 % 26);
	}
}