#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
#include <string>
 
 
int main()
{
        //Entities and text
        bool wait = false;
 
        while (window.isOpen())
        {
                sf::Event event;
                while (window.pollEvent(event))
                {
                        if (event.type == sf::Event::Closed || (event.key.code == sf::Keyboard::Escape))
                                window.close();
                        else
                        {
                                if (event.key.code == sf::Keyboard::Space)
                                {
                                        wait = false;
 
                                }
                        }
                }
               
                if (!wait)
                {
                        //Events and Inputs
                }
                if (!wait)
                {
                        //Window Rendering Stuff
                        window.clear();
                        window.draw(shape);
                        window.draw(r1);
                        window.draw(score);
                        window.display();
                }      
        }
        return 0;
}
