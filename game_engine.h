#include <SFML/Graphics.hpp>

#ifndef GAME_ENGINE_H
#define GAME_ENGINE_H

class GameEngine {
public:
    GameEngine(sf::RenderWindow * window);
    void run();
private:
    void loop();
    void listenToEvents();
    void render();
    sf::RenderWindow * window;
};

#endif

