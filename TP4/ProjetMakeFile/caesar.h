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
	tp4::Caesar encrypt(3);
	encrypt.updatePlain(tp4::read("test.txt"));
	std::cout << "Text : " << encrypt.plain() << std::endl;
	encrypt.encode();
	std::cout << "Text encodé : " << encrypt.cypher() << std::endl;
	tp4::write("testEncode.txt", encrypt.cypher());
	encrypt.decode();
	std::cout << "Text décodé : " << encrypt.plain() << std::endl;
	tp4::write("testDecode.txt", encrypt.cypher());
*/