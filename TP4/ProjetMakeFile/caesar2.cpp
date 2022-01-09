#include "caesar2.h"
namespace tp4
{
	Caesar2::Caesar2(int key)
		: _key(key)
	{

	}

	void Caesar2::encode()
	{
		_cypher = "";
		for (char letter : _plain)
			_cypher += char(int(letter) + _key % 128);
	}

	void Caesar2::decode()
	{
		_plain = "";
		for (char letter : _cypher)
			_plain += char(int(letter) - _key % 128);
	}
}