#include "include/process.h"
#include "process.cpp"

using namespace std;

int main()
{
    Hooman fritz(100, "Fritz");
    Cat kitty(20, 0);
    Inventory drawer (0);

    appear();

    while (true) {
        string playerAns;
        gameOptions(fritz, kitty, drawer);

        cout << endl << "Enter Input : ";
        getline(cin,playerAns);

        if(playerAns == "1") {

            system("cls");
            drawer.checkStore();

        } else if (playerAns == "2") {

            system("cls");
            kitty.feedCat(drawer);

        } else if (playerAns == "3") {

            system("cls");
                if (kitty.affectionLevel < 100) {
                    fritz.damagePlayer(kitty);
                    if (fritz.health == 0) {
                        cout << "You Lost. You died due to Kitty`s Scratches." << endl;
                        return 0;
                    }
                } else {
                    petCat();
                    return 0;
                }

        } else if (playerAns == "4") {

            system("cls");
            cout << "Thanks for playing." << endl;
            return 0;

        } else {

            system("cls");
            cout << "Invalid Input. Try again." << endl;

        }
    }

    return 0;
}













