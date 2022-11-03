#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    enum menus
    {
        MENU_1 = 1,
        ABOUT = 2,
        EXIT = 3,
        DEFAULT
    };

    menus currentMenu = DEFAULT;

    int selectedMenu;

    do
    {
        system("cls");

        if (currentMenu != DEFAULT) 
        {
            cout << "\tТекущее меню: " << currentMenu << "\n";

            if (currentMenu == ABOUT)
            {
                cout << "\n\tАвтор программы Иванов И.И.\n\n";
            }
        }
        else 
        {
            cout << "Меню\n";
            cout << "Пожалуйста сделайте свой выбор\n";
        }

        cout << "1 - Меню 1\n";
        cout << "2 - Об авторе\n";
        cout << "3 - Выход\n";
        cout << "Выбор: ";
        cin >> selectedMenu;

        switch (selectedMenu)
        {
        case MENU_1:
            currentMenu = MENU_1;
            break;
        case ABOUT:
            currentMenu = ABOUT;
            break;
        case EXIT:
            currentMenu = EXIT;
            break;
        default:
            currentMenu = DEFAULT;
            break;
        }
    } while (currentMenu != EXIT);
}
