#include <SFML/Graphics.hpp>

#ifndef FIELD_LOCATION_H
#define FIELD_LOCATION_H

class FieldLocation {
public:
    FieldLocation(int x, int y, sf::Drawable * drawable) : 
                x(x), y(y), drawable(drawable) {}
    int x;
    int y;
    sf::Drawable * drawable;
};

#endif

