#pragma once
#include <array>
#include "encrypt.h"

namespace tp4 {
	class Vigenere :
		public Encrypt
	{
	protected:
		std::array<int, 4> _key;

	public:
		Vigenere(std::array<int, 4> key);
		std::array<int, 4> key();
		void updateKey(std::array<int, 4> key);
		void encode();
		void decode();

	};
}