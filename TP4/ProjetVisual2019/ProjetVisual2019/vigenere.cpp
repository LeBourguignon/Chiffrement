#include "vigenere.h"

namespace tp4
{
	Vigenere::Vigenere(std::vector<int> key) : _key(key) {}

	Vigenere::Vigenere(std::string key)
	{
		_key = {};
		for (char letter : key) {
			_key.push_back(int(letter));
		}
	}


	/*
		Setter
	*/

	void Vigenere::updateKey(std::vector<int> key)
	{
		_key = key;
	}

	void Vigenere::updateKey(std::string key)
	{
		_key = {};
		for (char letter : key)
			_key.push_back(int(letter));
	}

	/*
		Getter
	*/

	std::vector<int> Vigenere::key() const
	{
		return _key;
	}

	/*
		Methods
	*/

	void Vigenere::encode() 
	{
		std::string text = "";

		int k = _key.size();
		int i = 0;
		for (char letter : _plain) {
			char lettre_code = (int(letter) + _key[i]);
			i = (i + 1) % k;
			text += lettre_code;
		}

		_cypher = text;
	}

	void Vigenere::decode() 
	{
		std::string text = "";

		int k = _key.size();
		int i = 0;
		for (char letter : _cypher) {
			char lettre_code = (int(letter) - _key[i]);
			i = (i + 1) % k;
			text += lettre_code;
		}

		_plain = text;
	}
}
