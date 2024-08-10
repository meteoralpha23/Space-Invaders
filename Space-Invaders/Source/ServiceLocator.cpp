#include "D:\Outscal\Space-Invaders\Space-Invaders\Header\ServiceLocator.h"

ServiceLocator::ServiceLocator()
{
	graphicService = nullptr;
	eventService = nullptr;
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

}

void ServiceLocator::ClearAllServices()
{
	delete(graphicService);
	graphicService = nullptr;
	delete(eventService);
	eventService = nullptr;

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

}

void ServiceLocator::Update()
{
	graphicService->Update();
	eventService->Update();
}

void ServiceLocator::Render()
{
	graphicService->Render();
}

GraphicService* ServiceLocator::getGraphicService()
{
	return graphicService;
}

EventService* ServiceLocator::getEventService()
{
	return eventService;
}
