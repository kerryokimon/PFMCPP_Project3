/*
Project 3 - Part 1e / 5
Video:  Chapter 2 Part 5
User-Defined Types

Create a branch named Part1

Purpose: The entire purpose of this 5-part project is to get you writing C++ code that compiles and to 
reinforce the syntax habits that C++ requires.  
What you create in this project will be used as the basis of Project 5 in the course.   

************************
Part1 purpose:  Learn to write UDTs

You are going to write 10 UDTs in project3.  
    Part 1a: you will learn to think about an object in terms of its sub-objects.
    Part 1b: you will write 4 un-related UDTs in plain english
    Part 1c: you will write 1 UDT in plain english that will be made of 5 related sub-objects
    Part 1d: you will write plain-english UDTs for the 5 sub-objects that form the UDT defined in Part 1c
    Part 1e: you will convert those 10 plain-english UDTs into code that runs.
************************

Convert your 10 Plain-english UDTs into code.

I recommend compiling after finishing each one and making sure it compiles 
without errors or warnings before moving on to writing the next UDT. 

1) define an empty struct for each of your 10 types. i.e.:
*/
struct CellPhone
{

};
/*
2) Copy your 5 properties & 3 actions into the empty struct body.
    - comment them out.
    
3) declare your member variables and member functions underneath each plain-english comment in your struct's body.
    - give the member variables relevant data types
 
4) make the function parameter list for those member functions use some of your User-Defined Types
    - You'll write definitions/implementations for these functions in Project3 Part2
    - you'll call each of these functions in Project3 part3
 
5) make 2 of the 10 user-defined types have a nested class.  
    - this nested class also needs 5 properties and 3 actions.
    - these nested classes are not considered one of your 10 UDTs.
    - this nested class must be related to the class it is nested inside
 
6) your 10th UDT's properties should be instances of your #5-#9 UDTs.   
    - No primitives allowed!
 
7) After you finish defining each type, click the [run] button.  
    Clear up any errors or warnings as best you can. 
 */

/*
 example:  

Thing: Car Wash   
    5 properties:
        - number of vacuum cleaners
        - number of eco-friendly cleaning supplies
        - stores the amount of water used per week.
        - stores amount of profit made per week
        - number of cars serviced per day
    3 things it can do:
        - wash and wax car
        - charge customer
        - detail the car interior
 */

#include <iostream>
#include <string>

struct CarWash //                                   1) define an empty struct for each of your 10 types.       
{
    //number of vacuum cleaners                     2) copied and commented-out plain-english property
    int numVacuumCleaners = 3; //                   3) member variables with relevant data types.
    //number of eco-friendly cleaning supplies      
    int numEcoFriendlyCleaningSupplies = 20;     
    //stores the amount of water used per week.     
    float waterUsedPerWeek = 200.f;            
    //stores amount of profit made per week         
    float profitPerWeek = 495.95f;               
    //number of cars serviced per day               
    int numberOfCarsServiced = 10;               
    
    struct Car //5)                                 Note that the nested type 'Car' is related to the 'CarWash' 
    {
        //2) member variables with relevant data types.  the names are appropriate for the U.D.T.'s purpose.
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        
        int year = 1985;
        std::string manufacturer = "Toyota";
        std::string model = "Corolla";

        //3) a member function whose parameter has a default value.
        //the parameter name is related to the work the function will perform.
        void fillTank(double fuelAmountInGallons = 2.0);  
        void breakDown(std::string failureType, bool requiresTow = false);
        int getMilesTraveledAnnually(bool includeUberLyftTrips);
    };

    //wash and wax car
    void washAndWaxCar( Car car ); //4) a member function whose parameter is a UDT.
    //charge customer
    float chargeCustomer(float discountPercentage);
    //detail the car interior
    void detailInterior( Car car );
    
    //5) a member variable whose type is a UDT.
    Car carBeingServiced;  
};


/*
1)
Skateboard
5 properties:
    1) Grip tape color
    2) Hardness of Wheels
    3) Brand of Trucks
    4) Age of Bearings
    5) Type of Wood
3 things it can do:
    1) roll
    2) slide
    3) flip
 */

/*
2) Car
5 properties:	
    1) Brand of Radio	    
    2) Number of Tires	    
    3) Size of Engine	    
    4) Brand of Rims	    
    5) Count of Seats	    
3 things it can do:	
    1) Drive	    
    2) Park	   
    3) Stop

 */

/*
3)
Computer
5 properties:
    1) Feel of keys
    2) Resolution of Monitor
    3) Kinds of indictor lights
    4) Number of buttons
    5) Speed of Processor
3 things it can do:
    1) do taxes
    2) play music
    3) display numbers
 */

/*
4)
Midi Controller
5 properties:
    1) Number of knobs
    2) Kinds of buttons
    3) Range of faders
    4) Size of display
    5) Types of pads
3 things it can do:
    1) control synth
    2) adjust volume
    3) change bank
 */

/*
Thing 5) Filter
    1) Filter Type
    2) Range of Frequency
    3) Amount of Resonance
    4) Amount of modulation
    5) Amount of Cutoff
3 things it can do:
    1) make a sound darker
    2) make the sound sharper
    3) make the sound brighter

 */

/*
Thing 6) Oscillator
    1) Amount of Frequency Modulation
    2) Type of Waveform
    3) Amount of course pitch change
    4) Sync
    5) Amount of Volume

3 things it can do:
    1) Modulate another Oscillator
    2) Generates a signal
    3) Converts DC to AC

 */

/*
Thing 7) LFO
    1) Type of waveform
    2) Rate of LFO
    3) Phase start position
    4) Sync with DAW Tempo
    5) Polarity

3 things it can do:
    1) Modulate Cutoff
    2) Change Pitch
    3) Adjust Frequency

 */

/*
Thing 8) Display
    1) Resolution
    2) Pixel Size
    3) Width
    4) Color
    5) Display Technology

3 things it can do:
    1) Show settings
    2) Consume electric
    3) Glow

 */

/*
Thing 9) FX Section
    1) Amount of Reverb
    2) Amount of distortion
    3) Amount of Wet Signal (dry/wet)
    4) Delay type
    5) Reverb type

3 things it can do:
    1) Make the sound echo
    2) Reverberate the sound
    3) Saturate the sound

 */

/*
Thing 10) Synthesizer
5 properties:
    1) Filter
    2) LFO
    3) Oscillator
    4) Display
    5) FX Section
3 things it can do:
    1) Oscillate
    2) Play sounds
    3) Arpegiate


*/

 /*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go!" << std::endl;
}
