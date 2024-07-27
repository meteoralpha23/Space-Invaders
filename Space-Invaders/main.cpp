#include <SFML/Graphics.hpp>

int main()
{
    // Define the video mode (dimensions)
    sf::VideoMode videoMode = sf::VideoMode(1020,780 );

    
    sf::RenderWindow window(videoMode, "This is my first SFML Window");
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            // Check for window closure
            if (event.type == sf::Event::Closed)
                window.close();
        }


        // Clear the window
        window.clear(sf::Color::Red);

        // Display whatever you draw
        window.display();
    }


    return 0;
}