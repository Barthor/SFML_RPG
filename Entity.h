#pragma once
#include<vector>
#include<iostream>
#include<ctime>
#include<cstdlib>
#include<fstream>
#include<sstream>
#include<stack>
#include<map>

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>
class Entity
{
private:

protected:
	//probably replace this with private data and use setters/getters
	sf::RectangleShape shape;
	float movementSpeed;

public:
	Entity();
	virtual ~Entity();

	//Functions
	virtual void move(const float& dt, const float dir_x, const float dir_y);

	virtual void update(const float& dt);
	virtual void render(sf::RenderTarget* target);
};

