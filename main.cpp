 /*
 Project 3 - Part 2 / 5
 Video: Chapter 2 Part 6
 Implementations tasks
 
Create a branch named Part2

 tasks
 0) delete all of the plain english pseudo-code you added in Part1.
   - you should be left with only your UDTs.

 1) write the definition for the Type that leftFoot and rightFoot are instantiations of.
    don't forget to define and implement the member functions 'stepForward()' and 'stepSize()'
    you should be able to deduce the return type of those functions based on their usage in Person::run()
    You'll need to insert the Person struct from the video in the space below.
 */





 /*
 2) provide implementations for the member functions you declared in your 10 user-defined types from the previous video outside of your UDT definitions.
 
 3) be sure to write the correct full qualified name for the nested type's member functions.
 
 4) After you finish defining each type/function, click the [run] button.  Clear up any errors or warnings as best you can.
 */




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
