#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>
#include "GameInit.h"
#include "GameObject.h"

std::vector<GameObject>GameInit::init_objects()
{
  std::vector<GameObject> objects; 

  GameObject square(sf::Vector2f(300,300), sf::Vector2f(70,70));

  objects.push_back(square);

  return objects;
}
