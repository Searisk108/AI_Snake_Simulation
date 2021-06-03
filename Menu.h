#ifndef MENU_H
#define MENU_H
#define MAX_NUMBER_OF_ITEMS 4
#include <Screens.h>


class Menu : public Screens
{
    public:
        Menu();
        int mode=0;
        void drawWindow(sf::RenderWindow &window);
        void MoveUp();
        void MoveDown();
        int GetPressedItem() { return selectedItemIndex; }
        int get_mode();
        virtual ~Menu();
    protected:
        int selectedItemIndex;

         sf::Font font;
        sf::Text menu[MAX_NUMBER_OF_ITEMS];
        sf::Text man;

};

#endif // MENU_H
