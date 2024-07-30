#pragma once

	class GameService
	{
	private:
		void Initialize();
		void  Destroy();
	public:
		GameService();

		~GameService();

		void Ignite();

		void update();

		void render();

		bool isRunning();




	};

