#pragma once
#include <iostream>
#include <fstream>
#include <string>

namespace tp4 
{
	class BasicEncrypt
	{
	protected:
		std::string _plain = "", _cypher = "";

	public:
		BasicEncrypt();
		std::string plain() const;
		std::string cypher() const;
		void updatePlain(std::string plain);
		void updateCypher(std::string cypher);
		void encode();
		void decode();
	};

	std::string read(std::string address);
	void write(std::string address, std::string text);
}