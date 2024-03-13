#pragma once
#include <string>
#include <SFML/Graphics.hpp>
#include "Button.h"


class kalculator
{
	sf::RenderWindow window;
	sf::Color gray;
	sf::Color White;
	sf::Color orange;
	std::vector<Button> keybord;
private:
	void update();
	void processEvent();
	void render();
	std::string keyboardText[5][4]{
		{"C", "CE", "X^", "sqrt"},
		{"7" , "8", "9", "+" },
	{ "4", "5", "6", "-" },
	{ "1", "2", "3", "*" },
	{".", "0", "=", "/"} };
	std::string fieldText = 0;
	sf::Text text;
	sf::Font font;
public:
	kalculator();
	void run();

};

