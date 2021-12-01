#pragma once
#include <iostream>
#include <fstream>
#include <string>

namespace tp5 {
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