#include "BadHashR.h"

unsigned int HashFunction::hasFunction(const char * data, unsigned int length)
{
	unsigned int hash = 0;
	for (unsigned int i = 0; i < length; ++i)
	{
		hash += data[i];
	}
	return hash;
}

unsigned int HashFunction::badHash(const char * data, unsigned int length)
{
	return 0;
}
