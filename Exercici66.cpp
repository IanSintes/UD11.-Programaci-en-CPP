#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Crear la finestra
    sf::RenderWindow window(sf::VideoMode(800, 600), "Arkanoid");
    window.setFramerateLimit(60);

    // Textures
    sf::Texture paddleTexture, ballTexture, blockTexture;

    // Comprovació i càrrega de textures
    if (!paddleTexture.loadFromFile("./paddle.png")) {
        cerr << "Error: no es pot carregar paddle.png" << endl;
        return -1;
    }
    if (!ballTexture.loadFromFile("./ball.png")) {
        cerr << "Error: no es pot carregar ball.png" << endl;
        return -1;
    }
    if (!blockTexture.loadFromFile("./block.png")) {
        cerr << "Error: no es pot carregar block.png" << endl;
        return -1;
    }

    // Sprites
    sf::Sprite paddle(paddleTexture);
    sf::Sprite ball(ballTexture);

    // Escalar sprites
    paddle.setScale(0.2f, 0.2f);
    ball.setScale(0.1f, 0.1f);

    paddle.setPosition(350, 550);
    ball.setPosition(390, 500);

    // Bloques
    vector<sf::Sprite> blocks;
    for (int i = 0; i < 5; ++i) {        // 5 files
        for (int j = 0; j < 10; ++j) {   // 10 columnes
            sf::Sprite b(blockTexture);
            b.setPosition(70 * j + 50, 30 * i + 50);
            b.setScale(0.15f, 0.15f);
            blocks.push_back(b);
        }
    }

    // Variables del joc
    bool jocEnMarxa = false;
    sf::Vector2f vel(300.0f, -300.0f); // pixels per second

    cout << "Prem ESPAI per començar. Mou la barra amb fletxes esquerra/dreta." << endl;

    sf::Clock clock; // per delta time

    // Bucle principal
    while (window.isOpen()) {
        sf::Time delta = clock.restart();
        float dt = delta.asSeconds();

        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();

            if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Space)
                jocEnMarxa = true;
        }

        // Moviment de la barra
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
            paddle.move(-400.0f * dt, 0);
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
            paddle.move(400.0f * dt, 0);

        // Moviment de la bola
        if (jocEnMarxa)
            ball.move(vel * dt);

        // Col·lisions amb parets
        sf::Vector2f pos = ball.getPosition();
        if (pos.x < 0 || pos.x + ball.getGlobalBounds().width > 800) vel.x = -vel.x;
        if (pos.y < 0) vel.y = -vel.y;

        // Col·lisió amb barra
        if (ball.getGlobalBounds().intersects(paddle.getGlobalBounds()))
            vel.y = -vel.y;

        // Col·lisió amb blocks
        for (auto it = blocks.begin(); it != blocks.end();) {
            if (ball.getGlobalBounds().intersects(it->getGlobalBounds())) {
                vel.y = -vel.y;
                it = blocks.erase(it);
            } else {
                ++it;
            }
        }

        // Reinici si la bola cau
        if (pos.y > 600) {
            cout << "Has perdut! Prem ESPAI per reiniciar." << endl;
            ball.setPosition(390, 500);
            vel = sf::Vector2f(300.0f, -300.0f);
            jocEnMarxa = false;
        }

        // Dibuixar tot
        window.clear(sf::Color::Black);
        window.draw(paddle);
        window.draw(ball);
        for (auto &b : blocks)
            window.draw(b);
        window.display();
    }

    return 0;
}