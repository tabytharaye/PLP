#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstring>
using namespace std;

/* Flight path calculator 
-User chooses aircraft by entering a number. Num passed to swtich to find speed
-Struct for coordinates
-Array that will capture said coordinates
-Calc the distance between each set of waypoints
-Function to return total distance and time
*/

// struct to hold the coordinates so that x and y can be stored together
struct Coordinates
{
    float x;
    float y;
};

// function to pass in the user's choice to a switch statement and return correct speed value
int userChoice(int);
// function to take in total distance and time, calc and display
void getTotal(double, double);

int main()
{
    // create log file
    fstream planeLog;
    /// open and write to log file
    planeLog.open("planelog.txt", ios::out);

    // variables
    int choice, arrIndex = 0, total = 0, speed;
    const int SIZE = 4;
    string airplanes[SIZE] = {"A-10", "Piper Cub", "Boeing 747", "Decathlon"};
    const int ARRAY_XY = 100;
    Coordinates waypoints[ARRAY_XY];
    char again;
    double a2, b2, c2, powerX, powerY, totalDistance = 0, totalTime = 0;
    
    cout << "### Flight Path Calculator ###\n";
    cout<<"To begin, choose an aircraft from the following list by entering the associated number...\n";

    for (int count = 0; count < SIZE; count++)
        cout<<"Number "<<(count+1)<<": "<<airplanes[count]<<endl;

    // validate user input
    while (choice <= 0 || choice > 4){
        cout<<"Invalid input. Enter a correct number: ";
        cin>>choice;
    }
    cout<<endl;

    // write aircraft to log file
    planeLog<<"Aircraft: "<<airplanes[choice-1]<<endl;

    // pass choice to function
    speed = userChoice(choice);
    cout<<"That aircraft flies at "<<speed<<" m/s (meters per second).";
    cout<<endl;
    // write speed to log file
    planeLog<<"Speed flown: "<<speed<<endl;
    cout << "Enter coordinates when prompted. Press enter to exit entering values.\n";
    cout << endl;

    // do-while loop to collect coordinates as long as the user wishes (array caps at 100)
    do
    {
        cout<<"Waypoint #"<<(arrIndex + 1)<<" X: ";
        cin>>waypoints[arrIndex].x;
        cout<<"Waypoint #"<<(arrIndex + 1)<<" Y: ";
        cin>>waypoints[arrIndex].y;
        cout<<"("<<waypoints[arrIndex].x<<", "<<waypoints[arrIndex].y<<")"<<endl;
        // write coordinates to log file
        planeLog<<"Coordinate "<<(arrIndex + 1)<<": ";
        planeLog<<fixed;
        planeLog<<"("<<waypoints[arrIndex].x<<", "<<waypoints[arrIndex].y<<")"<<endl;
        cout<<endl;
        arrIndex++;
        total++;
        cout<<"Do you want to enter another coordinate? (Y/N): ";
        cin>>again; 
        
    } while (again == 'Y' || again == 'y');
    
    // iterate through each coordinate
    for (int index = 1; index < total; index++)
    {
        // formula to gather waypoint data 
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
    // pass data to function
    getTotal(totalDistance, totalTime);

    // close log file and end program
    planeLog.close();
    return 0;
}

int userChoice(int choice)
{
    // default set to 0
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