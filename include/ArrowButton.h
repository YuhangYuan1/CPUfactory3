// Copyright 2019 Roie R. Black
#pragma once
#include "Graphics.h"
#include <string>

enum DIRECTION {
     UP, DOWN, LEFT, RIGHT 
};

class ArrowButton {
 private:
    int size;
    bool state;
    int direction;
    ColorName button_on_color;
    ColorName button_off_color;
    std::string label;
    ColorName label_color;
    bool label_on;
    int x;
    int y;
    int border;
    void drawLabel(int x, int y);
    void drawArrow(void);

 public:
    ArrowButton();
    void set_size(int s);
    void set_pos(int x, int y);
    void set_direction(std::string dir);
    void toggle(int x, int y);
    void set_on_color(ColorName color);
    void set_off_color(ColorName color);
    void set_on(void);
    void set_off(void);
    void set_state(bool s);
    bool get_state(void);
    void set_label(std::string l);
    void set_label_color(ColorName c);
    void draw(void);
};

