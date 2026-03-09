#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Creem la finestra
    sf::RenderWindow window(sf::VideoMode(800, 600), "Arkanoid");

    // Textures
    sf::Texture paddleTexture, ballTexture, blockTexture;

    // Comprovació i càrrega de textures amb missatges detallats
    if (!paddleTexture.loadFromFile("./paddle.png")) {
        cerr << "Error: no es pot carregar paddle.png (comprova nom i format PNG)" << endl;
        return -1;
    }
    if (!ballTexture.loadFromFile("./ball.png")) {
        cerr << "Error: no es pot carregar ball.png (comprova nom i format PNG)" << endl;
        return -1;
    }
    if (!blockTexture.loadFromFile("./block.png")) {
        cerr << "Error: no es pot carregar block.png (comprova nom i format PNG)" << endl;
        return -1;
    }

    // Sprites
    sf::Sprite paddle(paddleTexture);
    sf::Sprite ball(ballTexture);

    // Escalar els sprites (mida aprovada)
    paddle.setScale(0.2f, 0.2f); // barra
    ball.setScale(0.1f, 0.1f);   // bola

    paddle.setPosition(350, 550); // posició inicial de la barra
    ball.setPosition(390, 500);   // posició inicial de la bola

    // Bloques
    vector<sf::Sprite> blocks;
    for (int i = 0; i < 5; ++i) {        // 5 files
        for (int j = 0; j < 10; ++j) {   // 10 columnes
            sf::Sprite b(blockTexture);
            b.setPosition(70 * j + 50, 30 * i + 50);
            b.setScale(0.15f, 0.15f);   // escalar els blocs
            blocks.push_back(b);
        }
    }

    // Variables del joc
    bool jocEnMarxa = false;
    sf::Vector2f vel(0.3f, -0.3f);

    cout << "Prem ESPAI per començar. Mou la barra amb fletxes esquerra/dreta." << endl;

    // Bucle principal
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();

            // Començar joc
            if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Space)
                jocEnMarxa = true;
        }

        // Moviment de la barra
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
            paddle.move(-0.5f, 0);
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
            paddle.move(0.5f, 0);

        // Moviment de la bola
        if (jocEnMarxa)
            ball.move(vel);

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
            vel = sf::Vector2f(0.3f, -0.3f);
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