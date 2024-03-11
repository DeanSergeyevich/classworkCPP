#include <iostream>
#include <SFML/Graphics.hpp>


int main()
{
    sf::Color green(91, 165, 9);
    sf::RenderWindow window(sf::VideoMode(800, 600), "test sfml");
    int soccetSize = 50;
    std::vector<sf::RectangleShape>field;
    for(int i=0; i < window.getSize().x- soccetSize; i += soccetSize)
    {
        for (int j = 0; j < window.getSize().x - soccetSize; j += soccetSize)
        {
            sf::RectangleShape soccet;
            soccet.setOutlineThickness(2);
            soccet.setOutlineColor(sf::Color::Black);
            soccet.setSize(sf::Vector2f(soccetSize, soccetSize));
            soccet.setPosition(sf::Vector2f(j, i));
            field.push_back(soccet);
        }
    }

    sf::CircleShape circle(soccetSize / 2);
    int countSoccetWidth = window.getSize().x / soccetSize -1;
    int countSoccetHeight = window.getSize().y / soccetSize -1;
    sf::Vector2f PositionCircle(countSoccetWidth / 2, countSoccetHeight / 2);
    circle.setPosition(sf::Vector2f(PositionCircle.x * soccetSize, PositionCircle.y * soccetSize));
    circle.setFillColor(sf::Color::Green);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if(event.type == sf::Event::Closed)
                window.close();
            if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
            {
               if(PositionCircle.x>0) PositionCircle.x--;
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
            {
                if (PositionCircle.x < countSoccetWidth) PositionCircle.x++;
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
            {
                if (PositionCircle.y > 0) PositionCircle.y--;
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
            {
                if (PositionCircle.y < countSoccetHeight) PositionCircle.y++;
            }

            circle.setPosition(PositionCircle.x*soccetSize, PositionCircle.y * soccetSize);
            
        }

        window.clear(sf::Color::White);
        for(auto el: field)
        {
            window.draw(el);
        }
        window.draw(circle);
        window.display();
        
    }

    return 0;
}


