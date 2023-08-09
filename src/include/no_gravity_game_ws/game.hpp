#pragma once
#include "window.hpp"
#include "player.hpp"
#include "physics.hpp"
#include <SFML/Graphics.hpp>

#define SCREEN_WIDTH 640
#define SCREEN_HEIGHT 480
#define SPEED 200
#define SPEED_JOYSTICK 0.02 // maximum value of the joystick is 100
#define MAX_THRUST_FORCE 0.1
#define GRAVITY 0
#define FRAME_RATE 60

class Game
{
    public:
    // constuctors
    Game();

    // deconstructors
    ~Game();

    // methods
    void handleInput();
    void update();
    void render();
    Window* getWindow();
    
    private:
    sf::Clock clock_;
    sf::Time dt_;
    Window window_;
    Player player_;
    PhysicsObject playerPhysics_;
};