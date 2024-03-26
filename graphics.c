#include <SFML/Graphics.hpp>

int main() {
    // Create a window
    sf::RenderWindow window(sf::VideoMode(800, 600), "Doraemon");

    // Load Doraemon image
    sf::Texture doraemonTexture;
    if (!doraemonTexture.loadFromFile("doraemon.png")) {
        // Replace "doraemon.png" with the actual path to your Doraemon image
        return EXIT_FAILURE;
    }

    // Create Doraemon sprite
    sf::Sprite doraemonSprite(doraemonTexture);
    doraemonSprite.setScale(0.5f, 0.5f);  // Adjust scale if needed

    // Main loop
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }

        // Clear the window
        window.clear();

        // Draw Doraemon
        window.draw(doraemonSprite);

        // Display the contents of the window
        window.display();
    }

    return EXIT_SUCCESS;
}
