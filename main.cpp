#include <SFML/Graphics.hpp>

sf::RenderWindow * createWindow() {
    int width = 400;
    int height = 600;
    
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

    while (window->isOpen())
    {
        sf::Event event;
        while (window->pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window->close();
            
            if (event.type == sf::Event::KeyPressed) {
                window->close();
            }
        }
    }

    return 0;
}