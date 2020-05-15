#pragma once
#include <iostream>
#include <vector>
#include <ctime>
#include <sstream>

#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>

class Game
{
private:
	//variables
	//window
	sf::RenderWindow* window;
	sf::VideoMode videoMode;
	sf::Event ev;

	//moouse position
	sf::Vector2i mousePosWindow;
	sf::Vector2f mousePosView;
	//font
	sf::Font font;
	//text;
	sf::Text uiText;

	bool endGame;
	unsigned points;
	int health;
	float enemySpawnTimer;
	float enemySpawnTimerMax;
	int maxEnemies;
	bool mouseHeld;

	//objects
	std::vector<sf::RectangleShape> enemies;
	sf::RectangleShape enemy;

	//private functions
	void initializeVariables();
	void initWindow();
	void initFonts();
	void initText();
	void initEnemies();
public:


	//constructors
	Game();
	virtual ~Game();

	//accessors
	const bool running() const;
	const bool getEndGame() const;

	//functions
	void spawnEnemy();
	void pollEvents();
	void updateMousePosition();
	void updateText();
	void updateEnemies();
	void update();

	void renderText(sf::RenderTarget& target);
	void renderEnemies(sf::RenderTarget& target);
	void render();
};

