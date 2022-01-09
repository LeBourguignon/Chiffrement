#pragma once
#include "encrypt.h"

namespace tp5
{
	class Enigma :
		public Encrypt
	{
	protected:
		std::string _key1;
		std::string _key2;
		std::string const alphabet = "abcdefghijklmnopqrstuvwxyz";
		int const keySize = 26;

		char rotorEncode(std::string key, int counter, char letter);
		char rotorDecode(std::string key, int counter, char letter);

	public:
		Enigma(std::string key1 = "abcdefghijklmnopqrstuvwxyz", std::string key2 = "abcdefghijklmnopqrstuvwxyz");
		void encode();
		void decode();

	};
}