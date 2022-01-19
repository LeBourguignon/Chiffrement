#pragma once
#include <iostream>
#include <fstream>
#include <string>

namespace tp4 {
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
		virtual void encode();
		virtual void decode();
	};

	std::string read(std::string address);
	void write(std::string address, std::string text);
}

/*
	tp4::Encrypt encrypt;
	encrypt.updatePlain(tp4::read("test.txt"));
	std::cout << Text : << encrypt.plain() << std::endl;
	encrypt.encode();
	std::cout << Text encodé : << encrypt.cypher() << std::endl;
	tp4::write("testEncode.txt", encrypt.cypher());
	encrypt.decode();
	std::cout << Text décodé : << encrypt.plain() << std::endl;
	tp4::write("testDecode.txt", encrypt.cypher());
*/