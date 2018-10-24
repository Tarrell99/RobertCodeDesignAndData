#pragma once
#include<iostream>
#include<functional>
#include<string>
namespace HashFunction
{
	unsigned int hasFunction(const char * data, unsigned int length);
	unsigned int badHash(const char* data, unsigned int length);
}

template<typename HashType, typename T>
class HashTable
{
public:

	HashTable(unsigned int size)
		: m_size(size), m_data(new T[size]){}
	~HashTable() { delete[] m_data; }
	
	T& operator [] (const KeyType& key)
	{
		auto hashedKey = hash(key) % m_size;
		return m_data[hashedKey];
	}
private:
	// ideally this would be a std::function
	// specified as a template parmeter
	unsigned int hasFunction(const KeyType& key);
	T* m_data;
	unsigned int m_size;
};
///////////////////////////////////////////////////////

template<typename HashType, typename T>
 unsigned int HashTable<HashType, T>::hasFunction(const KeyType & key)
{
	return 0;
}
