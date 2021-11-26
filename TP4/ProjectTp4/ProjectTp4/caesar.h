#pragma once
#include "encrypt.h"

namespace tp4
{
	class Caesar :
		public Encrypt
	{
	protected:
		std::string const _alphabet = "abcdefghijklmnopqrstuvwxyz";

	public:
		Caesar();
		void encode();
		void decode();
	};
}