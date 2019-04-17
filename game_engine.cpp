#include "game_engine.h"

GameEngine::GameEngine(sf::RenderWindow * window) {
    this->window = window;
}

void GameEngine::listenToEvents() {
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

void GameEngine::render() {
    window->clear(sf::Color::Black);
    sf::RectangleShape rectangle(sf::Vector2f(130, 130));
    rectangle.setPosition(10.f, 10.f);
    window->draw(rectangle);
    window->display();
}

void GameEngine::loop() {
    this->listenToEvents();
    this->render();
}

void GameEngine::run() {
    while (window->isOpen())
    {
        this->loop();
    } 
}