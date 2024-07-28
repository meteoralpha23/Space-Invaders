#include <SFML/Graphics.hpp>
#include<iostream>

class Player
{

   
    int health=3;
    int playerScore = 0;
   
    sf::Vector2f position=sf::Vector2f(200.0f,100.0f);


    public:
    sf::Texture playerTexture;
    sf::Sprite sprite;
    int movementSpeed;

    void takeDamage() {};
    void move() {};
    void shootBullets() {};


};

int main()
{

    sf::VideoMode videoMode = sf::VideoMode(800, 600);
    sf::RenderWindow window(videoMode, "SPACE INVADERS");

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
        }
        window.clear(sf::Color::Black);
        window.display();
    }





    


    return 0;
}