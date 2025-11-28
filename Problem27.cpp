/*Inputs :
velocity = 10    # enter start vel
acc = -9.81      # enter acc
drag= 0.5        # enter drag

Simulate an arrow -> moving along a 1D line of length 100 units, using velocity, acceleration, drag, and deltaTime.
The arrow keeps moving until its velocity reaches 0.
If it reaches the boundary (0 or 100) while still having velocity, its direction reverses.

calcuate the actual deltaTime and use it

each iteration/frame draw where the arrow is

the arrow is this shape ->  and when reverse <-

so frame 1
->
frame 2
 ->
frame 3
  ->*/
#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    float velocity = 10;
    float acceleration = -9.81;
    float drag = 0.5;
    // cout << "Enter velocity , accelration , drag:  " << endl;
    //   cin >> velocity >> accelration >> drag;
    DWORD startTime = 0;
    DWORD deltaTimeMs = 0;
    int counter = 0;
    int counter2 = 1;
    int x = 0;
    DWORD previousTime = GetTickCount();
    bool done = true;
    while (done)
    {
        DWORD currentTime = GetTickCount();
        DWORD deltaTimeMs = currentTime - previousTime;
        float deltaTime = deltaTimeMs / 1000.0f;
        previousTime = currentTime;

        counter += 1;
        velocity = velocity + acceleration * drag * deltaTime;

        if (counter2 < 100)
        {
            if (velocity >= 0)
            {
                for (int i = 0; i < counter; i++)
                    cout << " ";
                counter2++;
            }
            cout << (velocity >= 0 ? "->" : "<-") << endl; // arrow printed outside
        }
        else if(counter > 100)
        {
            done = false;
        }
    }
}