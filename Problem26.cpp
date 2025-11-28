/*position = 0     # enter start position
velocity = 10    # enter start vel
dt = 0.016       # enter DT
acc = -9.81      # enter acc
drag= 0.5        # enter drag

loop every frame:
    accel = acc - drag * velocity  
    velocity += acc * dt
    position += velocity * dt


Output:
Time    positon
0.016      0
0.032      10
---        --
1          100*/

#include <iostream>
using namespace std;

int main()
{
    float position =0;
    float velocity =0;
    float deltaTime =0;
    float accelration =0;
    float drag =0;
    float currentTime = 0;
    cout<<"Enter position , velocity , deltaTime , accelration , drag:  " <<endl;
    cin>> position >>velocity>>deltaTime>>accelration>>drag;
    float accel =0;
    while(currentTime<1)
    {
        currentTime +=deltaTime;
        accel = accelration - drag * velocity;
        velocity +=accel * deltaTime ;
        position +=velocity * deltaTime;
        cout<<"Output: "<<endl;
        cout<<"Time      Position" << endl;
        cout<<currentTime<<"    "<<position<<endl;
    }

}