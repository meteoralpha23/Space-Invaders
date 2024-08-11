#include "D:\Outscal\Space-Invaders\Space-Invaders\Header\ServiceLocator.h"




ServiceLocator::ServiceLocator()
{
	graphicService = nullptr;
	eventService = nullptr;
	playerService = nullptr;
	CreateServices();
}


ServiceLocator::~ServiceLocator()
{
	ClearAllServices();
	
}

void ServiceLocator::CreateServices()
{
	graphicService = new GraphicService();
	eventService = new EventService();
	playerService = new PlayerService();

}

void ServiceLocator::ClearAllServices()
{
	delete(graphicService);
	graphicService = nullptr;
	delete(eventService);
	eventService = nullptr;
	delete(playerService);

}

ServiceLocator* ServiceLocator::GetInstance()
{
	static ServiceLocator instance;
	return &instance;  // Return address of the instance
}

void ServiceLocator::Initialize()
{
	graphicService->Initialize();
	eventService->Initialize();
	playerService->initialize();

}

void ServiceLocator::Update()
{
	graphicService->Update();
	eventService->Update();
	playerService->update();
}

void ServiceLocator::Render()
{
	graphicService->Render();
	playerService->render();
}

GraphicService* ServiceLocator::getGraphicService()
{
	return graphicService;
}

EventService* ServiceLocator::getEventService()
{
	return eventService;
}
