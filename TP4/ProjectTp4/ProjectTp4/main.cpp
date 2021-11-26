#include <iostream>
#include "basicEncrypt.h"

int main()
{
	tp4::BasicEncrypt basicEncrypt;
	basicEncrypt.updatePlain(tp4::read("test.txt"));
	basicEncrypt.encode();
	tp4::write("test2.txt", basicEncrypt.cypher());
	return 0;
}