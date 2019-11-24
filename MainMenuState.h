#pragma once
#include "GameState.h"
#include "Button.h"
class MainMenuState :
	public State
{
private:
	//Variables
	sf::Texture backgroundTexture;
	sf::RectangleShape background;
	sf::Font font;

	std::map<std::string, Button*> buttons;

	//Functions
	void initVariables();
	void initBackground();
	void initFonts();
	void initKeybinds();
	void initButtons();

public:
	MainMenuState(sf::RenderWindow* window, std::map<std::string, int>* supportedKeys, std::stack<State*>* states);
	virtual ~MainMenuState();

	//functions
	void endState();

	void updateInput(const float& dt);
	void updateButtons();
	void update(const float& dt);
	void renderButtons(sf::RenderTarget* target = nullptr);
	void render(sf::RenderTarget* target = nullptr);
};

