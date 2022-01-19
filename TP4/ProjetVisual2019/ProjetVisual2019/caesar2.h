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
	tp4::Caesar2 encrypt(3);
	encrypt.updatePlain(tp4::read("test.txt"));
	std::cout << "Text : " << encrypt.plain() << std::endl;
	encrypt.encode();
	std::cout << "Text encodé : " << encrypt.cypher() << std::endl;
	tp4::write("testEncode.txt", encrypt.cypher());
	encrypt.decode();
	std::cout << "Text décodé : " << encrypt.plain() << std::endl;
	tp4::write("testDecode.txt", encrypt.cypher());
*/