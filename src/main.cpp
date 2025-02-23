#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>
#include "GameInit.h"
#include "GameObject.h"

std::vector<GameObject> game_objects;

int main() {
    // Create the window
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML window");
    // Movement speed
    const float speed = 0.35f;

    game_objects = GameInit::init_objects();

    // Main loop
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }
        // Clear the window
        window.clear();

        // Loop through each GameObject and draw it
        for (size_t i = 0; i < game_objects.size(); i++) { // Start from 0
            game_objects[i].draw(window); // Call the draw method on each object
        }

        // Display the contents of the window
        window.display();
    }

    return 0;
}

