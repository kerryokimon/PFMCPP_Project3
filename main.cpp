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
#include <iostream>

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
        int length;
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
    length = 1.0f;
}
int Person::Foot::stepSize(int howLong)
{
    length = 2;
    howLong = length + length;
    std::cout << howLong;
}

void Person::run(int howFast, bool startWithLeftFoot)
{
    if(startWithLeftFoot == true)
    {
        howFast = 10;
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

  
    float rollDownStreet(int speed); //returns how far you roll
    
    double railSlide(bool frontSide = true); //returns the distance slid
    
    bool kickFlip(int degree = 360); //returns true if the kickflip was successfully performed.
};

void Skateboard::rollDownStreet(int speed)
{
  if (speed > 20)
    {
        std::cout << "Slow Down\n.";  

    }

}
void Skateboard::railSlide(bool frontSide)
{
    if (frontSide)
    {
        std::cout << "Now try it backside, dude!\n.";
    }
    else
    {
        std::cout << "Now try it frontside, dude!\n.";
    }
}

void Skateboard::kickFlip(int degree)
{
    if (degree > 360)
    {
        std::cout << "rad!\n.";
    }
}
/*
if( true )
{ 
    do the stuff inside this{}
else
{
    do the stuff in side THIS{}
}
*/

struct Car
{
   
    std::string radioBrand = "Sony";
    int numTires = 4;
    int engineSize = 4600;
    std::string rimBrand = "MSR";
    int seatCount = 2;

    
    int drive(int speed);    //returns how far you drove
    
    void park(int parkingStallNumber);
    
    bool stop(int stopDistance); //returns true if you stopped in time.
};
 
void Car::drive(int speed)
{
    speed = 65;
}

void Car::park(int parkingStallNumber)
{
    if (parkingStallNumber == 3)
    {
        std::cout << "Parking Stall" << parkingStallNumber << "is not paid\n.";
    }
}
void Car::stop(int stopDistance)
{
    if (stopDistance >= 30)
    {
        std::cout << "Crash!\n.";
    }
}

struct Computer
{

    int keyFeel = 2;
    
    int monitorResolution = 1080;
    
    std::string indicatorLightKind = "LED";
    
    int buttonCount = 3;
    
    float processorSpeed = 4.0f;

    
    bool runQuickbooks(bool isQbInstalled = true); //returns true if it ran successfully
    
    bool playMusic(int howLoud = 11); //returns true if hearing damage occurred
    
    void displayVolume(int loudness = 1);
};

void Computer::runQuickbooks(bool isQBInstalled)
{
    isQBInstalled = false;
}
void Computer::displayVolume(int loudness)
{
    loudness = 11;
}
void Computer::playMusic(int howLoud)
{
    int loudness;
    if (howLoud == 11)
    {
        loudness = howLoud;
    }
    else
    {
        loudness = 0; //there is only one loudness and that's 11 or turn it off!!!!
    }
}
//4)
struct MidiController
{

    int knobCount = 16;
    
    char buttonStyle = 'l';
    
    int faderRange = 10;
    
    float displaySizeInches = 7.2f;
    
    std::string padType = "lit";


    void controlSynth(int midiMessage);
    
    float adjustVolume(int midiMessage = 7); //returns the volume level in decibels
    
    void changeBank(int bankNumber);
};

void MidiController::controlSynth(int midiMessage)
{
    if (midiMessage == 74)
    {
        std::cout << "cut off adjusting\n.";
    }
}

void MidiController::adjustVolume(int midiMessage)
{
    bool midiVolume = true;
    if (midiMessage == 7)
    
    {
        midiVolume = true;
    }
}

void MidiController::changeBank(int bankNumber)
{
    //if (bankNumber);

    std::cout << "bank" << bankNumber << "selected\n.";
}

//Thing 5) 
struct Filter
{
    
    std::string filterType = "LP";
    
    float frequencyRange = 20000.0F;
    
    int rezAmount = 1; //1-100
    
    int modAmount = 1; //1-100
    
    float cutOffFrequency = 20.0f;

    void getSoundTone(float cutoffFrequency = 20.0f,float freqRangeRemaining = 0.0f);
    
    int addResonance(int rezAmount, int resonance); //returns the total resonance amount
    
    void cutLowFreq(float cutOffFrequency = 1000.0f);
};

void Filter::getSoundTone(float cutoffFrequency, float freqRangeRemaining)
{
    if (cutOffFrequency < frequencyRange)
    {
        
        freqRangeRemaining = (frequencyRange - cutOffFrequency);
        std::cout << freqRangeRemaining;
    }
    else
    {
        std::cout << cutoffFrequency;
    } 
}
void addResonance(int rezAmount, int resonance)
{
    rezAmount = 2;
    resonance = resonance + rezAmount;
}




//Thing 6) 
struct Oscillator
{
    
    int freqMod = 1; //1-10
    
    int waveType = 1; //1=sine 2=saw 3=square
    
    int maxPitchChange = 24; //semitones
    
    bool syncOn = false;
    
    int maxVolume = 1; //1-11

    
    
    float osc2Mod(bool osc2ModActive = false); //returns the new OSC output value.
    
    void signalGen(int frequency);
    
    float convertVoltage(bool voltageCovertActive = true); //returns the converted voltage level
};

void Oscillator::osc2Mod(bool osc2ModActive)
{
    if (osc2ModActive == true)
    {
        freqMod = 5;
    }
}

void Oscillator::signalGen(int frequency)
{
    if (syncOn == true)
    {
        std::cout << frequency;
    }
}

void Oscillator::convertVoltage(bool voltageConvertActive)
{
    int voltageOutput = 120;
    if (voltageConvertActive == true)
    {
        std::cout << voltageOutput;
    }
}



//Thing 7) 
struct LFO
{
    
    int waveType = 1; //1=sine 2=saw 3=square
    
    float LfoRate = 20.0f;
    
    int phaseStartPos = 1;  //1-100
    
    bool syncOn = false;
    
    bool bipolarOn = true;


    
    float modulateCutoff(float lfoRate, bool syncOn = false); //returns filter frequency after being modulated
    
    float changePitch(int pitchChangeAmount); //returns new pitch, expressed in Hertz
    
    void adjustFrequency(int freqHz);
};
void LFO::modulateCutoff(float lfoRate, bool syncOff)
{
    if (syncOff == true)
    {
        lfoRate = 333.0f;
    }
}

void LFO::changePitch(int pitchChangeAmount)
{
    if (pitchChangeAmount == 12)
    {
        std::cout << "1 octave\n.";
    }
}
void LFO::adjustFrequency(int freqHz)
{
    std::cout << freqHz;
}




//Thing 8) 
struct Display
{
    
    int screenRes = 1080;
    
    int pixelSize = 2;
    
    float displayWidth = 7.2f;
    
    char displayColor = 'b'; //b = blue r = red
    
    std::string displayTechnology = "LED";

    
    void displaySettings(char newDisplayColor);
    
    bool energyConsumption(int wattsUsed); //returns true if it triggers a blown fuse.
    
    float displayBritenessDim (bool powerSaver = true, int lumens = 100); //returns the power consumed at this new brightness level
};
 
void Display::displaySettings(char newDisplayColor)
{
    if (displayTechnology == "OLED")
    {
        newDisplayColor = 'r';
    }
    else
    {
        newDisplayColor = 'b';
    } 
}
void Display::displayBritenessDim (bool powerSaver, int lumens)
{
    powerSaver = true;
    lumens = 50;
}
void Display::energyConsumption(int wattsUsed)
{
    if (wattsUsed > 100)
    {
        void displayBritenessDim(); //(bool powerSaver);
       
    }
}


//Thing 9) 
struct FXSection
{
    
    int reverbAmount = 50;
    
    int distAmount = 1;
    
    int wetSignal = 50;
    
    int delayType = 1; //1 = pingpong 2 = tape
    
    int reverbTypeA = 1; //1 = plate 2 = spring


    
    void delayActive(bool delayOn = false); 
    
    float reverbOutput(int reverbType, bool reverbOn = true); //returns one sample of computed reverb
    
    void saturationActive(int distAmount2, bool active);
};
void FXSection::delayActive(bool delayOn)
{
    if (delayOn == true)
    {
        wetSignal = 75;
        delayType = 1;
    }
}

void FXSection::reverbOutput(int reverbType, bool reverbOn)
{
    reverbType = 1;
    reverbOn = true;
    reverbAmount = 25;
}
void FXSection::saturationActive(int distAmount2, bool active)
{
    distAmount2 = 50;
    active = false;
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
    
    float playSound(int soundNum, float numSamplesToPlay, float volumeLevel); //returns the volume level in decibels

    void handleKeyPress(int keyNumPressed);
    
    void synthOutput(int style = 1); //1=up 2=down
};

void Synthesizer::sequenceNotesOn()
{
    
    filterA.frequencyRange = 20.0f;
    lfo1.bipolarOn = true;
    lfo1.waveType = 1; //1=sine 2=saw 3=square
    lfo1.LfoRate = 20.0f;
    lfo1.phaseStartPos = 50;  //1-100
    lfo1.syncOn = true;
    lfo1.bipolarOn = true;
    
 
}

void Synthesizer::playSound(int soundNum, float numSamplesToPlay, float volumeLevel)
{
    /*
    this should decide WHICH sound is played.
    it shouldn't rely on whether or not the key is key is presed. 

    it's the other way around. 

    if you press the key, you playSound()

    Now, those function arguments make sense based on WHICH KEY you press.   

    Press Middle C?   play soundNum 35
    Press G5?  Play sound num whatever...

    */

    std::cout << "you played the sound: " << soundNum;
    std::cout << " for " << numSamplesToPlay << " samples,";
    std::cout << " at a volume level of " << volumeLevel << "\n";
}

void Synthesizer::handleKeyPress(int keyNumPressed)
{
    if( keyNumPressed == 64 )
    {
        playSound(35, 2048, 0.5);
    }
    else if( keyNumPressed == 66 )
    {
        playSound( 48, 1024, 0.75);
    }
    else
    {
        playSound( keyNumPressed, 512, 1.f );
    }
}

void Synthesizer::synthOutput(int style)
{
    
    if( style == 1)
    {
        sequenceNotesOn();
        playSound(44,444,333);
        lfo1.changePitch(10);
        fxtab1.reverbOutput(10, true);
    }
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
    Synthesizer synth;
    synth.handleKeyPress(64);
    synth.handleKeyPress(66);
    synth.handleKeyPress(33);

    std::cout << "good to go!" << std::endl;
}

