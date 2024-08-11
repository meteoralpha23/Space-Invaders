#pragma once

#include<SFML/Graphics.hpp>

class PlayerService
{
private:
    int health = 3;
    sf::Vector2f position = sf::Vector2f(500.0f, 400.0f);
    float movement_speed = 300.0f;
    int player_score = 0;

    const sf::String player_texture_path = "assets/textures/player_ship.png";

    sf::Texture player_texture;
    sf::Sprite player_sprite;

    sf::RenderWindow* game_window;

    void initializePlayerSprite();
    void processPlayerInput();

    void moveLeft();
    void moveRight();

public:
    PlayerService();
    ~PlayerService();

    void initialize();
    void update();
    void render();

    void move(float offsetX);
    int getMoveSpeed();
    sf::Vector2f getPlayerPosition();


};