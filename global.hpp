#pragma once
#include <iostream>
#include "SFML\Graphics.hpp"

extern bool penSelected;
extern bool brushSelected;
extern bool eraserSelected;
extern bool fillSelected;
extern bool circleSelected;
extern bool polygonSelected;

extern bool mousePressedDown;

extern int lines_number;

extern sf::Color curr_col;
extern sf::Vector2i last_Mouse_pos;
extern std::vector<sf::VertexArray> vertices;

void init_toolbar(sf::Vector2i artBoardPos);
void toolbar_action();

void pentool_action(sf::RenderWindow& artBoard, sf::Event& evnt);
void brush_action(sf::RenderWindow& artBoard, sf::Event& evnt);

void canvas_draw(sf::RenderWindow& artBoard);

int save(sf::RenderWindow& artBoard);
