#include "field_location.h"

#ifndef TETRIS_FIELD_H
#define TETRIS_FIELD_H

class TetrisField {
public:
    TetrisField(int width, int height);
    FieldLocation& GetLocation(int x, int y);
    void SetLocation(int x, int y, FieldLocation& location);
    std::vector<FieldLocation> GetLocations();
    
    int width;
    int height;
    
private:
    std::vector<std::vector<FieldLocation> > fields;
};


#endif

