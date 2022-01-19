#pragma once
#include <vector>

#include "encrypt.h"

namespace tp5
{
	class Enigma :
		public Encrypt
	{
	protected:
		std::vector <std::string> _keys;
		std::string const alphabet = "abcdefghijklmnopqrstuvwxyz";
		int const keySize = 26;

		char rotorEncode(std::string key, int counter, char letter);
		char rotorDecode(std::string key, int counter, char letter);

	public:
		Enigma(std::string key1 = "", std::string key2 = "", std::string key3 = "", std::string key4 = "", std::string key5 = "");
		void encode();
		void decode();

	};
}

/*
	tp5::Enigma encrypt("azertyuiopqsdfghjklmwxcvbn", "abcdefghijklmnopqrstuvwxyz");
	encrypt.updatePlain(tp5::read("test.txt"));
	std::cout << "Text : " << encrypt.plain() << std::endl;
	encrypt.encode();
	std::cout << "Text encodé : " << encrypt.cypher() << std::endl;
	tp5::write("testEncode.txt", encrypt.cypher());
	encrypt.decode();
	std::cout << "Text décodé : " << encrypt.plain() << std::endl;
	tp5::write("testDecode.txt", encrypt.cypher());
*/