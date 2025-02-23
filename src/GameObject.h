#ifndef GAME_OBJECT_H
#define GAME_OBJECT_H

#include <SFML/Graphics.hpp>

class GameObject {
public:
    sf::RectangleShape shape;

    GameObject(sf::Vector2f size, sf::Vector2f position) {
        shape.setSize(size);
        shape.setPosition(position);
    }

    void draw(sf::RenderWindow& window) {
        window.draw(shape);
    }
};

#endif
