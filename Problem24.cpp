#include <iostream>
using namespace std;

class Creature
{
public:
    virtual void Attack() 
    {
        cout << "pure attack" << endl;
    }
};

class Enemy : public Creature
{
public:
    void Attack() override
    {
        cout << "normal attack" <<endl;
    }
};

class FlyingEnemy : public Enemy
{
public:
    void Attack() override
    {
        cout << "ranged attack" << endl;
    }
};

class Zombi : public Enemy
{
public:
    void Attack() override
    {
        cout << "melee attack" << endl;
    }
};

int main()
{
    Creature* c[4];

    c[0] = new Creature();
    c[1] = new Enemy();
    c[2] = new FlyingEnemy();
    c[3] = new Zombi();

    for (int i = 0; i < 4; i++)
    {
        c[i]->Attack(); 
    }

}
