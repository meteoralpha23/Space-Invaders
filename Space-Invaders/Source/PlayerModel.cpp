#include "D:\Outscal\Space-Invaders\Space-Invaders\Header\PlayerModel.h"

PlayerModel::PlayerModel()
{

}

PlayerModel::~PlayerModel()
{
}

void PlayerModel::Initialize()
{
}

void PlayerModel::Reset()
{

	playerAlive = true;
	playerPosition = initialPlayerPosition;
	playerScore = 0;
}

sf::Vector2f PlayerModel::getPlayerPosition()
{
	return playerPosition;
}

sf::Vector2f PlayerModel::setPlayerPosition(sf::Vector2f position)
{
	playerPosition = position;
}




int PlayerModel::getPlayerScore()
{
	return playerScore;
}

void PlayerModel::setPlayerScore(int score)
{
	playerScore = score;
}

PlayerState PlayerModel::getPlayerState()
{
	return playerState;
}

void PlayerModel::setPlayerState(PlayerState state)
{
	playerState = state;
}




