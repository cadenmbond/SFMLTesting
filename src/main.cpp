#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>
#include "GameInit.h"
#include "GameObject.h"

std::vector<GameObject> game_objects;

int main() {
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML window");
    
    const float speed = 0.35f;

    game_objects = GameInit::init_objects();

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }
        window.clear();

        for (size_t i = 0; i < game_objects.size(); i++) { // loop through the vector containing all the game objects
            game_objects[i].draw(window); // Call the draw method on each game object
        }

        window.display();
    }

    return 0;
}

