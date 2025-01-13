// CMake_VCPKG.cpp : définit le point d'entrée de l'application.
//

#include <SFML/Window.hpp> // Correct header for SFML Window
#include <SFML/Graphics.hpp> // Needed for some event handling in SFML
#include <iostream> // For debugging if needed

int main()
{
    // Create an SFML window with a title and resolution
    sf::Window window(sf::VideoMode(800, 600), "My Window");

    // Run the program as long as the window is open
    while (window.isOpen())
    {
        sf::Event event;
        // Process all events
        while (window.pollEvent(event))
        {
            // Close window on the close event
            if (event.type == sf::Event::Closed)
                window.close();
        }
    }

    return 0;
}
