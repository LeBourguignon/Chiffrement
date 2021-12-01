#include "basicEncrypt.h"


namespace tp4 {

	/*
		Constructor
	*/

	BasicEncrypt::BasicEncrypt()
	{

	}

	/*
		Getter
	*/

	std::string BasicEncrypt::plain() const
	{
		return _plain;
	}

	std::string BasicEncrypt::cypher() const
	{
		return _cypher;
	}

	/*
		Setter
	*/

	void BasicEncrypt::updatePlain(std::string plain)
	{
		_plain = plain;
	}

	void BasicEncrypt::updateCypher(std::string cypher)
	{
		_cypher = cypher;
	}

	/*
		Method
	*/

	void BasicEncrypt::encode()
	{
		_cypher = _plain;
	}

	void BasicEncrypt::decode()
	{
		_plain = _cypher;
	}

	/*
		Helper

	std::string read(std::string address)
	{
		std::ifstream file(address);
		std::string text = "";

		if (file)
		{
			std::string line;
			while (std::getline(file, line))
				text += line;
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
	*/
}