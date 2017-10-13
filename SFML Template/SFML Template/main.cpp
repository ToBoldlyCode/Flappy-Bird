#include <SFML\Graphics.hpp>

#define SCREEN_WIDTH 1024
#define SCREEN_HEIGHT 1024

int main()
{
	sf::RenderWindow window(sf::VideoMode(SCREEN_WIDTH, SCREEN_HEIGHT), "Flappy Bird");
	
	while (window.isOpen())
	{

		window.clear();
		window.display();
	}

	return EXIT_SUCCESS;
}