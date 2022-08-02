#include <iostream>
#include <string>
using namespace std;

/* Flight path calculator 
-User chooses aircraft by entering a number. Num passed to swtich to find speed
-Struct for coordinates
-Array that will capture said coordinates
-Calc the distance between each set of waypoints
-Function to return total distance and time
*/

struct Coordinates
{
    float x;
    float y;
};

int userChoice(int);
void getTotal(double, double);

int main()
{
    int choice, arrIndex = 0, total = 0, speed;
    const int ARRAY_XY = 100;
    Coordinates waypoints[ARRAY_XY];
    char again;
    double a2, b2, c2, powerX, powerY, totalDistance =0, totalTime = 0;

    cout << "### Flight Path Calculator ###\n";
    cout<<"To begin, choose an aircraft by entering the associated number...\n";
    cout<<"1) A-10\n2) Piper Cub\n3) Boeing 747\n4) Decathlon\nAircraft choice: ";
    cin>>choice;
    while (choice <= 0 || choice > 5){
        cout<<"Invalid input. Enter a correct number: ";
        cin>>choice;
    }
    cout<<endl;
    speed = userChoice(choice);
    cout<<"That aircraft flies at "<<speed<<" m/s (meters per second).";
    cout<<endl;
    cout << "Enter coordinates when prompted. Press enter to exit entering values.\n";
    cout << endl;
 
    do
    {
        cout<<"Waypoint #"<<(arrIndex + 1)<<" X: ";
        cin>>waypoints[arrIndex].x;
        cout<<"Waypoint #"<<(arrIndex + 1)<<" Y: ";
        cin>>waypoints[arrIndex].y;
        cout<<"("<<waypoints[arrIndex].x<<", "<<waypoints[arrIndex].y<<")"<<endl;
        cout<<endl;
        arrIndex++;
        total++;
        cout<<"Do you want to enter another coordinate? (Y/N): ";
        cin>>again; 

    } while (again == 'Y' || again == 'y');

    for (int index = 1; index < total; index++)
    {
        a2 = (waypoints[index].x - waypoints[(index - 1)].x);
        powerX = (a2 * a2);
        b2 = (waypoints[index].y - waypoints[(index - 1)].y);
        powerY = (b2 * b2);
        c2 = sqrt(powerX + powerY);
        cout << "Distance between waypoints " << index << " and " << (index + 1) << ": " << c2 << " meters" << endl;
        totalDistance += c2;

        //time required to fly each leg
        const double time = c2 / speed;
        cout << "Time required for this leg: " << time << " seconds\n";
        totalTime += time;
        cout << endl;
    }

    getTotal(totalDistance, totalTime);

    return 0;
}

int userChoice(int choice)
{
    int speed = 0;

    switch (choice)
    {
    case 1:
        speed = 188;
        break;
    case 2:
        speed = 39;
        break;
    case 3:
        speed = 250;
        break;
    case 4:
        speed = 57;
        break;
    }
    return speed;
}

void getTotal(double distance, double time)
{
    //total distance and time required to fly the entire path
    cout << "Total distance required to fly entire path: " << distance << " meters" << endl;
    cout << "Total time required to fly entire path: " << time << " seconds" << endl;
}