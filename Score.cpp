#include "Score.h"
#include "Menu.h"
Score::Score()
{
    //ctor
}

Score::~Score()
{
    //dtor
}

void Score::drawWindow(sf::RenderWindow &window)
{
    sf::RenderWindow windowx;
	Screens *screenPtrMenu;
	Menu menu;
	screenPtrMenu = &menu;

    window.create(sf::VideoMode(800, 600), "Score");
	float width =window.getSize().x;
	float height =window.getSize().y;
    sf::Music music;
	music.openFromFile("Stranger_Things1.ogg");
    music.play();

    //Texture and Sprite for background image
    sf :: Texture t1;
	t1.loadFromFile("alpha2.jpg");
	sf:: Sprite  background(t1);

    font.loadFromFile("mexcel3D.ttf");

	score[0].setFont(font);
	score[0].setColor(sf::Color::Yellow);
	score[0].setString("Current Score");
	score[0].setPosition(sf::Vector2f(width -600, height-550 ));

	score[1].setFont(font);
	score[1].setColor(sf::Color::White);
	score[1].setString("Highest Score");
	score[1].setPosition(sf::Vector2f(width -600, height-500));

    while (window.isOpen())
    {
       sf:: Event e;
        while (window.pollEvent(e))
        {
            if (e.type ==sf:: Event::Closed)
                window.close();

        }
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
        {
            std::cout<<"Escape was pressed."<<std::endl;
            window.close();
            screenPtrMenu -> drawWindow(windowx);

        }



     window.clear();
     window.draw(background);
	for (int i = 0; i < 2; i++)
	{
		window.draw(score[i]);
	}
		window.display();

	}
}
