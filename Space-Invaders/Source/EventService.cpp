#include "../Header/EventService.h"
#include "../Header/GameService.h"
#include "../Header/GraphicService.h"


EventService::EventService()
{
    gameWindow = nullptr;
}

EventService::~EventService() = default;

void EventService::Initialize()
{
    gameWindow = ServiceLocator::GetInstance()->getGraphicService()->GetGameWindow();

}

void EventService::Update()
{


}

void EventService::ProcessEvents()
{
    if (isGameWindowOpen())
    {
        while (gameWindow->pollEvent(gameEvent))
        {
            if (gameWindowWasClosed() || hasQuitGame())
            {
                
                gameWindow->close();
            }
        }
    }


}

bool EventService::hasQuitGame()
{
    return (isKeyboardEvent() && PressedEscapeKey());
}

bool EventService::isKeyboardEvent()
{
    return gameEvent.type ==  sf::Event::KeyPressed;
}
bool EventService::PressedEscapeKey()
{
    return gameEvent.key.code == sf::Keyboard::Escape;
}

bool EventService::isGameWindowOpen()
{
    return gameWindow != nullptr;
}

bool EventService::gameWindowWasClosed()
{
    return gameEvent.type == sf::Event::Closed;
}












