#include "encrypt.h"

namespace tp4
{
	Encrypt::Encrypt()
	{

	}

	/*
		Getter
	*/

	std::string Encrypt::plain() const
	{
		return _plain;
	}

	std::string Encrypt::cypher() const
	{
		return _cypher;
	}

	/*
		Setter
	*/

	void Encrypt::updatePlain(std::string plain)
	{
		_plain = plain;
	}

	void Encrypt::updateCypher(std::string cypher)
	{
		_cypher = cypher;
	}

	/*
		Helper
	*/

	std::string read(std::string address)
	{
		std::ifstream file(address);
		std::string text = "";

		if (file)
		{
			std::string line;
			while (std::getline(file, line))
				text += line + " ";
		}
		else
			std::cout << "Error: file not found" << std::endl;
		return text;
	}

	void write(std::string address, std::string text)
	{
		std::ofstream file(address);
		if (file)
			file << text;
		else
			std::cout << "Error: file not created" << std::endl;
	}
}