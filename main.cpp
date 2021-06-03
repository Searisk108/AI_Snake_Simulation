//Header files
#include "SFML/Graphics.hpp"
#include "SFML/Audio.hpp"
#include <iostream>
#include <Screens.h>
#include "Menu.h"
#include "Game.h"
#include "Neural.h"


int main()
{
    std::cout<<"ACTIVITY LOG:"<<std:: endl;
    sf::RenderWindow window;
	Screens *screenPtrMenu;
	Menu menu;
	screenPtrMenu = &menu;
	screenPtrMenu -> drawWindow(window);
    return 0;

}


