#include<iostream>

struct Player
{
	int heath;
	int players(int hp);
};

int Player::players(int hp)
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = i + 1; j < 10;)
		{
			int temp;
			if (i < j)
			{
				temp = i;
				i = j;
				j = temp;
				i++;
			}
		}
	}
	return 0;
}

int main()
{
	


}
