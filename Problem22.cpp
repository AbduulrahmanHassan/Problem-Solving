// define the relations type between health class , hero , weapon , superpower and digram
#include <iostream>
using namespace std;


class health
{
    int hp;
    int fury;
};

class weapon
{
    public:
    void kill()
    {
        cout << "fight";
    }
};

class superpower
{
};

class hero : public weapon
{
    health hp;                  // composition
                  
    superpower *fire = nullptr; // aggregation

void Kill(weapon knife){ // association

    
}


};

int main()
{
    hero player;
    player.kill();
}