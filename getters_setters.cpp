#include <iostream>
using namespace std;

class hero
{
    // hero k properties which is [private]

    int health;
    int wealth;
    string position;

public:
    char level;

    // getters :-
    int getHealth()
    {
        return health;
    }

    int getWealth()
    {
        return wealth;
    }

    char getLevel()
    {
        return level;
    }

    string getPosition()
    {
        return position;
    }

    // setters :-
    void setHealth(int h)
    {
        health = h;
    }

    void setWealth(int w)
    {
        wealth = w;
    }

    void setLevel(char ch)
    {
        level = ch;
    }

    void setPosition(string pos)
    {
        position = pos;
    }
};

int main()
{
    hero ramesh;
    cout << "rameshs health before initializing its value (before using setter)::" << ramesh.getHealth() << endl;

    // use setter
    ramesh.setHealth(60);
    ramesh.setWealth(620);
    ramesh.setPosition("first");

    ramesh.level = 'A';
    cout << "health is" << ramesh.getHealth() << endl;
    cout << "wealth is" << ramesh.getWealth() << endl;
    cout << "level is" << ramesh.getLevel() << endl;
    cout << "position is" << ramesh.getPosition() << endl;

    cout << "yoyo" << ramesh.level << endl;
}