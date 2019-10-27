#pragma once

#include "State.h"


class GameState :
	public State
{
private:
	Entity player;

	//Functions
	void initKeybinds();

public:
	GameState(sf::RenderWindow* window, std::map<std::string, int>* supportedKeys);
	virtual ~GameState();

	//functions
	void endState();

	void updateInput(const float& dt);
	void update(const float& dt);
	void render(sf::RenderTarget* target = nullptr);
};