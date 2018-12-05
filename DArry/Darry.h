#pragma once
#include<iostream>;

template<typename R>
class MyDynamicArray
{
public:
	MyDynamicArray();
	~MyDynamicArray();
	void insterlast();
	void removelast();
	void sort();
	void MakeNewArry(int basesize);
	void returnDate(int index);
private:
	int allocatspace;
	int usedspace;
	R* date;

};
//////////////////////////////////

template<typename R>
inline MyDynamicArray<R>::MyDynamicArray()
{
}

template<typename R>
 MyDynamicArray<R>::~MyDynamicArray()
{
}

template<typename R>
 void MyDynamicArray<R>::insterlast()
{
	if (usedspace != allocatspace)
	{
		date[usedspace] = new date;
		usedspace++;
	}
	else
	{
		R* temp = new R[allocatspace * 2];
		for(int i )for (int i = 0; i < usedElements; i++)
		{
			temp[i] = data[i];
			delete data;
		}
		for (int i = 0; i < usedElements; i++)
		{
			data[i] = temp[i];
			delete temp;
		}
		data[usedElements] = newdata;
		usedElements += 1;
		
	}
}

template<typename R>
 void MyDynamicArray<R>::removelast()
{
	usedspace -= 1;
}

template<typename R>
inline void MyDynamicArray<R>::sort()
{
	for (int i = 0; i < usedspace; i++)
	{
		for (int j = 1; j < usedspace; j++)
		{
			if (i > j)
			{
				int temp = i;
				i = j;
				j = temp;
			}
			else
			{
				j++;
				i++;
			}
		}
	}
}

template<typename Robert>
 void MyDynamicArray<Robert>::MakeNewArry(int basesize)
{ 
	date = new array[basesize]
	allocatspace = basesize;
	usedspace = 0
}

template<typename R>
 void MyDynamicArray<R>::returnDate(int index)
{
	 if (index = usedspace)
	 {
		 return date;
	 }
  
}
