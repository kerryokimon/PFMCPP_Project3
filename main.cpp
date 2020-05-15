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



//1)
struct Skateboard
{//5 properties:
    //1) Grip tape color
    std::string gripTapeColor = "Green";
    //2) Hardness of Wheels
    int wheelsHardness = 99;
    //3) Brand of Trucks
    std::string truckBrand = "Independent";
    //4) Age of Bearings
    int bearingAgeYears = 2;
    //5) Type of Wood
    std::string woodType = "oak";
//3 things it can do:
    //1) roll
    void rollDownStreet(int speed);
    //2) slide
    void railSlide(bool frontSide = true);
    //3) flip
    void kickFlip(int degree = 360);
};


//2) 
struct Car
{
//5 properties:	
    //1) Brand of Radio	    
    std::string radioBrand = "Sony";
    //2) Number of Tires	    
    int numTires = 4;
    //3) Size of Engine	    
    int engineSize = 4600;
    //4) Brand of Rims	    
    std::string rimBrand = "MSR";
    //5) Count of Seats
    int seatCount = 2;	    
//3 things it can do:	
    //1) Drive	
    void drive(int speed);    
    //2) Park
    void park(int parkingStallNumber);	   
    //3) Stop
    void stop(int stopDistance);
};
 


//3)
struct Computer
{
//5 properties:
    //1) Feel of keys
    int keyFeel = 2;
    //2) Resolution of Monitor
    int monitorResolution = 1080;
    //3) Kinds of indictor lights
    std::string indicatorLightKind = "LED";
    //4) Number of buttons
    int buttonCount = 3;
    //5) Speed of Processor
    float processorSpeed = 4.0f;
//3 things it can do:
    //1) do taxes
    void runQuickbooks(bool isQbInstalled = true);
    //2) play music
    void playMusic(int howLoud = 11); //play it loud!
    //3) display numbers
    void displayNumbers(int numberCount);
};


//4)
struct MidiController
{
//5 properties:
    //1) Number of knobs
    int knobCount = 16;
    //2) Kinds of buttons
    char buttonStyle = 'l';
    //3) Range of faders
    int faderRange = 10;
    //4) Size of display
    float displaySizeInches = 7.2f;
    //5) Types of pads
    std::string padType = "lit";

//3 things it can do:
    //1) control synth
    void controlSynth(int midiMessage);
    //2) adjust volume
    void adjustVolume(int midiMessage = 7);
    //3) change bank
    void changeBank(int bankNumber);
};


//Thing 5) 
struct Filter
{
    //1) Filter Type
    std::string filterType = "LP";
    //2) Range of Frequency
    float frequencyRange = 20000.0F;
    //3) Amount of Resonance
    int rezAmount = 1; //1-100
    //4) Amount of modulation
    int modAmount = 1; //1-100
    //5) Frequency of Cutoff
    float cutOffFrequency = 20.0f;
//3 things it can do:
    //1) make a sound darker
    void soundTone(float cutoffFrequency = 20.0f);
    //2) make the sound sharper
    void addResonance(int rezAmount);
    //3) make the sound brighter
    void cutLowFreq(float cutOffFrequency = 1000.0f);
};


//Thing 6) 
struct Oscillator
{
    //1) Amount of Frequency Modulation
    int freqMod = 1; //1-10
    //2) Type of Waveform
    int waveType = 1; //1=sine 2=saw 3=square
    //3) Amount of course pitch change
    int maxPitchChange = 24; //semitones
    //4) Sync
    bool syncOn = false;
    //5) Amount of Volume
    int maxVolume = 1; //1-11
//3 things it can do:
    
    //1) Modulate another Oscillator
    bool osc2Mod = true;
    //2) Generates a signal
    void signalGen(int frequency);
    //3) Converts DC to AC
    bool voltageConversion = true;
};
 


//Thing 7) 
struct LFO
{
    //1) Type of waveform
    int waveType = 1; //1=sine 2=saw 3=square
    //2) Rate of LFO
    float LfoRate = 20.0f;
    //3) Phase start position
    int phaseStartPos = 1;  //1-100
    //4) Sync with DAW Tempo
    bool syncOn = false;
    //5) Polarity
    bool bipolarOn = true;

//3 things it can do:
    //1) Modulate Cutoff
    void modulateCutoff(float lfoRate, bool syncOn = false);
    //2) Change Pitch
    void changePitch(int pitchChangeAmount);
    //3) Adjust Frequency
    void adjustFrequency(int freqHz);
};


//Thing 8) 
struct Display
{
    //1) Resolution
    int screenRes = 1080;
    //2) Pixel Size
    int pixelSize = 2;
    //3) Width
    float displayWidth = 7.2f;
    //4) Color
    char displayColor = 'b'; //b = blue r = red
    //5) Display Technology
    std::string displayTechnology = "LED";
//3 things it can do:
    //1) Show settings
    void displaySettings(char displayColor = 'r');
    //2) Consume electric
    void energyConsumption();
    //3) Glow
    void displayBritenessDim (bool powerSaver = true, int lumens = 100);
};
 


//Thing 9) 
struct FXSection
{
    //1) Amount of Reverb
    int reverbAmount = 50;
    //2) Amount of distortion
    int distAmount = 1;
    //3) Amount of Wet Signal (dry/wet)
    int wetSignal = 50;
    //4) Delay type
    int delayType = 1; //1 = pingpong 2 = tape
    //5) Reverb type
    int reverbType = 1; //1 = plate 2 = spring

//3 things it can do:
    //1) Make the sound echo
    void delayActive(bool delayOn = false); 
    //2) Reverberate the sound
    void reverbOutput(int reverbtype, bool reverbOn = true);
    //3) Saturate the sound
    void saturationActive(int distAmount, bool wetSignal());
};
 


//Thing 10) 
struct Synthesizer
{
//5 properties:
    //1) Filter
    Filter filterA;
    //2) LFO
    LFO lfo1;
    //3) Oscillator
    Oscillator osc1;
    //4) Display
    Display display;
    //5) FX Section
    FXSection fxtab1;
//3 things it can do:
    //1) Sequence
    void sequenceNotesOn();
    //2) Play sounds
    void playSound(Synthesizer(std::string brand));
    //3) Arpeggiate
    void synthArpeggiate(int style = 1); //1=up 2=down
};



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
