#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of the 6 major primitive types available in C++  here:
 
 int
 float
 bool
 double
 char
 wchar_t
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, call ignoreUnused once and pass all of your variables to it. see line 71 for an example
 
3) Declare 10 free functions
    each declaration should have a random number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.
    remember:
    Name functions what they do
        takeDogForWalk(int distanceInYards);
    Name variables what they are.
        int numStepsSinceStart;

4) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
5) pass each of your function parameters to the ignoreUnused function like you did in b)
6) if your function returns something other than void, add 'return { };' at the end of it.
7) provide default values for an arbitrary number of parameters in the function parameter list.

8) consult the coding style guide found in the Readme.MD and adjust the formatting of your 10 functions.  At this point, you might have something that looks like this:
    float someFunc2(bool yes, int bar=2) { ignoreUnused(yes, bar ); return { }; }
    This does not conform with the coding standard for this course (check the Readme.MD) and needs to be corrected
    
9) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
10) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a variable named "number", that uses the primitive type 'int', and the variable's initial value is '2'
    
    //ignoreUnused(number); //passing each variable declared to the ignoreUnused() function

    int planetsInSystem = 9;
    int ballsInOver = 6;
    
    float tempInC = 0.f;
    float tempInF = 32.0f;
    float absoluteZero = -273.15f;

    bool earthIsFlat = false;
    bool waterIsWet = true;
    bool fireIsHot = true;
   
    double pi = 3.14159265359;
    double loge = 0.4342944819;
    double universeTemp = 2.73;
    
    char alpha = 'A';
    char omega = 'Z';
    char averageGrade = 'C';
    
    ignoreUnused(number, planetsInSystem, ballsInOver,
                    tempInC, tempInF, absoluteZero,
                earthIsFlat, waterIsWet, fireIsHot,
                pi, loge, universeTemp,
                alpha, omega, averageGrade);
    
}

/*
 10 functions
 example:
 note: this example shows the result after completing steps 3-8
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
bool setTheControlsForTheHeartOfTheSun(int sunNumber, bool shipReturn = false)
{
    ignoreUnused(sunNumber, shipReturn);
    return{};
}
/*
 2)
 */
float getRoomTemperature(int roomNumber, int sensorNumber)
{
    ignoreUnused(roomNumber, sensorNumber);
    return{};
}
/*
 3)
 */
bool makeACupOfTea(int teaStrength = 10, bool withSugar = false, bool withMilk = true)
{
    ignoreUnused(teaStrength, withSugar, withMilk);
    return{};
}
/*
 4)
 */
float fillCarWithFuel(char fuelType = 'D', float totalAmountOfFuel = 0.0)
{
    ignoreUnused(fuelType, totalAmountOfFuel);
    return{};
}
/*
 5)
 */
int averageOfThreeIntegers(int first, int second, int third)
{
    ignoreUnused(first, second, third);
    return{};
}
/*
 6)
 */
bool setStudentGrade(int studentNumber, char gradeLetter, char passOrFail)
{
    ignoreUnused(studentNumber, gradeLetter, passOrFail);
    return{};
}
/*
 7)
 */
float calculateVolumeOfCube(float cubeHeight, float cubeWidth, float cubeDepth)
{
    ignoreUnused(cubeHeight, cubeWidth, cubeDepth);
    return{};
}
/*
 8)
 */
bool addItemToInventory(int itemCode, int itemQuantity, char shelfLetter)
{
    ignoreUnused(itemCode, itemQuantity, shelfLetter);
    return{};
}
/*
 9)
 */
float calculateDistanceTravelled(float speedOfVehicle, float durationOfTravel)
{
    ignoreUnused(speedOfVehicle, durationOfTravel);
    return{};
}
/*
 10)
 */
bool shoeRequestInStock(double shoeSize, char shoeColourCode, bool wideFitRequired)
{
    ignoreUnused(shoeSize, shoeColourCode, wideFitRequired);
    return{};
}
/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    auto setControls = setTheControlsForTheHeartOfTheSun(1, false);
    //2)
    auto getRoomTemp = getRoomTemperature(33, 7);
    //3)
    auto makeTea = makeACupOfTea();
    //4)
    auto fillCar = fillCarWithFuel('P', 50.00);
    //5)
    auto getAverage = averageOfThreeIntegers(4, 5, 4);
    //6)
    auto setGrade = setStudentGrade(42, 'A', 'P');
    //7)
    auto cubeVol = calculateVolumeOfCube(1, 4, 9);
    //8)
    auto addJamJars = addItemToInventory(3, 2, 'X');
    //9)
    auto distanceT = calculateDistanceTravelled(60.5, 2.5);
    //10)
    auto shoeInStock = shoeRequestInStock(10.5, 'R', true);
    
    ignoreUnused(carRented, setControls, getRoomTemp, makeTea,
                  fillCar, getAverage, setGrade, cubeVol,
                    addJamJars, distanceT, shoeInStock);
    std::cout << "good to go!" << std::endl;
    return 0;    
}
