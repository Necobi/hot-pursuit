#pragma once
#include <bn_fixed_point.h>
#include <bn_sprite_ptr.h>
#include <bn_display.h>
class DisplayScore {
    public:
    ScoreDisplay();

    void update();

    void show_number(int x, int y, int number);

    resetScore();

};

