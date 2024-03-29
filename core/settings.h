#pragma once

#include "SFML/Graphics.hpp"

#define WINDOW_WIDTH  1920
#define WINDOW_HEIGHT 1080
#define TITLE         "Crossly"
#define FONT_SIZE     24
#define DEBUG         true

// GRID
#define GRID_SIZE           50
#define GRID_THICKNESS       1
#define GRID_SELECT_RADIUS  30
#define GRID_LINKING_RADIUS 10
sf::Color GRID_OUTLINE_COLOR(46, 40, 36, 100);
sf::Color    GRID_FILL_COLOR(160, 160, 160);

// ACTIVE POINT
#define   POINT_RADIUS    5
#define   POINT_THICKNESS 1
sf::Color POINT_OUTLINE_COLOR(0, 0, 0);
sf::Color POINT_FILL_COLOR(255, 0, 0);
sf::Color SELECTED_POINT_FILL_COLOR(0, 0, 255);

// PASSIVE POINT
#define   ACTIVE_POINT_RADIUS    5
#define   ACTIVE_POINT_THICKNESS 1
sf::Color ACTIVE_POINT_OUTLINE_COLOR(255, 255, 255);
sf::Color ACTIVE_POINT_FILL_COLOR(0, 0, 0);

// FIRST IN CURRENT POLYGON POINT
#define   FIRST_POINT_RADIUS    5
#define   FIRST_POINT_THICKNESS 1
sf::Color FIRST_POINT_OUTLINE_COLOR(255, 255, 255);
sf::Color FIRST_POINT_FILL_COLOR(0, 255, 0);

// POLYGON
#define   POLYGON_THICKNESS 2
sf::Color POLYGON_FILL_COLOR(0, 0, 0, 0);
sf::Color POLYGON_OUTLINE_COLOR(0, 0, 0);

// CONVEX
#define   CONVEX_THICKNESS 2
sf::Color CONVEX_FILL_COLOR(202, 145, 255, 50);
sf::Color CONVEX_OUTLINE_COLOR(0, 0, 0, 255);