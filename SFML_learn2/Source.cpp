#include <SFML/Graphics.hpp>


int main() {
	sf::RenderWindow window(sf::VideoMode(640, 480), "Title!");

	sf::CircleShape circuleShape(50);
	circuleShape.setFillColor(sf::Color::Red);
	circuleShape.setOutlineColor(sf::Color::White);
	circuleShape.setOutlineThickness(3);

	sf::RectangleShape rectShape(sf::Vector2f(50, 50));
	rectShape.setFillColor(sf::Color::Green);

	while (window.isOpen()) {
		sf::Event event;
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::EventType::Closed) {
				window.close();
			}
		}

		//Update scene

		//Render cycle

		window.clear(sf::Color::Black);

		//Render object

		window.display();
	}
	return 0;
}