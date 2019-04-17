#include <SFML/Graphics.hpp>
#include "game_engine.h"

sf::RenderWindow * createWindow() {
    int width = 500;
    int height = 700;
    
    sf::RenderWindow * window = new sf::RenderWindow(sf::VideoMode(width, height), "Jektris", sf::Style::None);
    
    sf::VideoMode screen = sf::VideoMode::getDesktopMode();
    
    int xPos = (screen.width - width)/2;
    int yPos = (screen.height - height) / 2;
    window->setPosition(sf::Vector2i(xPos,yPos));
    
    return window;
}

int main()
{
    sf::RenderWindow * window = createWindow();
    
    GameEngine engine(window);
    engine.run();

    return 0;
}