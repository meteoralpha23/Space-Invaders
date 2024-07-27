#include <SFML/Graphics.hpp>

int main()
{
    // Define the video mode (dimensions)
    sf::VideoMode videoMode = sf::VideoMode(1020,780 );
    
    
    sf::RenderWindow window(videoMode, "This is my first SFML Window");
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            
            if (event.type == sf::Event::Closed)
                window.close();
        }


        // Clear the window
        window.clear(sf::Color::Cyan);
        sf::CircleShape circle(50); // Radius 50
        circle.setFillColor(sf::Color::Red);
        circle.setPosition(400, 300); // Set position
        window.draw(circle);

        sf::RectangleShape rect(sf::Vector2f(100, 50));
        rect.setFillColor(sf::Color::Blue);
        rect.setPosition(600, 400);
        window.draw(rect);

        sf::RectangleShape line(sf::Vector2f(300, 2));
        line.rotate(35);
        line.setPosition(200, 470);
        window.draw(line);

        sf::ConvexShape convex(4);
        convex.setPoint(0, sf::Vector2f(0, 0));
        convex.setPoint(1, sf::Vector2f(620, 200));
        convex.setPoint(2, sf::Vector2f(270, 140));
        convex.setPoint(3, sf::Vector2f(287, 140));
        convex.setFillColor(sf::Color::Yellow);
        window.draw(convex);

        // Display whatever you draw
        window.display();
    }


    return 0;
}