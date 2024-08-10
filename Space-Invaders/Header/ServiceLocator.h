#pragma once
#include "D:\Outscal\Space-Invaders\Space-Invaders\Header\GraphicService.h"
#include "D:\Outscal\Space-Invaders\Space-Invaders\Header\EventService.h"


class ServiceLocator
{
private:


	GraphicService *graphicService;
	EventService* eventService;
	
	ServiceLocator();
	~ServiceLocator();

	void CreateServices();
	void ClearAllServices();

public:
	static ServiceLocator* GetInstance();

	void Initialize();
	void Update();
	void Render();

	GraphicService* getGraphicService();
	EventService* getEventService();
};
