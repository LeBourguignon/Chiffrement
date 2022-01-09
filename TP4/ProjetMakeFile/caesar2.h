#pragma once
#include "encrypt.h"
namespace tp4
{
	class Caesar2 :
		public Encrypt
	{
	protected:
		int _key;

	public:
		Caesar2(int key);
		void encode();
		void decode();
	};
}

/*
	tp4::Caesar2 caesar2(3);
	caesar2.updatePlain(tp4::read("test.txt"));
	std::cout << caesar2.plain() << std::endl;
	caesar2.encode();
	std::cout << caesar2.cypher() << std::endl;
	tp4::write("testEncode.txt", caesar2.cypher());
	caesar2.updatePlain(tp4::read("testEncode.txt"));
	caesar2.decode();
	std::cout << caesar2.plain() << std::endl;
	tp4::write("testDecode.txt", caesar2.plain());
*/