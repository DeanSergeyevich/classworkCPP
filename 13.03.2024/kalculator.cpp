#include "kalculator.h"
#include "Button.h"
#include <SFML/Graphics.hpp>


kalculator::kalculator() :
window(sf::VideoMode(400, 600), "i-calculator!"),
gray(200, 200, 200, 255),
White(20, 20, 20, 25),
orange(198, 114, 57, 255)
{
    for (int i = 1; i < 6; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            sf::Color setColor = (i == 1 || j == 3) ? orange : gray;
            keybord.push_back(
                Button(sf::Vector2f(98, 98),
                    gray,
                    sf::Vector2f(j * 100, i * 100),
                    keyboardText[i - 1][j]));
        };
    }

    font.loadFromFile("impact.ttf");
    text.setFont(font);
    text.setString(fieldText);
    text.setFillColor(sf::Color::White);
    text.setPosition(sf::Vector2f(380, 200));
}




void kalculator::update()
{
}

void kalculator::processEvent()
{
    sf::Event event;
    while (window.pollEvent(event))
    {
        if (event.type == sf::Event::Closed)
            window.close();
    }
}

void kalculator::render()
{
    window.clear();
   for(auto el : keybord)
   {
       el.draw(window);
   }
    window.display();
}

void kalculator::run()
{
    while (window.isOpen())
    {
        processEvent();
        update();
        render();
    }

	
}


