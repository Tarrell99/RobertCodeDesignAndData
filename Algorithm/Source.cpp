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
		for (int j = i + 1; j < 10; j++)
		{
			int temp;
			if (i < j)
			{
				temp = i;
				i = j;
				j = temp;
				
			}
		}
	}
	return hp ;
}

int main()
{
	int Hparry[10];
	// call the function on an arry where the arry has the Hps of the playes and it sourts them in 
	// desending order and return the player with the lest Hp.
	Player* player1 = new Player;
	Player* player2 = new Player;
	player1->players(10);


}
