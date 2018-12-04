#include<iostream>

struct Dragon
{
	bool operator <(const Dragon& other);
	int heath;
	 void Dragons(Dragon arr[], int size);
};

bool Dragon::operator<(const Dragon& other)
{
	return this->heath < other.heath;
}

void Dragon::Dragons(Dragon arr[], int size)
{
	 Dragon temp;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0 ; j < size; j++)
		{
			
			if (arr[i] < arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
				
			}
		}
	}
}

int main()
{
	// call the function on an arry where the arry has the Hps of the playes and it sourts them in 
	// desending order and return the player with the lest Hp.
	Dragon dragon1;
	Dragon dragon2;
	Dragon dragon3;
	dragon1.heath = 20;
	dragon2.heath = 900;
	dragon3.heath = 47;

	Dragon arr[3] = { dragon1, dragon2, dragon3 };

	Dragon test;

	test.Dragons(arr, 3);

	system("pause");
}
