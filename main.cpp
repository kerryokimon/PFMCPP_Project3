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

#include <string>
struct Person
{
	int age;
	int height;
	float hairLength;
	float GPA;
    unsigned int SATScore;
    int distanceTravelled;

    struct Foot
    {
        float length;
        float width;
        float shoeSize;
        void stepForward();
        int stepSize(int howLong);
    };
    Foot rightFoot;
    Foot leftFoot;
    void run(int howFast, bool startWithLeftFoot);
    
};
void Person::Foot::stepForward()
{

}
int Person::Foot::stepSize(int howLong)
{
    
    return{};
}
void Person::run(int howFast, bool startWithLeftFoot)
{
    if(startWithLeftFoot == true)
    {
        leftFoot.stepForward();
        rightFoot.stepForward();
    }
    else
    {
    rightFoot.stepForward();
    leftFoot.stepForward();
    }
    distanceTravelled += rightFoot.stepSize(5) + leftFoot.stepSize(4);

}


 /*
 2) provide implementations for the member functions you declared in your 10 user-defined types from the previous video outside of your UDT definitions.
 
 3) be sure to write the correct full qualified name for the nested type's member functions.
 
 4) After you finish defining each type/function, click the [run] button.  Clear up any errors or warnings as best you can.
 */




//1)
struct Skateboard
{
    
    std::string gripTapeColor = "Green";
    
    int wheelsHardness = 99;
    
    std::string truckBrand = "Independent";
    
    int bearingAgeYears = 2;
    
    std::string woodType = "oak";

  
    void rollDownStreet(int speed);
    
    void railSlide(bool frontSide = true);
    
    void kickFlip(int degree = 360);
};

void Skateboard::rollDownStreet(int speed)
{
    

}
void Skateboard::railSlide(bool frontSide)
{

}

void Skateboard:: kickFlip(int degree)
{

}


struct Car
{
   
    std::string radioBrand = "Sony";
    	    
    int numTires = 4;
    	    
    int engineSize = 4600;
        
    std::string rimBrand = "MSR";
    
    int seatCount = 2;	    
	
    
    void drive(int speed);    
    
    void park(int parkingStallNumber);	   
    
    void stop(int stopDistance);
};
 
void Car::drive(int speed)
{

}

void Car::park(int parkingStallNumber)
{

}
void Car::stop(int stopDistance)
{

}

struct Computer
{

    int keyFeel = 2;
    
    int monitorResolution = 1080;
    
    std::string indicatorLightKind = "LED";
    
    int buttonCount = 3;
    
    float processorSpeed = 4.0f;

    
    void runQuickbooks(bool isQbInstalled = true);
    
    void playMusic(int howLoud = 11); //play it loud!
    
    void displayNumbers(int numberCount);
};


//4)
struct MidiController
{

    int knobCount = 16;
    
    char buttonStyle = 'l';
    
    int faderRange = 10;
    
    float displaySizeInches = 7.2f;
    
    std::string padType = "lit";


    void controlSynth(int midiMessage);
    
    void adjustVolume(int midiMessage = 7);
    
    void changeBank(int bankNumber);
};

void MidiController::controlSynth(int midiMessage)
{

}

void MidiController::adjustVolume(int midiMessage)
{

}

void MidiController::changeBank(int bankNumber)
{

}

//Thing 5) 
struct Filter
{
    
    std::string filterType = "LP";
    
    float frequencyRange = 20000.0F;
    
    int rezAmount = 1; //1-100
    
    int modAmount = 1; //1-100
    
    float cutOffFrequency = 20.0f;

    int soundTone(float cutoffFrequency = 20.0f);
    
    void addResonance(int rezAmount);
    
    void cutLowFreq(float cutOffFrequency = 1000.0f);
};

int Filter::soundTone(float cutoffFrequency)
{
    return {};
}

//Thing 6) 
struct Oscillator
{
    
    int freqMod = 1; //1-10
    
    int waveType = 1; //1=sine 2=saw 3=square
    
    int maxPitchChange = 24; //semitones
    
    bool syncOn = false;
    
    int maxVolume = 1; //1-11

    
    
    void osc2Mod(bool osc2ModActive = false);
    
    void signalGen(int frequency);
    
    void convertVoltage(bool voltageCovertActive = true);
};

void Oscillator::osc2Mod(bool osc2ModActive)
{
    
}

void Oscillator::signalGen(int frequency)
{

}

void Oscillator::convertVoltage(bool voltageConvertActive)
{

}



//Thing 7) 
struct LFO
{
    
    int waveType = 1; //1=sine 2=saw 3=square
    
    float LfoRate = 20.0f;
    
    int phaseStartPos = 1;  //1-100
    
    bool syncOn = false;
    
    bool bipolarOn = true;


    
    void modulateCutoff(float lfoRate, bool syncOn = false);
    
    void changePitch(int pitchChangeAmount);
    
    void adjustFrequency(int freqHz);
};
void LFO::modulateCutoff(float lfoRate, bool syncOn)
{

}

void LFO::changePitch(int pitchChangeAmount)
{

}
void LFO::adjustFrequency(int freqHz)
{

}




//Thing 8) 
struct Display
{
    
    int screenRes = 1080;
    
    int pixelSize = 2;
    
    float displayWidth = 7.2f;
    
    char displayColor = 'b'; //b = blue r = red
    
    std::string displayTechnology = "LED";

    
    void displaySettings(char displayColor = 'r');
    
    void energyConsumption(int wattsUsed);
    
    void displayBritenessDim (bool powerSaver = true, int lumens = 100);
};
 
void Display::displaySettings(char displayColor)
{

}

void Display::energyConsumption(int wattsUsed)
{

}

void Display::displayBritenessDim (bool powerSaver, int lumens)
{

}
//Thing 9) 
struct FXSection
{
    
    int reverbAmount = 50;
    
    int distAmount = 1;
    
    int wetSignal = 50;
    
    int delayType = 1; //1 = pingpong 2 = tape
    
    int reverbType = 1; //1 = plate 2 = spring


    
    void delayActive(bool delayOn = false); 
    
    void reverbOutput(int reverbType, bool reverbOn = true);
    
    void saturationActive(int distAmount, bool wetSignal);
};
void FXSection::delayActive(bool delayOn)
{

}

void FXSection::reverbOutput(int reverbType, bool reverbOn)
{

}
void FXSection::saturationActive(int distAmount, bool wetSignal)
{

}

//Thing 10) 
struct Synthesizer
{

    Filter filterA;
   
    LFO lfo1;
    
    Oscillator osc1;
    
    Display display;
    
    FXSection fxtab1;

   
    void sequenceNotesOn();
    
    void playSound(Synthesizer(std::string brand));
    
    void synthArpeggiate(int style = 1); //1=up 2=down
};

void Synthesizer::sequenceNotesOn()
{

}
void Synthesizer::playSound(Synthesizer(std::string brand))
{

}
void Synthesizer::synthArpeggiate(int style)
{
    
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

#include <iostream>
int main()
{
    std::cout << "good to go!" << std::endl;
}
