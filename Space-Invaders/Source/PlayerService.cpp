#include "../Header/PlayerService.h"
#include "../Header/EventService.h"
#include "../Header/ServiceLocator.h"

PlayerService::PlayerService()
{
	game_window = nullptr;
}

PlayerService::~PlayerService() = default;

//init
void PlayerService::initialize()
{
	game_window = ServiceLocator::GetInstance()->getGraphicService()->GetGameWindow();
	initializePlayerSprite();
}

//take our players input in update, then set the position.
//order is important here
void PlayerService::update()
{
	processPlayerInput();
	player_sprite.setPosition(getPlayerPosition());
}

void PlayerService::render()
{
	game_window->draw(player_sprite);
}

void PlayerService::processPlayerInput()
{
	EventService* event_service = ServiceLocator::GetInstance()->getEventService(); //get the event service object created in service locator

	if (event_service->isKeyboardEvent()) //check if a key has been pressed
	{
		if (event_service->pressedLeftKey())
		{
			moveLeft();
		}

		if (event_service->pressedRightKey())
		{
			moveRight();
		}
	}
}


void PlayerService::initializePlayerSprite()
{
	if (player_texture.loadFromFile(player_texture_path))
	{
		player_sprite.setTexture(player_texture);
	}
}

void PlayerService::move(float offsetX) {
	position.x += offsetX*ServiceLocator::GetInstance()->getTimeService()->getDeltaTime();
}

//helper functions
sf::Vector2f PlayerService::getPlayerPosition() { return position; }
int PlayerService::getMoveSpeed() { return movement_speed; }


void PlayerService::moveLeft()
{
	position.x -= movement_speed * ServiceLocator::GetInstance()->getTimeService()->getDeltaTime();
}

void PlayerService::moveRight()
{
	position.x += movement_speed * ServiceLocator::GetInstance()->getTimeService()->getDeltaTime();
}
