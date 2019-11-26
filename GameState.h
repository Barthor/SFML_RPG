#pragma once

#include "State.h"


class GameState :
	public State
{
private:
	Player* player;

	//Functions
	void initKeybinds();
	void initTextures();
	void initPlayers();

public:
	GameState(sf::RenderWindow* window, std::map<std::string, int>* supportedKeys, std::stack<State*>* states);
	virtual ~GameState();

	//functions
	void updateInput(const float& dt);
	void update(const float& dt);
	void render(sf::RenderTarget* target = nullptr);
};