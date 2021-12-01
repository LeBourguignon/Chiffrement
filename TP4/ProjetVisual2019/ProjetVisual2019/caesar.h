#pragma once
#include "encrypt.h"

namespace tp4
{
	class Caesar :
		public Encrypt
	{
	protected:
		std::string const _alphabet = "abcdefghijklmnopqrstuvwxyz";
		int const _alphabetSize = 26;
		int _key;

	public:
		Caesar(int key);
		void encode();
		void decode();
	};
}

/*
	tp4::Caesar caesar(15);
	caesar.updatePlain(tp4::read("test.txt"));
	std::cout << caesar.plain() << std::endl;
	caesar.encode();
	std::cout << caesar.cypher() << std::endl;
	tp4::write("testEncode.txt", caesar.cypher());
	caesar.updatePlain(tp4::read("testEncode.txt"));
	caesar.decode();
	std::cout << caesar.plain() << std::endl;
	tp4::write("testDecode.txt", caesar.plain());
*/