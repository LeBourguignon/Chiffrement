#pragma once
#include <iostream>
#include <fstream>
#include <string>

namespace tp5 
{
	class Encrypt
	{
	protected:
		std::string _plain = "", _cypher = "";

	public:
		Encrypt();
		std::string plain() const;
		std::string cypher() const;
		void updatePlain(std::string plain);
		void updateCypher(std::string cypher);
		virtual void encode() = 0;
		virtual void decode() = 0;
	};

	std::string read(std::string address);
	void write(std::string address, std::string text);
}

/*
	tp5::Enigma enigma("azertyuiopqsdfghjklmwxcvbn");
	enigma.updatePlain(tp5::read("test.txt"));
	std::cout << enigma.plain() << std::endl;
	enigma.encode();
	std::cout << enigma.cypher() << std::endl;
	tp5::write("testEncode.txt", enigma.cypher());
	enigma.updatePlain(tp5::read("testEncode.txt"));
	enigma.decode();
	std::cout << enigma.plain() << std::endl;
	tp5::write("testDecode.txt", enigma.plain());
*/